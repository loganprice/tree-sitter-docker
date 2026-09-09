#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "tree_sitter/parser.h"

#define MAX_HEREDOCS 16
#define MAX_DELIMITER_LEN 64

typedef struct {
    bool is_stripping;
    char delimiter[MAX_DELIMITER_LEN];
} Heredoc;

typedef struct {
    unsigned heredoc_count;
    Heredoc heredocs[MAX_HEREDOCS];
} ScannerState;

enum TokenType {
    HEREDOC_MARKER,
    HEREDOC_LINE,
    HEREDOC_END,
    KEYWORD_TERMINATOR,
    ERROR_SENTINEL,
};

static inline void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
}

void *tree_sitter_dockerfile_external_scanner_create(void) {
    ScannerState *state = (ScannerState *)calloc(1, sizeof(ScannerState));
    return state;
}

void tree_sitter_dockerfile_external_scanner_destroy(void *payload) {
    if (payload) {
        free(payload);
    }
}

unsigned tree_sitter_dockerfile_external_scanner_serialize(void *payload, char *buffer) {
    ScannerState *state = (ScannerState *)payload;
    unsigned pos = 0;

    buffer[pos++] = (char)(state->heredoc_count & 0xFF);

    for (unsigned i = 0; i < state->heredoc_count && i < MAX_HEREDOCS; i++) {
        buffer[pos++] = state->heredocs[i].is_stripping ? 1 : 0;
        unsigned len = (unsigned)strlen(state->heredocs[i].delimiter);
        buffer[pos++] = (char)(len & 0xFF);
        if (pos + len < TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
            memcpy(&buffer[pos], state->heredocs[i].delimiter, len);
            pos += len;
        }
    }

    return pos;
}

void tree_sitter_dockerfile_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    ScannerState *state = (ScannerState *)payload;
    state->heredoc_count = 0;

    if (length == 0 || !buffer) {
        return;
    }

    unsigned pos = 0;
    unsigned count = (unsigned char)buffer[pos++];

    for (unsigned i = 0; i < count && i < MAX_HEREDOCS && pos < length; i++) {
        state->heredocs[i].is_stripping = buffer[pos++] != 0;
        if (pos >= length) break;
        unsigned len = (unsigned char)buffer[pos++];
        if (pos + len <= length && len < MAX_DELIMITER_LEN) {
            memcpy(state->heredocs[i].delimiter, &buffer[pos], len);
            state->heredocs[i].delimiter[len] = '\0';
            pos += len;
            state->heredoc_count++;
        } else {
            break;
        }
    }
}

bool tree_sitter_dockerfile_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    ScannerState *state = (ScannerState *)payload;

    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
    }

    if (valid_symbols[KEYWORD_TERMINATOR]) {
        if (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
            lexer->lookahead == '\r' || lexer->lookahead == '\n' ||
            lexer->lookahead == 0) {
            lexer->result_symbol = KEYWORD_TERMINATOR;
            return true;
        }
        return false;
    }

    if (valid_symbols[HEREDOC_MARKER]) {
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            skip(lexer);
        }

        if (lexer->lookahead == '<') {
            advance(lexer);
            if (lexer->lookahead == '<') {
                advance(lexer);
                bool is_stripping = false;
                if (lexer->lookahead == '-') {
                    is_stripping = true;
                    advance(lexer);
                }

                char quote = 0;
                if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
                    quote = (char)lexer->lookahead;
                    advance(lexer);
                }

                char delimiter[MAX_DELIMITER_LEN];
                unsigned len = 0;

                while (lexer->lookahead != 0 &&
                       (quote ? lexer->lookahead != quote
                              : (lexer->lookahead != ' ' && lexer->lookahead != '\t' &&
                                 lexer->lookahead != '\r' && lexer->lookahead != '\n' &&
                                 lexer->lookahead != '\\'))) {
                    if (len + 1 < MAX_DELIMITER_LEN) {
                        delimiter[len++] = (char)lexer->lookahead;
                    }
                    advance(lexer);
                }

                if (quote && lexer->lookahead == quote) {
                    advance(lexer);
                }

                delimiter[len] = '\0';

                if (len > 0 && state->heredoc_count < MAX_HEREDOCS) {
                    state->heredocs[state->heredoc_count].is_stripping = is_stripping;
                    strncpy(state->heredocs[state->heredoc_count].delimiter, delimiter, MAX_DELIMITER_LEN - 1);
                    state->heredocs[state->heredoc_count].delimiter[MAX_DELIMITER_LEN - 1] = '\0';
                    state->heredoc_count++;
                    lexer->result_symbol = HEREDOC_MARKER;
                    return true;
                }
            }
        }
    }

    if (state->heredoc_count > 0 && (valid_symbols[HEREDOC_END] || valid_symbols[HEREDOC_LINE])) {
        Heredoc *current = &state->heredocs[0];
        size_t del_len = strlen(current->delimiter);

        if (valid_symbols[HEREDOC_END]) {
            // Check if leading tabs for stripping heredoc
            if (current->is_stripping) {
                while (lexer->lookahead == '\t') {
                    advance(lexer);
                }
            }

            bool match = (del_len > 0);
            for (size_t i = 0; i < del_len; i++) {
                if (lexer->lookahead != (int32_t)current->delimiter[i]) {
                    match = false;
                    break;
                }
                advance(lexer);
            }

            if (match) {
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }
                if (lexer->lookahead == '\r' || lexer->lookahead == '\n' || lexer->lookahead == 0) {
                    if (lexer->lookahead == '\r') advance(lexer);
                    if (lexer->lookahead == '\n') advance(lexer);

                    for (unsigned i = 0; i + 1 < state->heredoc_count; i++) {
                        state->heredocs[i] = state->heredocs[i + 1];
                    }
                    state->heredoc_count--;

                    lexer->result_symbol = HEREDOC_END;
                    return true;
                }
            }
        }

        if (valid_symbols[HEREDOC_LINE]) {
            while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
                advance(lexer);
            }
            if (lexer->lookahead == '\n') {
                advance(lexer);
            }
            lexer->result_symbol = HEREDOC_LINE;
            return true;
        }
    }

    return false;
}
