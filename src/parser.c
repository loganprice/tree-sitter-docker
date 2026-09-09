#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 408
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 4
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_line_continuation = 2,
  sym_comment = 3,
  sym_parser_directive = 4,
  aux_sym_from_instruction_token1 = 5,
  aux_sym_from_instruction_token2 = 6,
  aux_sym_run_instruction_token1 = 7,
  aux_sym_cmd_instruction_token1 = 8,
  aux_sym_label_instruction_token1 = 9,
  anon_sym_EQ = 10,
  aux_sym_expose_instruction_token1 = 11,
  anon_sym_SLASH = 12,
  aux_sym_env_instruction_token1 = 13,
  aux_sym_add_instruction_token1 = 14,
  aux_sym_copy_instruction_token1 = 15,
  aux_sym_entrypoint_instruction_token1 = 16,
  aux_sym_volume_instruction_token1 = 17,
  aux_sym_user_instruction_token1 = 18,
  anon_sym_COLON = 19,
  sym_user_name = 20,
  aux_sym_workdir_instruction_token1 = 21,
  aux_sym_arg_instruction_token1 = 22,
  aux_sym_onbuild_instruction_token1 = 23,
  aux_sym_stopsignal_instruction_token1 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  aux_sym_healthcheck_instruction_token2 = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_cross_build_instruction_token1 = 29,
  aux_sym_param_token1 = 30,
  aux_sym__shell_fragment_token1 = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_double_quoted_string_token1 = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_single_quoted_string_token1 = 36,
  sym_escape_sequence = 37,
  aux_sym_expansion_token1 = 38,
  anon_sym_DOLLAR_LBRACE = 39,
  anon_sym_COLON_DASH = 40,
  anon_sym_DASH = 41,
  anon_sym_COLON_EQ = 42,
  anon_sym_COLON_PLUS = 43,
  anon_sym_PLUS = 44,
  anon_sym_COLON_QMARK = 45,
  anon_sym_QMARK = 46,
  anon_sym_RBRACE = 47,
  anon_sym_LBRACK = 48,
  anon_sym_COMMA = 49,
  anon_sym_RBRACK = 50,
  sym_number = 51,
  sym_unquoted_string = 52,
  sym_unquoted_value = 53,
  sym_heredoc_marker = 54,
  sym_heredoc_line = 55,
  sym_heredoc_end = 56,
  sym__keyword_terminator = 57,
  sym_error_sentinel = 58,
  sym_source_file = 59,
  sym__instruction = 60,
  sym_from_instruction = 61,
  sym_image_spec = 62,
  sym_run_instruction = 63,
  sym_cmd_instruction = 64,
  sym_label_instruction = 65,
  sym_label_pair = 66,
  sym__spaced_label_pair = 67,
  sym_expose_instruction = 68,
  sym_expose_port = 69,
  sym_env_instruction = 70,
  sym_env_pair = 71,
  sym__spaced_env_pair = 72,
  sym_add_instruction = 73,
  sym_copy_instruction = 74,
  sym_entrypoint_instruction = 75,
  sym_volume_instruction = 76,
  sym_user_instruction = 77,
  sym_workdir_instruction = 78,
  sym_arg_instruction = 79,
  sym_onbuild_instruction = 80,
  sym_stopsignal_instruction = 81,
  sym_healthcheck_instruction = 82,
  sym_shell_instruction = 83,
  sym_maintainer_instruction = 84,
  sym_cross_build_instruction = 85,
  sym_param = 86,
  sym_shell_command = 87,
  sym__shell_fragment = 88,
  sym_heredoc_block = 89,
  sym_path = 90,
  sym_string = 91,
  sym_double_quoted_string = 92,
  sym_single_quoted_string = 93,
  sym_expansion = 94,
  sym_json_string_array = 95,
  sym_identifier = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_source_file_repeat2 = 98,
  aux_sym_from_instruction_repeat1 = 99,
  aux_sym_image_spec_repeat1 = 100,
  aux_sym_run_instruction_repeat1 = 101,
  aux_sym_label_instruction_repeat1 = 102,
  aux_sym_expose_instruction_repeat1 = 103,
  aux_sym_env_instruction_repeat1 = 104,
  aux_sym__spaced_env_pair_repeat1 = 105,
  aux_sym_add_instruction_repeat1 = 106,
  aux_sym_volume_instruction_repeat1 = 107,
  aux_sym_maintainer_instruction_repeat1 = 108,
  aux_sym_shell_command_repeat1 = 109,
  aux_sym_heredoc_block_repeat1 = 110,
  aux_sym_double_quoted_string_repeat1 = 111,
  aux_sym_single_quoted_string_repeat1 = 112,
  aux_sym_json_string_array_repeat1 = 113,
  alias_sym_image_alias = 114,
  alias_sym_maintainer_info = 115,
  alias_sym_protocol = 116,
  alias_sym_variable = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_parser_directive] = "parser_directive",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [anon_sym_EQ] = "=",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [anon_sym_SLASH] = "/",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_add_instruction_token1] = "ADD",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [anon_sym_COLON] = ":",
  [sym_user_name] = "user_name",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [aux_sym_healthcheck_instruction_token2] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_cross_build_instruction_token1] = "cross_build_command",
  [aux_sym_param_token1] = "param_name",
  [aux_sym__shell_fragment_token1] = "_shell_fragment_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_expansion_token1] = "expansion_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_PLUS] = ":+",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON_QMARK] = ":\?",
  [anon_sym_QMARK] = "\?",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [sym_unquoted_string] = "unquoted_string",
  [sym_unquoted_value] = "unquoted_value",
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_line] = "heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym__keyword_terminator] = "_keyword_terminator",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_image_spec] = "image_spec",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_label_pair] = "label_pair",
  [sym__spaced_label_pair] = "label_pair",
  [sym_expose_instruction] = "expose_instruction",
  [sym_expose_port] = "expose_port",
  [sym_env_instruction] = "env_instruction",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_param] = "param",
  [sym_shell_command] = "shell_command",
  [sym__shell_fragment] = "_shell_fragment",
  [sym_heredoc_block] = "heredoc_block",
  [sym_path] = "path",
  [sym_string] = "string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_expansion] = "expansion",
  [sym_json_string_array] = "json_string_array",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_from_instruction_repeat1] = "from_instruction_repeat1",
  [aux_sym_image_spec_repeat1] = "image_spec_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym__spaced_env_pair_repeat1] = "_spaced_env_pair_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_maintainer_instruction_repeat1] = "maintainer_instruction_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_heredoc_block_repeat1] = "heredoc_block_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [alias_sym_image_alias] = "image_alias",
  [alias_sym_maintainer_info] = "maintainer_info",
  [alias_sym_protocol] = "protocol",
  [alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_parser_directive] = sym_parser_directive,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_user_name] = sym_user_name,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [aux_sym_healthcheck_instruction_token2] = aux_sym_healthcheck_instruction_token2,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym__shell_fragment_token1] = aux_sym__shell_fragment_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_expansion_token1] = aux_sym_expansion_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_PLUS] = anon_sym_COLON_PLUS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_unquoted_value] = sym_unquoted_value,
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_line] = sym_heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym__keyword_terminator] = sym__keyword_terminator,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_image_spec] = sym_image_spec,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_label_pair] = sym_label_pair,
  [sym__spaced_label_pair] = sym_label_pair,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_expose_port] = sym_expose_port,
  [sym_env_instruction] = sym_env_instruction,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_param] = sym_param,
  [sym_shell_command] = sym_shell_command,
  [sym__shell_fragment] = sym__shell_fragment,
  [sym_heredoc_block] = sym_heredoc_block,
  [sym_path] = sym_path,
  [sym_string] = sym_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_expansion] = sym_expansion,
  [sym_json_string_array] = sym_json_string_array,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_from_instruction_repeat1] = aux_sym_from_instruction_repeat1,
  [aux_sym_image_spec_repeat1] = aux_sym_image_spec_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym__spaced_env_pair_repeat1] = aux_sym__spaced_env_pair_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_maintainer_instruction_repeat1] = aux_sym_maintainer_instruction_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_heredoc_block_repeat1] = aux_sym_heredoc_block_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [alias_sym_image_alias] = alias_sym_image_alias,
  [alias_sym_maintainer_info] = alias_sym_maintainer_info,
  [alias_sym_protocol] = alias_sym_protocol,
  [alias_sym_variable] = alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_parser_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_user_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_param_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym__shell_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_heredoc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spaced_env_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_maintainer_info] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_protocol] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_as = 1,
  field_default = 2,
  field_default_value = 3,
  field_destination = 4,
  field_group = 5,
  field_image = 6,
  field_key = 7,
  field_name = 8,
  field_operator = 9,
  field_path = 10,
  field_port = 11,
  field_protocol = 12,
  field_signal = 13,
  field_source = 14,
  field_user = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_default_value] = "default_value",
  [field_destination] = "destination",
  [field_group] = "group",
  [field_image] = "image",
  [field_key] = "key",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_path] = "path",
  [field_port] = "port",
  [field_protocol] = "protocol",
  [field_signal] = "signal",
  [field_source] = "source",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 2},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 1},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 25, .length = 2},
  [22] = {.index = 27, .length = 2},
  [23] = {.index = 29, .length = 2},
  [24] = {.index = 31, .length = 2},
  [25] = {.index = 33, .length = 2},
  [26] = {.index = 35, .length = 2},
  [27] = {.index = 37, .length = 3},
  [28] = {.index = 40, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_image, 2},
  [1] =
    {field_key, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [3] =
    {field_port, 0},
  [4] =
    {field_name, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [6] =
    {field_source, 0},
  [7] =
    {field_user, 2},
  [8] =
    {field_path, 2},
  [9] =
    {field_name, 2},
  [10] =
    {field_signal, 2},
  [11] =
    {field_name, 1},
  [12] =
    {field_image, 3},
  [13] =
    {field_key, 0},
    {field_value, 1},
  [15] =
    {field_name, 0},
  [16] =
    {field_name, 0},
    {field_value, 1},
  [18] =
    {field_destination, 3},
    {field_source, 2, .inherited = true},
  [20] =
    {field_source, 0, .inherited = true},
    {field_source, 1, .inherited = true},
  [22] =
    {field_value, 2},
  [23] =
    {field_key, 0},
    {field_value, 2},
  [25] =
    {field_port, 0},
    {field_protocol, 2},
  [27] =
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_destination, 4},
    {field_source, 3, .inherited = true},
  [31] =
    {field_group, 4},
    {field_user, 2},
  [33] =
    {field_default_value, 4},
    {field_name, 2},
  [35] =
    {field_as, 5},
    {field_image, 2},
  [37] =
    {field_default, 3},
    {field_name, 1},
    {field_operator, 2},
  [40] =
    {field_as, 6},
    {field_image, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [2] = alias_sym_maintainer_info,
  },
  [11] = {
    [1] = alias_sym_variable,
  },
  [20] = {
    [2] = alias_sym_protocol,
  },
  [26] = {
    [5] = alias_sym_image_alias,
  },
  [27] = {
    [1] = alias_sym_variable,
  },
  [28] = {
    [6] = alias_sym_image_alias,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_image_alias,
  aux_sym_maintainer_instruction_repeat1, 2,
    aux_sym_maintainer_instruction_repeat1,
    alias_sym_maintainer_info,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 13,
  [27] = 16,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 34,
  [45] = 34,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 57,
  [68] = 64,
  [69] = 61,
  [70] = 65,
  [71] = 59,
  [72] = 63,
  [73] = 58,
  [74] = 66,
  [75] = 75,
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 57,
  [81] = 64,
  [82] = 65,
  [83] = 59,
  [84] = 63,
  [85] = 61,
  [86] = 58,
  [87] = 66,
  [88] = 88,
  [89] = 88,
  [90] = 64,
  [91] = 91,
  [92] = 75,
  [93] = 60,
  [94] = 94,
  [95] = 65,
  [96] = 88,
  [97] = 59,
  [98] = 63,
  [99] = 57,
  [100] = 64,
  [101] = 61,
  [102] = 65,
  [103] = 59,
  [104] = 63,
  [105] = 58,
  [106] = 66,
  [107] = 107,
  [108] = 61,
  [109] = 58,
  [110] = 66,
  [111] = 57,
  [112] = 64,
  [113] = 65,
  [114] = 59,
  [115] = 63,
  [116] = 61,
  [117] = 58,
  [118] = 66,
  [119] = 88,
  [120] = 88,
  [121] = 88,
  [122] = 88,
  [123] = 88,
  [124] = 88,
  [125] = 88,
  [126] = 88,
  [127] = 88,
  [128] = 88,
  [129] = 57,
  [130] = 61,
  [131] = 131,
  [132] = 62,
  [133] = 60,
  [134] = 57,
  [135] = 64,
  [136] = 65,
  [137] = 59,
  [138] = 63,
  [139] = 61,
  [140] = 58,
  [141] = 66,
  [142] = 58,
  [143] = 65,
  [144] = 66,
  [145] = 145,
  [146] = 66,
  [147] = 57,
  [148] = 64,
  [149] = 59,
  [150] = 63,
  [151] = 91,
  [152] = 58,
  [153] = 61,
  [154] = 154,
  [155] = 63,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 154,
  [163] = 163,
  [164] = 164,
  [165] = 161,
  [166] = 154,
  [167] = 167,
  [168] = 75,
  [169] = 161,
  [170] = 154,
  [171] = 171,
  [172] = 172,
  [173] = 161,
  [174] = 59,
  [175] = 175,
  [176] = 161,
  [177] = 154,
  [178] = 60,
  [179] = 161,
  [180] = 154,
  [181] = 154,
  [182] = 161,
  [183] = 183,
  [184] = 161,
  [185] = 161,
  [186] = 154,
  [187] = 187,
  [188] = 161,
  [189] = 154,
  [190] = 190,
  [191] = 161,
  [192] = 154,
  [193] = 193,
  [194] = 161,
  [195] = 154,
  [196] = 64,
  [197] = 65,
  [198] = 78,
  [199] = 154,
  [200] = 200,
  [201] = 201,
  [202] = 57,
  [203] = 64,
  [204] = 65,
  [205] = 59,
  [206] = 63,
  [207] = 207,
  [208] = 208,
  [209] = 61,
  [210] = 210,
  [211] = 58,
  [212] = 66,
  [213] = 200,
  [214] = 57,
  [215] = 64,
  [216] = 65,
  [217] = 59,
  [218] = 63,
  [219] = 219,
  [220] = 200,
  [221] = 61,
  [222] = 222,
  [223] = 58,
  [224] = 66,
  [225] = 78,
  [226] = 201,
  [227] = 222,
  [228] = 228,
  [229] = 228,
  [230] = 60,
  [231] = 231,
  [232] = 200,
  [233] = 200,
  [234] = 200,
  [235] = 200,
  [236] = 200,
  [237] = 200,
  [238] = 200,
  [239] = 200,
  [240] = 200,
  [241] = 200,
  [242] = 91,
  [243] = 58,
  [244] = 66,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 61,
  [250] = 57,
  [251] = 58,
  [252] = 59,
  [253] = 63,
  [254] = 254,
  [255] = 61,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 66,
  [260] = 258,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 258,
  [265] = 262,
  [266] = 258,
  [267] = 267,
  [268] = 262,
  [269] = 269,
  [270] = 258,
  [271] = 271,
  [272] = 258,
  [273] = 262,
  [274] = 274,
  [275] = 258,
  [276] = 262,
  [277] = 258,
  [278] = 262,
  [279] = 258,
  [280] = 262,
  [281] = 281,
  [282] = 258,
  [283] = 283,
  [284] = 262,
  [285] = 258,
  [286] = 62,
  [287] = 262,
  [288] = 258,
  [289] = 262,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 60,
  [294] = 262,
  [295] = 57,
  [296] = 64,
  [297] = 297,
  [298] = 65,
  [299] = 262,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 75,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 307,
  [313] = 313,
  [314] = 310,
  [315] = 274,
  [316] = 91,
  [317] = 60,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 263,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 291,
  [339] = 267,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 346,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 345,
  [352] = 352,
  [353] = 353,
  [354] = 346,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 352,
  [360] = 352,
  [361] = 346,
  [362] = 362,
  [363] = 363,
  [364] = 346,
  [365] = 365,
  [366] = 352,
  [367] = 346,
  [368] = 346,
  [369] = 369,
  [370] = 346,
  [371] = 371,
  [372] = 372,
  [373] = 352,
  [374] = 374,
  [375] = 346,
  [376] = 376,
  [377] = 346,
  [378] = 378,
  [379] = 352,
  [380] = 352,
  [381] = 381,
  [382] = 352,
  [383] = 345,
  [384] = 346,
  [385] = 345,
  [386] = 386,
  [387] = 345,
  [388] = 388,
  [389] = 345,
  [390] = 390,
  [391] = 345,
  [392] = 352,
  [393] = 345,
  [394] = 394,
  [395] = 345,
  [396] = 352,
  [397] = 345,
  [398] = 346,
  [399] = 399,
  [400] = 400,
  [401] = 345,
  [402] = 402,
  [403] = 345,
  [404] = 352,
  [405] = 345,
  [406] = 352,
  [407] = 352,
};

static TSCharacterRange sym_unquoted_string_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'%', '&'}, {'*', '<'}, {'>', 'Z'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 124,
        '$', 200,
        '\'', 201,
        '+', 299,
        ',', 305,
        '-', 296,
        '/', 156,
        ':', 170,
        '=', 153,
        '?', 301,
        '[', 303,
        '\\', 3,
        ']', 306,
        '}', 302,
        'A', 217,
        'a', 217,
        'C', 252,
        'c', 252,
        'E', 254,
        'e', 254,
        'F', 278,
        'f', 278,
        'H', 226,
        'h', 226,
        'L', 208,
        'l', 208,
        'M', 209,
        'm', 209,
        'N', 265,
        'n', 265,
        'O', 256,
        'o', 256,
        'R', 288,
        'r', 288,
        'S', 234,
        's', 234,
        'U', 279,
        'u', 279,
        'V', 262,
        'v', 262,
        'W', 264,
        'w', 264,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 195,
        '#', 139,
        '$', 200,
        '&', 190,
        '\'', 201,
        '-', 317,
        '1', 320,
        '2', 321,
        '<', 191,
        '=', 153,
        '>', 192,
        '[', 304,
        '\\', 4,
        '|', 193,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(323);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 195,
        '#', 139,
        '$', 200,
        '&', 190,
        '\'', 201,
        '1', 320,
        '2', 321,
        '<', 191,
        '>', 192,
        '[', 304,
        '\\', 4,
        '|', 193,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(323);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 195,
        '#', 139,
        '$', 200,
        '\'', 201,
        '-', 310,
        '=', 153,
        '[', 303,
        '\\', 4,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(314);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '$') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 41:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 54:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 58:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 69:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 89:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 91:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 94:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 97:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 102:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 104:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 110:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 124,
        '$', 200,
        '\'', 201,
        '+', 299,
        ',', 305,
        '-', 296,
        '/', 156,
        ':', 170,
        '=', 153,
        '?', 301,
        '[', 303,
        '\\', 4,
        ']', 306,
        '}', 302,
        'A', 217,
        'a', 217,
        'C', 252,
        'c', 252,
        'E', 254,
        'e', 254,
        'F', 278,
        'f', 278,
        'H', 226,
        'h', 226,
        'L', 208,
        'l', 208,
        'M', 209,
        'm', 209,
        'N', 265,
        'n', 265,
        'O', 256,
        'o', 256,
        'R', 288,
        'r', 288,
        'S', 234,
        's', 234,
        'U', 279,
        'u', 279,
        'V', 262,
        'v', 262,
        'W', 264,
        'w', 264,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 111:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 139,
        '$', 200,
        '&', 190,
        '\'', 201,
        '1', 320,
        '2', 321,
        '<', 191,
        '>', 192,
        '\\', 4,
        '|', 193,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(111);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(323);
      END_STATE();
    case 112:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 139,
        '$', 200,
        '\'', 201,
        ':', 169,
        '\\', 4,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(171);
      END_STATE();
    case 113:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 139,
        '$', 200,
        '\'', 201,
        '=', 153,
        '[', 303,
        '\\', 4,
        ']', 306,
        '}', 302,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '{') ADVANCE(314);
      END_STATE();
    case 114:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 139,
        '$', 200,
        '\'', 201,
        '=', 153,
        '\\', 4,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(114);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(312);
      END_STATE();
    case 115:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '"', 195,
        '#', 139,
        '$', 200,
        '\'', 201,
        '\\', 4,
        'A', 311,
        'a', 311,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(314);
      END_STATE();
    case 116:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '#', 124,
        '\\', 4,
        'A', 25,
        'a', 25,
        'C', 65,
        'c', 65,
        'E', 67,
        'e', 67,
        'F', 92,
        'f', 92,
        'H', 36,
        'h', 36,
        'L', 15,
        'l', 15,
        'M', 16,
        'm', 16,
        'O', 69,
        'o', 69,
        'R', 102,
        'r', 102,
        'S', 44,
        's', 44,
        'U', 94,
        'u', 94,
        'V', 75,
        'v', 75,
        'W', 77,
        'w', 77,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(116);
      END_STATE();
    case 117:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '#', 139,
        '$', 200,
        '+', 299,
        ',', 305,
        '-', 296,
        '/', 156,
        ':', 170,
        '=', 153,
        '?', 301,
        '[', 303,
        '\\', 4,
        ']', 306,
        '}', 302,
        'A', 26,
        'a', 26,
        'C', 65,
        'c', 65,
        'E', 67,
        'e', 67,
        'F', 92,
        'f', 92,
        'H', 36,
        'h', 36,
        'L', 15,
        'l', 15,
        'M', 16,
        'm', 16,
        'O', 69,
        'o', 69,
        'R', 102,
        'r', 102,
        'S', 44,
        's', 44,
        'U', 94,
        'u', 94,
        'V', 75,
        'v', 75,
        'W', 77,
        'w', 77,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 1,
        '#', 139,
        '$', 200,
        ',', 305,
        '-', 12,
        '/', 156,
        ':', 169,
        '=', 153,
        '\\', 4,
        ']', 306,
        'C', 64,
        'c', 64,
        'N', 80,
        'n', 80,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      ADVANCE_MAP(
        '\t', 124,
        ' ', 124,
        'C', 131,
        'c', 131,
        'E', 135,
        'e', 135,
        'S', 138,
        's', 138,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_parser_directive);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_parser_directive);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '+') ADVANCE(298);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '?') ADVANCE(300);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_user_name);
      if (((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead)) ||
          lookahead == '{' ||
          lookahead == '}') &&
          lookahead != ':') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead == '&') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '&' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(199);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(294);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(122);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead)) ADVANCE(312);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(313);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unquoted_string);
      if ((!eof && set_contains(sym_unquoted_string_character_set_1, 9, lookahead))) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '&') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '&' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '&' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '1') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '2') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(323);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 116},
  [3] = {.lex_state = 116},
  [4] = {.lex_state = 116},
  [5] = {.lex_state = 116},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 116},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 7, .external_lex_state = 2},
  [12] = {.lex_state = 7, .external_lex_state = 2},
  [13] = {.lex_state = 111, .external_lex_state = 3},
  [14] = {.lex_state = 7, .external_lex_state = 2},
  [15] = {.lex_state = 7, .external_lex_state = 2},
  [16] = {.lex_state = 111, .external_lex_state = 3},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 2},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 114},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 114},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 111, .external_lex_state = 2},
  [27] = {.lex_state = 111, .external_lex_state = 2},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 114},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 113, .external_lex_state = 3},
  [32] = {.lex_state = 113},
  [33] = {.lex_state = 115},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 115},
  [36] = {.lex_state = 113},
  [37] = {.lex_state = 113, .external_lex_state = 3},
  [38] = {.lex_state = 114},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 113},
  [42] = {.lex_state = 113, .external_lex_state = 3},
  [43] = {.lex_state = 114},
  [44] = {.lex_state = 114},
  [45] = {.lex_state = 114},
  [46] = {.lex_state = 113, .external_lex_state = 3},
  [47] = {.lex_state = 113},
  [48] = {.lex_state = 113, .external_lex_state = 2},
  [49] = {.lex_state = 113, .external_lex_state = 2},
  [50] = {.lex_state = 113},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 113},
  [53] = {.lex_state = 113, .external_lex_state = 2},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 113, .external_lex_state = 2},
  [56] = {.lex_state = 113, .external_lex_state = 2},
  [57] = {.lex_state = 111, .external_lex_state = 3},
  [58] = {.lex_state = 111, .external_lex_state = 3},
  [59] = {.lex_state = 111, .external_lex_state = 3},
  [60] = {.lex_state = 114},
  [61] = {.lex_state = 111, .external_lex_state = 3},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 111, .external_lex_state = 3},
  [64] = {.lex_state = 111, .external_lex_state = 3},
  [65] = {.lex_state = 111, .external_lex_state = 3},
  [66] = {.lex_state = 111, .external_lex_state = 3},
  [67] = {.lex_state = 114},
  [68] = {.lex_state = 114},
  [69] = {.lex_state = 114},
  [70] = {.lex_state = 114},
  [71] = {.lex_state = 114},
  [72] = {.lex_state = 114},
  [73] = {.lex_state = 114},
  [74] = {.lex_state = 114},
  [75] = {.lex_state = 5, .external_lex_state = 2},
  [76] = {.lex_state = 7, .external_lex_state = 2},
  [77] = {.lex_state = 113},
  [78] = {.lex_state = 113, .external_lex_state = 3},
  [79] = {.lex_state = 113},
  [80] = {.lex_state = 113, .external_lex_state = 3},
  [81] = {.lex_state = 113, .external_lex_state = 3},
  [82] = {.lex_state = 113, .external_lex_state = 3},
  [83] = {.lex_state = 113, .external_lex_state = 3},
  [84] = {.lex_state = 113, .external_lex_state = 3},
  [85] = {.lex_state = 113, .external_lex_state = 3},
  [86] = {.lex_state = 113, .external_lex_state = 3},
  [87] = {.lex_state = 113, .external_lex_state = 3},
  [88] = {.lex_state = 117},
  [89] = {.lex_state = 117},
  [90] = {.lex_state = 113},
  [91] = {.lex_state = 5, .external_lex_state = 2},
  [92] = {.lex_state = 7, .external_lex_state = 2},
  [93] = {.lex_state = 5, .external_lex_state = 2},
  [94] = {.lex_state = 112},
  [95] = {.lex_state = 113},
  [96] = {.lex_state = 117},
  [97] = {.lex_state = 113},
  [98] = {.lex_state = 113},
  [99] = {.lex_state = 111, .external_lex_state = 2},
  [100] = {.lex_state = 111, .external_lex_state = 2},
  [101] = {.lex_state = 111, .external_lex_state = 2},
  [102] = {.lex_state = 111, .external_lex_state = 2},
  [103] = {.lex_state = 111, .external_lex_state = 2},
  [104] = {.lex_state = 111, .external_lex_state = 2},
  [105] = {.lex_state = 111, .external_lex_state = 2},
  [106] = {.lex_state = 111, .external_lex_state = 2},
  [107] = {.lex_state = 112},
  [108] = {.lex_state = 118},
  [109] = {.lex_state = 118},
  [110] = {.lex_state = 118},
  [111] = {.lex_state = 5, .external_lex_state = 2},
  [112] = {.lex_state = 5, .external_lex_state = 2},
  [113] = {.lex_state = 5, .external_lex_state = 2},
  [114] = {.lex_state = 5, .external_lex_state = 2},
  [115] = {.lex_state = 5, .external_lex_state = 2},
  [116] = {.lex_state = 5, .external_lex_state = 2},
  [117] = {.lex_state = 5, .external_lex_state = 2},
  [118] = {.lex_state = 5, .external_lex_state = 2},
  [119] = {.lex_state = 117},
  [120] = {.lex_state = 117},
  [121] = {.lex_state = 117},
  [122] = {.lex_state = 117},
  [123] = {.lex_state = 117},
  [124] = {.lex_state = 117},
  [125] = {.lex_state = 117},
  [126] = {.lex_state = 117},
  [127] = {.lex_state = 117},
  [128] = {.lex_state = 117},
  [129] = {.lex_state = 113},
  [130] = {.lex_state = 115},
  [131] = {.lex_state = 117},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7, .external_lex_state = 2},
  [134] = {.lex_state = 7, .external_lex_state = 2},
  [135] = {.lex_state = 7, .external_lex_state = 2},
  [136] = {.lex_state = 7, .external_lex_state = 2},
  [137] = {.lex_state = 7, .external_lex_state = 2},
  [138] = {.lex_state = 7, .external_lex_state = 2},
  [139] = {.lex_state = 7, .external_lex_state = 2},
  [140] = {.lex_state = 7, .external_lex_state = 2},
  [141] = {.lex_state = 7, .external_lex_state = 2},
  [142] = {.lex_state = 115},
  [143] = {.lex_state = 115},
  [144] = {.lex_state = 115},
  [145] = {.lex_state = 117},
  [146] = {.lex_state = 113},
  [147] = {.lex_state = 115},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 115},
  [150] = {.lex_state = 115},
  [151] = {.lex_state = 7, .external_lex_state = 2},
  [152] = {.lex_state = 113},
  [153] = {.lex_state = 113},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 118},
  [156] = {.lex_state = 117, .external_lex_state = 4},
  [157] = {.lex_state = 113},
  [158] = {.lex_state = 117, .external_lex_state = 4},
  [159] = {.lex_state = 117, .external_lex_state = 4},
  [160] = {.lex_state = 117, .external_lex_state = 4},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 113},
  [164] = {.lex_state = 119},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 117, .external_lex_state = 4},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 118},
  [175] = {.lex_state = 117, .external_lex_state = 4},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 113},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 119},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 117, .external_lex_state = 4},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 117, .external_lex_state = 4},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 117, .external_lex_state = 4},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 118},
  [197] = {.lex_state = 118},
  [198] = {.lex_state = 113},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 113},
  [201] = {.lex_state = 113},
  [202] = {.lex_state = 113, .external_lex_state = 2},
  [203] = {.lex_state = 113, .external_lex_state = 2},
  [204] = {.lex_state = 113, .external_lex_state = 2},
  [205] = {.lex_state = 113, .external_lex_state = 2},
  [206] = {.lex_state = 113, .external_lex_state = 2},
  [207] = {.lex_state = 117},
  [208] = {.lex_state = 119},
  [209] = {.lex_state = 113, .external_lex_state = 2},
  [210] = {.lex_state = 117},
  [211] = {.lex_state = 113, .external_lex_state = 2},
  [212] = {.lex_state = 113, .external_lex_state = 2},
  [213] = {.lex_state = 113},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 113, .external_lex_state = 2},
  [220] = {.lex_state = 113},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 113},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 113, .external_lex_state = 2},
  [226] = {.lex_state = 113},
  [227] = {.lex_state = 113},
  [228] = {.lex_state = 113},
  [229] = {.lex_state = 113},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 113},
  [233] = {.lex_state = 113},
  [234] = {.lex_state = 113},
  [235] = {.lex_state = 113},
  [236] = {.lex_state = 113},
  [237] = {.lex_state = 113},
  [238] = {.lex_state = 113},
  [239] = {.lex_state = 113},
  [240] = {.lex_state = 113},
  [241] = {.lex_state = 113},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 113},
  [246] = {.lex_state = 117},
  [247] = {.lex_state = 118},
  [248] = {.lex_state = 117},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 118},
  [251] = {.lex_state = 119},
  [252] = {.lex_state = 119},
  [253] = {.lex_state = 119},
  [254] = {.lex_state = 117, .external_lex_state = 4},
  [255] = {.lex_state = 119},
  [256] = {.lex_state = 117},
  [257] = {.lex_state = 119},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 119},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 117},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 117, .external_lex_state = 4},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 117, .external_lex_state = 4},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 117, .external_lex_state = 4},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 117},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 117, .external_lex_state = 4},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 118},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 117},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 118},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 113},
  [291] = {.lex_state = 117, .external_lex_state = 4},
  [292] = {.lex_state = 117},
  [293] = {.lex_state = 119},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 119},
  [296] = {.lex_state = 119},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 119},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 117},
  [301] = {.lex_state = 117},
  [302] = {.lex_state = 117},
  [303] = {.lex_state = 119},
  [304] = {.lex_state = 118},
  [305] = {.lex_state = 117},
  [306] = {.lex_state = 119},
  [307] = {.lex_state = 117},
  [308] = {.lex_state = 112},
  [309] = {.lex_state = 119},
  [310] = {.lex_state = 117},
  [311] = {.lex_state = 117, .external_lex_state = 4},
  [312] = {.lex_state = 117},
  [313] = {.lex_state = 117, .external_lex_state = 4},
  [314] = {.lex_state = 117},
  [315] = {.lex_state = 117},
  [316] = {.lex_state = 118},
  [317] = {.lex_state = 118},
  [318] = {.lex_state = 117},
  [319] = {.lex_state = 117},
  [320] = {.lex_state = 117},
  [321] = {.lex_state = 117},
  [322] = {.lex_state = 117},
  [323] = {.lex_state = 117},
  [324] = {.lex_state = 117},
  [325] = {.lex_state = 117},
  [326] = {.lex_state = 117},
  [327] = {.lex_state = 117},
  [328] = {.lex_state = 117},
  [329] = {.lex_state = 117},
  [330] = {.lex_state = 117},
  [331] = {.lex_state = 117},
  [332] = {.lex_state = 117},
  [333] = {.lex_state = 117},
  [334] = {.lex_state = 117},
  [335] = {.lex_state = 117},
  [336] = {.lex_state = 117},
  [337] = {.lex_state = 117},
  [338] = {.lex_state = 117},
  [339] = {.lex_state = 117},
  [340] = {.lex_state = 117},
  [341] = {.lex_state = 117},
  [342] = {.lex_state = 117},
  [343] = {.lex_state = 117},
  [344] = {.lex_state = 117},
  [345] = {.lex_state = 10},
  [346] = {.lex_state = 10},
  [347] = {.lex_state = 10},
  [348] = {.lex_state = 117, .external_lex_state = 5},
  [349] = {.lex_state = 117, .external_lex_state = 5},
  [350] = {.lex_state = 117, .external_lex_state = 5},
  [351] = {.lex_state = 10},
  [352] = {.lex_state = 117},
  [353] = {.lex_state = 117, .external_lex_state = 5},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 117, .external_lex_state = 5},
  [356] = {.lex_state = 117},
  [357] = {.lex_state = 117, .external_lex_state = 5},
  [358] = {.lex_state = 117, .external_lex_state = 5},
  [359] = {.lex_state = 117},
  [360] = {.lex_state = 117},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 117, .external_lex_state = 5},
  [363] = {.lex_state = 117, .external_lex_state = 5},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 117, .external_lex_state = 5},
  [366] = {.lex_state = 117},
  [367] = {.lex_state = 10},
  [368] = {.lex_state = 10},
  [369] = {.lex_state = 117, .external_lex_state = 5},
  [370] = {.lex_state = 10},
  [371] = {.lex_state = 117, .external_lex_state = 5},
  [372] = {.lex_state = 117, .external_lex_state = 5},
  [373] = {.lex_state = 117},
  [374] = {.lex_state = 117, .external_lex_state = 5},
  [375] = {.lex_state = 10},
  [376] = {.lex_state = 117, .external_lex_state = 5},
  [377] = {.lex_state = 10},
  [378] = {.lex_state = 117, .external_lex_state = 5},
  [379] = {.lex_state = 117},
  [380] = {.lex_state = 117},
  [381] = {.lex_state = 117, .external_lex_state = 5},
  [382] = {.lex_state = 117},
  [383] = {.lex_state = 10},
  [384] = {.lex_state = 10},
  [385] = {.lex_state = 10},
  [386] = {.lex_state = 117},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 117, .external_lex_state = 5},
  [389] = {.lex_state = 10},
  [390] = {.lex_state = 117},
  [391] = {.lex_state = 10},
  [392] = {.lex_state = 117},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 117, .external_lex_state = 5},
  [395] = {.lex_state = 10},
  [396] = {.lex_state = 117},
  [397] = {.lex_state = 10},
  [398] = {.lex_state = 10},
  [399] = {.lex_state = 117, .external_lex_state = 5},
  [400] = {.lex_state = 117, .external_lex_state = 5},
  [401] = {.lex_state = 10},
  [402] = {.lex_state = 117, .external_lex_state = 5},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 117},
  [405] = {.lex_state = 10},
  [406] = {.lex_state = 117},
  [407] = {.lex_state = 117},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_parser_directive] = ACTIONS(1),
    [aux_sym_from_instruction_token1] = ACTIONS(1),
    [aux_sym_from_instruction_token2] = ACTIONS(1),
    [aux_sym_run_instruction_token1] = ACTIONS(1),
    [aux_sym_cmd_instruction_token1] = ACTIONS(1),
    [aux_sym_label_instruction_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_expose_instruction_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_env_instruction_token1] = ACTIONS(1),
    [aux_sym_add_instruction_token1] = ACTIONS(1),
    [aux_sym_copy_instruction_token1] = ACTIONS(1),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(1),
    [aux_sym_volume_instruction_token1] = ACTIONS(1),
    [aux_sym_user_instruction_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_workdir_instruction_token1] = ACTIONS(1),
    [aux_sym_arg_instruction_token1] = ACTIONS(1),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(1),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(1),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(1),
    [aux_sym_healthcheck_instruction_token2] = ACTIONS(1),
    [aux_sym_shell_instruction_token1] = ACTIONS(1),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_expansion_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_PLUS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON_QMARK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym__keyword_terminator] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(390),
    [sym__instruction] = STATE(256),
    [sym_from_instruction] = STATE(256),
    [sym_run_instruction] = STATE(256),
    [sym_cmd_instruction] = STATE(256),
    [sym_label_instruction] = STATE(256),
    [sym_expose_instruction] = STATE(256),
    [sym_env_instruction] = STATE(256),
    [sym_add_instruction] = STATE(256),
    [sym_copy_instruction] = STATE(256),
    [sym_entrypoint_instruction] = STATE(256),
    [sym_volume_instruction] = STATE(256),
    [sym_user_instruction] = STATE(256),
    [sym_workdir_instruction] = STATE(256),
    [sym_arg_instruction] = STATE(256),
    [sym_onbuild_instruction] = STATE(256),
    [sym_stopsignal_instruction] = STATE(256),
    [sym_healthcheck_instruction] = STATE(256),
    [sym_shell_instruction] = STATE(256),
    [sym_maintainer_instruction] = STATE(256),
    [sym_cross_build_instruction] = STATE(256),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_parser_directive] = ACTIONS(11),
    [aux_sym_from_instruction_token1] = ACTIONS(13),
    [aux_sym_run_instruction_token1] = ACTIONS(15),
    [aux_sym_cmd_instruction_token1] = ACTIONS(17),
    [aux_sym_label_instruction_token1] = ACTIONS(19),
    [aux_sym_expose_instruction_token1] = ACTIONS(21),
    [aux_sym_env_instruction_token1] = ACTIONS(23),
    [aux_sym_add_instruction_token1] = ACTIONS(25),
    [aux_sym_copy_instruction_token1] = ACTIONS(27),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(29),
    [aux_sym_volume_instruction_token1] = ACTIONS(31),
    [aux_sym_user_instruction_token1] = ACTIONS(33),
    [aux_sym_workdir_instruction_token1] = ACTIONS(35),
    [aux_sym_arg_instruction_token1] = ACTIONS(37),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(39),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(41),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(43),
    [aux_sym_shell_instruction_token1] = ACTIONS(45),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(47),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(55), 1,
      sym_parser_directive,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(261), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [98] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_parser_directive,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(318), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [196] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym_parser_directive,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(318), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [294] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym_parser_directive,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(318), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [392] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym_parser_directive,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(318), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [487] = 21,
    ACTIONS(13), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(49), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(326), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [571] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(65), 21,
      ts_builtin_sym_end,
      sym_parser_directive,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
  [607] = 13,
    ACTIONS(70), 1,
      aux_sym_param_token1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(72), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(57), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(62), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(187), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(13), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [655] = 13,
    ACTIONS(70), 1,
      aux_sym_param_token1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(72), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(9), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(57), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(190), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(13), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [703] = 15,
    ACTIONS(86), 1,
      aux_sym_param_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym_unquoted_string,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    STATE(53), 1,
      aux_sym_add_instruction_repeat1,
    STATE(219), 1,
      sym_path,
    STATE(324), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(14), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(225), 2,
      sym_string,
      sym_expansion,
  [753] = 15,
    ACTIONS(86), 1,
      aux_sym_param_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym_unquoted_string,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      aux_sym_add_instruction_repeat1,
    STATE(219), 1,
      sym_path,
    STATE(330), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(15), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(225), 2,
      sym_string,
      sym_expansion,
  [803] = 10,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(104), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(57), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(102), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
    STATE(16), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [843] = 15,
    ACTIONS(86), 1,
      aux_sym_param_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym_unquoted_string,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    STATE(55), 1,
      aux_sym_add_instruction_repeat1,
    STATE(219), 1,
      sym_path,
    STATE(325), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(225), 2,
      sym_string,
      sym_expansion,
  [893] = 15,
    ACTIONS(86), 1,
      aux_sym_param_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym_unquoted_string,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    STATE(49), 1,
      aux_sym_add_instruction_repeat1,
    STATE(219), 1,
      sym_path,
    STATE(328), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(225), 2,
      sym_string,
      sym_expansion,
  [943] = 10,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(125), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(110), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(57), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(108), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
    STATE(16), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [983] = 11,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(336), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(26), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1024] = 11,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(335), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(26), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1065] = 11,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(320), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(26), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1106] = 11,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(341), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(26), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1147] = 10,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      aux_sym_expansion_token1,
    ACTIONS(156), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(67), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(159), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(21), 4,
      sym_string,
      sym_expansion,
      sym_identifier,
      aux_sym__spaced_env_pair_repeat1,
  [1186] = 10,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(172), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(67), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(174), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(21), 4,
      sym_string,
      sym_expansion,
      sym_identifier,
      aux_sym__spaced_env_pair_repeat1,
  [1225] = 10,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(172), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(67), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(178), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(22), 4,
      sym_string,
      sym_expansion,
      sym_identifier,
      aux_sym__spaced_env_pair_repeat1,
  [1263] = 10,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(190), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(340), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1301] = 11,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      aux_sym_expansion_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(205), 2,
      sym_number,
      sym_unquoted_value,
    STATE(295), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(257), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1341] = 10,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(212), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(210), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(27), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1379] = 10,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      sym_heredoc_marker,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(214), 2,
      aux_sym__shell_fragment_token1,
      sym_unquoted_value,
    STATE(99), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(27), 4,
      sym__shell_fragment,
      sym_string,
      sym_expansion,
      aux_sym_shell_command_repeat1,
  [1417] = 11,
    ACTIONS(232), 1,
      aux_sym_param_token1,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(242), 1,
      sym_unquoted_string,
    STATE(302), 1,
      sym_image_spec,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(132), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(33), 3,
      sym_string,
      sym_expansion,
      aux_sym_image_spec_repeat1,
  [1456] = 10,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(246), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(334), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1493] = 11,
    ACTIONS(232), 1,
      aux_sym_param_token1,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(242), 1,
      sym_unquoted_string,
    STATE(305), 1,
      sym_image_spec,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(28), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(33), 3,
      sym_string,
      sym_expansion,
      aux_sym_image_spec_repeat1,
  [1532] = 8,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(159), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
    ACTIONS(250), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [1564] = 10,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(32), 2,
      sym_path,
      aux_sym_volume_instruction_repeat1,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(198), 2,
      sym_string,
      sym_expansion,
  [1600] = 10,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(279), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(35), 3,
      sym_string,
      sym_expansion,
      aux_sym_image_spec_repeat1,
  [1636] = 9,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_expansion_token1,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(214), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(291), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(242), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1670] = 10,
    ACTIONS(295), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(309), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(35), 3,
      sym_string,
      sym_expansion,
      aux_sym_image_spec_repeat1,
  [1706] = 11,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      sym_unquoted_string,
    STATE(344), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(41), 2,
      sym_path,
      aux_sym_volume_instruction_repeat1,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(198), 2,
      sym_string,
      sym_expansion,
  [1744] = 8,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(158), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
    ACTIONS(250), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [1776] = 9,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(318), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(163), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1810] = 10,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(331), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(334), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(39), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(386), 2,
      sym_string,
      sym_expansion,
  [1846] = 10,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(339), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(39), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(386), 2,
      sym_string,
      sym_expansion,
  [1882] = 10,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(32), 2,
      sym_path,
      aux_sym_volume_instruction_repeat1,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(198), 2,
      sym_string,
      sym_expansion,
  [1918] = 8,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(175), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
    ACTIONS(250), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [1950] = 9,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_expansion_token1,
    ACTIONS(353), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(355), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(91), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [1984] = 9,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      anon_sym_DOLLAR,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      aux_sym_expansion_token1,
    ACTIONS(365), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(367), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(151), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [2018] = 9,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_expansion_token1,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(250), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(379), 3,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    STATE(316), 3,
      sym_string,
      sym_expansion,
      sym_identifier,
  [2052] = 8,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(156), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
    ACTIONS(250), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [2084] = 10,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(397), 1,
      sym_unquoted_string,
    STATE(47), 1,
      aux_sym_maintainer_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(157), 2,
      sym_string,
      sym_expansion,
  [2119] = 11,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(412), 1,
      sym_unquoted_string,
    ACTIONS(415), 1,
      sym_heredoc_marker,
    STATE(48), 1,
      aux_sym_add_instruction_repeat1,
    STATE(219), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(225), 2,
      sym_string,
      sym_expansion,
  [2156] = 11,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      sym_unquoted_string,
    STATE(31), 1,
      sym_path,
    STATE(48), 1,
      aux_sym_add_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(78), 2,
      sym_string,
      sym_expansion,
    STATE(80), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2193] = 10,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      sym_unquoted_string,
    STATE(47), 1,
      aux_sym_maintainer_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(157), 2,
      sym_string,
      sym_expansion,
  [2228] = 10,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      sym_unquoted_string,
    STATE(47), 1,
      aux_sym_maintainer_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(157), 2,
      sym_string,
      sym_expansion,
  [2263] = 10,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      sym_unquoted_string,
    STATE(50), 1,
      aux_sym_maintainer_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(157), 2,
      sym_string,
      sym_expansion,
  [2298] = 11,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      sym_unquoted_string,
    STATE(42), 1,
      sym_path,
    STATE(48), 1,
      aux_sym_add_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(78), 2,
      sym_string,
      sym_expansion,
    STATE(80), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2335] = 10,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(436), 1,
      sym_unquoted_string,
    STATE(343), 1,
      sym__spaced_label_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(29), 2,
      sym_string,
      sym_expansion,
    STATE(40), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(67), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2370] = 11,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      sym_unquoted_string,
    STATE(37), 1,
      sym_path,
    STATE(48), 1,
      aux_sym_add_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(78), 2,
      sym_string,
      sym_expansion,
    STATE(80), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2407] = 11,
    ACTIONS(100), 1,
      sym_heredoc_marker,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      sym_unquoted_string,
    STATE(46), 1,
      sym_path,
    STATE(48), 1,
      aux_sym_add_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(78), 2,
      sym_string,
      sym_expansion,
    STATE(80), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2444] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(438), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2464] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(442), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2484] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(446), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2504] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(450), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2524] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(454), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2544] = 5,
    ACTIONS(458), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(62), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    ACTIONS(461), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(463), 4,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2568] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(465), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2588] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(469), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2608] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(473), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2628] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(477), 8,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2648] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(438), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2668] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2688] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(454), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2708] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(473), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2728] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(446), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2748] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(465), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2768] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(442), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2788] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      sym_number,
      sym_unquoted_string,
      sym_unquoted_value,
    ACTIONS(477), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2808] = 4,
    ACTIONS(481), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(483), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2829] = 5,
    ACTIONS(487), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    STATE(76), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    ACTIONS(463), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [2852] = 9,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      sym_unquoted_string,
    STATE(321), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(198), 2,
      sym_string,
      sym_expansion,
  [2883] = 3,
    ACTIONS(492), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(490), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [2902] = 9,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      sym_unquoted_string,
    STATE(51), 1,
      aux_sym_maintainer_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(157), 2,
      sym_string,
      sym_expansion,
  [2933] = 3,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [2952] = 3,
    ACTIONS(471), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [2971] = 3,
    ACTIONS(475), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(473), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [2990] = 3,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [3009] = 3,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [3028] = 3,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [3047] = 3,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [3066] = 3,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 9,
      sym_heredoc_marker,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [3085] = 4,
    ACTIONS(494), 1,
      anon_sym_COLON,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(496), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3105] = 4,
    ACTIONS(500), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(502), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3125] = 3,
    ACTIONS(471), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      sym_unquoted_string,
  [3143] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(506), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3161] = 4,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(483), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [3181] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(450), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3199] = 8,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(512), 1,
      sym_user_name,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(337), 2,
      sym_string,
      sym_expansion,
  [3227] = 3,
    ACTIONS(475), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(473), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      sym_unquoted_string,
  [3245] = 4,
    ACTIONS(514), 1,
      anon_sym_COLON,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3265] = 3,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      sym_unquoted_string,
  [3283] = 3,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      sym_unquoted_string,
  [3301] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(438), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3319] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(469), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3337] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(454), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3355] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(473), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3373] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(446), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3391] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(465), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3409] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(442), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3427] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 3,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      sym_unquoted_value,
    ACTIONS(477), 6,
      sym_heredoc_marker,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3445] = 8,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(520), 1,
      sym_user_name,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(250), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(308), 2,
      sym_string,
      sym_expansion,
  [3473] = 3,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_SLASH,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [3491] = 3,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_SLASH,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [3509] = 3,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_SLASH,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [3527] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(438), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3545] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(469), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3563] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(473), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3581] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(446), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3599] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(465), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3617] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(454), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3635] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(442), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3653] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 4,
      aux_sym__shell_fragment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_unquoted_value,
    ACTIONS(477), 5,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3671] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(524), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3691] = 4,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(530), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3711] = 4,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(536), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3731] = 4,
    ACTIONS(540), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(542), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3751] = 4,
    ACTIONS(546), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(548), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3771] = 4,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(554), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3791] = 4,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(560), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3811] = 4,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(566), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3831] = 4,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(572), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3851] = 4,
    ACTIONS(576), 1,
      anon_sym_COLON,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(578), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH,
      anon_sym_COLON_EQ,
      anon_sym_COLON_PLUS,
      anon_sym_PLUS,
      anon_sym_COLON_QMARK,
      anon_sym_QMARK,
  [3871] = 3,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      sym_unquoted_string,
  [3889] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3906] = 7,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(584), 1,
      sym_number,
    STATE(210), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(582), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(145), 2,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3931] = 5,
    ACTIONS(586), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    STATE(132), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
    ACTIONS(463), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3952] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(450), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [3969] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(438), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [3986] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(469), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4003] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(473), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4020] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(446), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4037] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(465), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4054] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(454), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4071] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(442), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4088] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(477), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4105] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4122] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4139] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(477), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4156] = 7,
    ACTIONS(591), 1,
      anon_sym_DOLLAR,
    ACTIONS(594), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(597), 1,
      sym_number,
    STATE(210), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(145), 2,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [4181] = 3,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4198] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4215] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(469), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4232] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4249] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(465), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4266] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(506), 6,
      sym_heredoc_marker,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACK,
  [4283] = 3,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4300] = 3,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4317] = 6,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4339] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4353] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4375] = 3,
    ACTIONS(612), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(610), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4391] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(614), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4413] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4435] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4457] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(622), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4479] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4501] = 3,
    ACTIONS(628), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(626), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4517] = 6,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(632), 1,
      sym_unquoted_string,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(630), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(183), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [4539] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(636), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(166), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4561] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4583] = 6,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(188), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(640), 2,
      sym_number,
      sym_unquoted_string,
    STATE(327), 2,
      sym_expansion,
      sym_identifier,
  [4605] = 4,
    ACTIONS(642), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(483), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4623] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(646), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(170), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4645] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4667] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4689] = 6,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(657), 1,
      anon_sym_DOLLAR,
    ACTIONS(660), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(654), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4711] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(665), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(199), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4733] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4747] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [4769] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(671), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(177), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4791] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4813] = 3,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(450), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [4829] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(677), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(180), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4851] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4873] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4895] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(685), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(154), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4917] = 6,
    ACTIONS(689), 1,
      aux_sym_expansion_token1,
    ACTIONS(692), 1,
      sym_unquoted_string,
    STATE(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(183), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [4939] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(697), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(181), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4961] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(701), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(186), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [4983] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5005] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(160), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [5027] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(707), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(189), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5049] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5071] = 6,
    ACTIONS(254), 1,
      sym_heredoc_line,
    ACTIONS(256), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(171), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [5093] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(715), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(192), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5115] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5137] = 6,
    ACTIONS(721), 1,
      sym_heredoc_line,
    ACTIONS(724), 1,
      sym_heredoc_end,
    STATE(313), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(193), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat1,
  [5159] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(729), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(195), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5181] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5203] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5217] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(473), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_COLON,
      aux_sym_param_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5231] = 3,
    ACTIONS(492), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(490), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5247] = 6,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(602), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
    STATE(172), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [5269] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      sym_unquoted_string,
    STATE(359), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5290] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
    ACTIONS(739), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(314), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5311] = 3,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5326] = 3,
    ACTIONS(471), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5341] = 3,
    ACTIONS(475), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(473), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5356] = 3,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5371] = 3,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5386] = 6,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(584), 1,
      sym_number,
    STATE(210), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(131), 2,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [5407] = 6,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(741), 1,
      sym_unquoted_string,
    STATE(23), 1,
      sym_identifier,
    STATE(323), 1,
      sym__spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [5428] = 3,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5443] = 4,
    ACTIONS(745), 1,
      anon_sym_SLASH,
    ACTIONS(747), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(743), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [5460] = 3,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5475] = 3,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5490] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(749), 1,
      sym_unquoted_string,
    STATE(406), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5511] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(438), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5526] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(469), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5541] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(473), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5556] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(446), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5571] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(465), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5586] = 3,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(250), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5601] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(751), 1,
      sym_unquoted_string,
    STATE(382), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5622] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(454), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5637] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    ACTIONS(755), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(319), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5658] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(442), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5673] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(477), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5688] = 3,
    ACTIONS(492), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(490), 5,
      sym_heredoc_marker,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      sym_unquoted_string,
  [5703] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    ACTIONS(759), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(310), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5724] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      sym_unquoted_string,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(319), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5745] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      sym_unquoted_string,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(319), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5766] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      sym_unquoted_string,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(319), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5787] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(450), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5802] = 3,
    ACTIONS(769), 1,
      aux_sym_expansion_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(767), 5,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
      sym_escape_sequence,
      anon_sym_DOLLAR_LBRACE,
  [5817] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(771), 1,
      sym_unquoted_string,
    STATE(392), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5838] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(773), 1,
      sym_unquoted_string,
    STATE(373), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5859] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(775), 1,
      sym_unquoted_string,
    STATE(396), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5880] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      sym_unquoted_string,
    STATE(360), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5901] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(779), 1,
      sym_unquoted_string,
    STATE(379), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5922] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(781), 1,
      sym_unquoted_string,
    STATE(404), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5943] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(783), 1,
      sym_unquoted_string,
    STATE(352), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5964] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(785), 1,
      sym_unquoted_string,
    STATE(366), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [5985] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      sym_unquoted_string,
    STATE(407), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [6006] = 6,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(789), 1,
      sym_unquoted_string,
    STATE(380), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [6027] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_DOLLAR,
      sym_unquoted_string,
    ACTIONS(506), 4,
      aux_sym_param_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [6042] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 5,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
      sym_escape_sequence,
      anon_sym_DOLLAR_LBRACE,
  [6054] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 5,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
      sym_escape_sequence,
      anon_sym_DOLLAR_LBRACE,
  [6066] = 5,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      sym_unquoted_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(319), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [6084] = 3,
    ACTIONS(793), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(791), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [6098] = 5,
    ACTIONS(795), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(797), 1,
      aux_sym_healthcheck_instruction_token2,
    ACTIONS(799), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(281), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
  [6116] = 3,
    ACTIONS(803), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(801), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DOLLAR_LBRACE,
      sym_number,
  [6130] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(456), 5,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
      sym_escape_sequence,
      anon_sym_DOLLAR_LBRACE,
  [6142] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_cmd_instruction_token1,
      anon_sym_COLON,
      aux_sym_param_token1,
  [6154] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(444), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6167] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(448), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6180] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(467), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6193] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(805), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6204] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(456), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6217] = 5,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(292), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6234] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(809), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(811), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6247] = 4,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    STATE(294), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(815), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6262] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(479), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6275] = 4,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(819), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6290] = 5,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(821), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(271), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6307] = 4,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6322] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(827), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6333] = 4,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(831), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6348] = 4,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6363] = 4,
    ACTIONS(835), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(837), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6378] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(839), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6389] = 4,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6404] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(843), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6415] = 4,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(847), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6430] = 5,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(849), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(283), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6447] = 4,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(853), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6462] = 4,
    ACTIONS(855), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6477] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(857), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6488] = 4,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(861), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6503] = 4,
    ACTIONS(863), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6518] = 4,
    ACTIONS(865), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(867), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6533] = 4,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6548] = 4,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(873), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6563] = 4,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6578] = 4,
    ACTIONS(799), 1,
      aux_sym_param_token1,
    ACTIONS(877), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(286), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
  [6593] = 4,
    ACTIONS(879), 1,
      anon_sym_SQUOTE,
    STATE(284), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(881), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6608] = 5,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
    ACTIONS(885), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(283), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6625] = 4,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6640] = 4,
    ACTIONS(890), 1,
      anon_sym_SQUOTE,
    STATE(287), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(892), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6655] = 4,
    ACTIONS(463), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(894), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(286), 2,
      sym_param,
      aux_sym_from_instruction_repeat1,
  [6670] = 4,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6685] = 4,
    ACTIONS(899), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(901), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6700] = 4,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6715] = 5,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(905), 1,
      sym_unquoted_string,
    STATE(248), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6732] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(907), 4,
      sym_heredoc_line,
      sym_heredoc_end,
      ts_builtin_sym_end,
      sym__newline,
  [6743] = 5,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(821), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(283), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6760] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(452), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6773] = 4,
    ACTIONS(909), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6788] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(440), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6801] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(471), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6814] = 4,
    ACTIONS(911), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(913), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6829] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(475), 2,
      aux_sym_expansion_token1,
      sym_unquoted_string,
  [6842] = 4,
    ACTIONS(916), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [6857] = 3,
    ACTIONS(920), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6869] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6883] = 3,
    ACTIONS(929), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(927), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6895] = 4,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(931), 1,
      sym_unquoted_string,
    STATE(342), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6909] = 3,
    ACTIONS(933), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(483), 2,
      aux_sym_cmd_instruction_token1,
      aux_sym_param_token1,
  [6921] = 3,
    ACTIONS(937), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(935), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6933] = 4,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(939), 1,
      sym_unquoted_string,
    STATE(300), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6947] = 4,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6961] = 3,
    ACTIONS(945), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(943), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6973] = 4,
    ACTIONS(170), 1,
      aux_sym_expansion_token1,
    ACTIONS(947), 1,
      sym_unquoted_string,
    STATE(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6987] = 4,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7001] = 4,
    ACTIONS(953), 1,
      sym_heredoc_line,
    ACTIONS(956), 1,
      sym_heredoc_end,
    STATE(311), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7015] = 4,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7029] = 4,
    ACTIONS(960), 1,
      sym_heredoc_line,
    ACTIONS(962), 1,
      sym_heredoc_end,
    STATE(311), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7043] = 4,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7057] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(857), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7066] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(506), 2,
      aux_sym_cmd_instruction_token1,
      aux_sym_param_token1,
  [7075] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_cmd_instruction_token1,
      aux_sym_param_token1,
  [7084] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7093] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7102] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7111] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(970), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7120] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7129] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(974), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7138] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(976), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7147] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(978), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7156] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(980), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7165] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7174] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(984), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7183] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7192] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7201] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(990), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7210] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7219] = 3,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(331), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7230] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7239] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(994), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7248] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(996), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7257] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(998), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7266] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(907), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7275] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7284] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1000), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7293] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7302] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1004), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7311] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1006), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7320] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7329] = 2,
    ACTIONS(1008), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7337] = 2,
    ACTIONS(1010), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7345] = 2,
    ACTIONS(1012), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7353] = 2,
    ACTIONS(1014), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7361] = 2,
    ACTIONS(1016), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7369] = 2,
    ACTIONS(1018), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7377] = 2,
    ACTIONS(1020), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7385] = 2,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7393] = 2,
    ACTIONS(1024), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7401] = 2,
    ACTIONS(1026), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7409] = 2,
    ACTIONS(1028), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7417] = 2,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7425] = 2,
    ACTIONS(1030), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7433] = 2,
    ACTIONS(1032), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7441] = 2,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7449] = 2,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7457] = 2,
    ACTIONS(1038), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7465] = 2,
    ACTIONS(1040), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7473] = 2,
    ACTIONS(1042), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7481] = 2,
    ACTIONS(1044), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7489] = 2,
    ACTIONS(1046), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7497] = 2,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7505] = 2,
    ACTIONS(1050), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7513] = 2,
    ACTIONS(1052), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7521] = 2,
    ACTIONS(1054), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7529] = 2,
    ACTIONS(1056), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7537] = 2,
    ACTIONS(1058), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7545] = 2,
    ACTIONS(1060), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7553] = 2,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7561] = 2,
    ACTIONS(1064), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7569] = 2,
    ACTIONS(1066), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7577] = 2,
    ACTIONS(1068), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7585] = 2,
    ACTIONS(1070), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7593] = 2,
    ACTIONS(1072), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7601] = 2,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7609] = 2,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7617] = 2,
    ACTIONS(1078), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7625] = 2,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7633] = 2,
    ACTIONS(1082), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7641] = 2,
    ACTIONS(1084), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7649] = 2,
    ACTIONS(1086), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7657] = 2,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7665] = 2,
    ACTIONS(1088), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7673] = 2,
    ACTIONS(1090), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7681] = 2,
    ACTIONS(1092), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7689] = 2,
    ACTIONS(1094), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7697] = 2,
    ACTIONS(1096), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7705] = 2,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7713] = 2,
    ACTIONS(1100), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7721] = 2,
    ACTIONS(1102), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7729] = 2,
    ACTIONS(1104), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7737] = 2,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7745] = 2,
    ACTIONS(1108), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7753] = 2,
    ACTIONS(1110), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7761] = 2,
    ACTIONS(1112), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7769] = 2,
    ACTIONS(1114), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7777] = 2,
    ACTIONS(1116), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7785] = 2,
    ACTIONS(1118), 1,
      sym__keyword_terminator,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7793] = 2,
    ACTIONS(1120), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7801] = 2,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7809] = 2,
    ACTIONS(1124), 1,
      aux_sym_expansion_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7817] = 2,
    ACTIONS(1126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7825] = 2,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 487,
  [SMALL_STATE(8)] = 571,
  [SMALL_STATE(9)] = 607,
  [SMALL_STATE(10)] = 655,
  [SMALL_STATE(11)] = 703,
  [SMALL_STATE(12)] = 753,
  [SMALL_STATE(13)] = 803,
  [SMALL_STATE(14)] = 843,
  [SMALL_STATE(15)] = 893,
  [SMALL_STATE(16)] = 943,
  [SMALL_STATE(17)] = 983,
  [SMALL_STATE(18)] = 1024,
  [SMALL_STATE(19)] = 1065,
  [SMALL_STATE(20)] = 1106,
  [SMALL_STATE(21)] = 1147,
  [SMALL_STATE(22)] = 1186,
  [SMALL_STATE(23)] = 1225,
  [SMALL_STATE(24)] = 1263,
  [SMALL_STATE(25)] = 1301,
  [SMALL_STATE(26)] = 1341,
  [SMALL_STATE(27)] = 1379,
  [SMALL_STATE(28)] = 1417,
  [SMALL_STATE(29)] = 1456,
  [SMALL_STATE(30)] = 1493,
  [SMALL_STATE(31)] = 1532,
  [SMALL_STATE(32)] = 1564,
  [SMALL_STATE(33)] = 1600,
  [SMALL_STATE(34)] = 1636,
  [SMALL_STATE(35)] = 1670,
  [SMALL_STATE(36)] = 1706,
  [SMALL_STATE(37)] = 1744,
  [SMALL_STATE(38)] = 1776,
  [SMALL_STATE(39)] = 1810,
  [SMALL_STATE(40)] = 1846,
  [SMALL_STATE(41)] = 1882,
  [SMALL_STATE(42)] = 1918,
  [SMALL_STATE(43)] = 1950,
  [SMALL_STATE(44)] = 1984,
  [SMALL_STATE(45)] = 2018,
  [SMALL_STATE(46)] = 2052,
  [SMALL_STATE(47)] = 2084,
  [SMALL_STATE(48)] = 2119,
  [SMALL_STATE(49)] = 2156,
  [SMALL_STATE(50)] = 2193,
  [SMALL_STATE(51)] = 2228,
  [SMALL_STATE(52)] = 2263,
  [SMALL_STATE(53)] = 2298,
  [SMALL_STATE(54)] = 2335,
  [SMALL_STATE(55)] = 2370,
  [SMALL_STATE(56)] = 2407,
  [SMALL_STATE(57)] = 2444,
  [SMALL_STATE(58)] = 2464,
  [SMALL_STATE(59)] = 2484,
  [SMALL_STATE(60)] = 2504,
  [SMALL_STATE(61)] = 2524,
  [SMALL_STATE(62)] = 2544,
  [SMALL_STATE(63)] = 2568,
  [SMALL_STATE(64)] = 2588,
  [SMALL_STATE(65)] = 2608,
  [SMALL_STATE(66)] = 2628,
  [SMALL_STATE(67)] = 2648,
  [SMALL_STATE(68)] = 2668,
  [SMALL_STATE(69)] = 2688,
  [SMALL_STATE(70)] = 2708,
  [SMALL_STATE(71)] = 2728,
  [SMALL_STATE(72)] = 2748,
  [SMALL_STATE(73)] = 2768,
  [SMALL_STATE(74)] = 2788,
  [SMALL_STATE(75)] = 2808,
  [SMALL_STATE(76)] = 2829,
  [SMALL_STATE(77)] = 2852,
  [SMALL_STATE(78)] = 2883,
  [SMALL_STATE(79)] = 2902,
  [SMALL_STATE(80)] = 2933,
  [SMALL_STATE(81)] = 2952,
  [SMALL_STATE(82)] = 2971,
  [SMALL_STATE(83)] = 2990,
  [SMALL_STATE(84)] = 3009,
  [SMALL_STATE(85)] = 3028,
  [SMALL_STATE(86)] = 3047,
  [SMALL_STATE(87)] = 3066,
  [SMALL_STATE(88)] = 3085,
  [SMALL_STATE(89)] = 3105,
  [SMALL_STATE(90)] = 3125,
  [SMALL_STATE(91)] = 3143,
  [SMALL_STATE(92)] = 3161,
  [SMALL_STATE(93)] = 3181,
  [SMALL_STATE(94)] = 3199,
  [SMALL_STATE(95)] = 3227,
  [SMALL_STATE(96)] = 3245,
  [SMALL_STATE(97)] = 3265,
  [SMALL_STATE(98)] = 3283,
  [SMALL_STATE(99)] = 3301,
  [SMALL_STATE(100)] = 3319,
  [SMALL_STATE(101)] = 3337,
  [SMALL_STATE(102)] = 3355,
  [SMALL_STATE(103)] = 3373,
  [SMALL_STATE(104)] = 3391,
  [SMALL_STATE(105)] = 3409,
  [SMALL_STATE(106)] = 3427,
  [SMALL_STATE(107)] = 3445,
  [SMALL_STATE(108)] = 3473,
  [SMALL_STATE(109)] = 3491,
  [SMALL_STATE(110)] = 3509,
  [SMALL_STATE(111)] = 3527,
  [SMALL_STATE(112)] = 3545,
  [SMALL_STATE(113)] = 3563,
  [SMALL_STATE(114)] = 3581,
  [SMALL_STATE(115)] = 3599,
  [SMALL_STATE(116)] = 3617,
  [SMALL_STATE(117)] = 3635,
  [SMALL_STATE(118)] = 3653,
  [SMALL_STATE(119)] = 3671,
  [SMALL_STATE(120)] = 3691,
  [SMALL_STATE(121)] = 3711,
  [SMALL_STATE(122)] = 3731,
  [SMALL_STATE(123)] = 3751,
  [SMALL_STATE(124)] = 3771,
  [SMALL_STATE(125)] = 3791,
  [SMALL_STATE(126)] = 3811,
  [SMALL_STATE(127)] = 3831,
  [SMALL_STATE(128)] = 3851,
  [SMALL_STATE(129)] = 3871,
  [SMALL_STATE(130)] = 3889,
  [SMALL_STATE(131)] = 3906,
  [SMALL_STATE(132)] = 3931,
  [SMALL_STATE(133)] = 3952,
  [SMALL_STATE(134)] = 3969,
  [SMALL_STATE(135)] = 3986,
  [SMALL_STATE(136)] = 4003,
  [SMALL_STATE(137)] = 4020,
  [SMALL_STATE(138)] = 4037,
  [SMALL_STATE(139)] = 4054,
  [SMALL_STATE(140)] = 4071,
  [SMALL_STATE(141)] = 4088,
  [SMALL_STATE(142)] = 4105,
  [SMALL_STATE(143)] = 4122,
  [SMALL_STATE(144)] = 4139,
  [SMALL_STATE(145)] = 4156,
  [SMALL_STATE(146)] = 4181,
  [SMALL_STATE(147)] = 4198,
  [SMALL_STATE(148)] = 4215,
  [SMALL_STATE(149)] = 4232,
  [SMALL_STATE(150)] = 4249,
  [SMALL_STATE(151)] = 4266,
  [SMALL_STATE(152)] = 4283,
  [SMALL_STATE(153)] = 4300,
  [SMALL_STATE(154)] = 4317,
  [SMALL_STATE(155)] = 4339,
  [SMALL_STATE(156)] = 4353,
  [SMALL_STATE(157)] = 4375,
  [SMALL_STATE(158)] = 4391,
  [SMALL_STATE(159)] = 4413,
  [SMALL_STATE(160)] = 4435,
  [SMALL_STATE(161)] = 4457,
  [SMALL_STATE(162)] = 4479,
  [SMALL_STATE(163)] = 4501,
  [SMALL_STATE(164)] = 4517,
  [SMALL_STATE(165)] = 4539,
  [SMALL_STATE(166)] = 4561,
  [SMALL_STATE(167)] = 4583,
  [SMALL_STATE(168)] = 4605,
  [SMALL_STATE(169)] = 4623,
  [SMALL_STATE(170)] = 4645,
  [SMALL_STATE(171)] = 4667,
  [SMALL_STATE(172)] = 4689,
  [SMALL_STATE(173)] = 4711,
  [SMALL_STATE(174)] = 4733,
  [SMALL_STATE(175)] = 4747,
  [SMALL_STATE(176)] = 4769,
  [SMALL_STATE(177)] = 4791,
  [SMALL_STATE(178)] = 4813,
  [SMALL_STATE(179)] = 4829,
  [SMALL_STATE(180)] = 4851,
  [SMALL_STATE(181)] = 4873,
  [SMALL_STATE(182)] = 4895,
  [SMALL_STATE(183)] = 4917,
  [SMALL_STATE(184)] = 4939,
  [SMALL_STATE(185)] = 4961,
  [SMALL_STATE(186)] = 4983,
  [SMALL_STATE(187)] = 5005,
  [SMALL_STATE(188)] = 5027,
  [SMALL_STATE(189)] = 5049,
  [SMALL_STATE(190)] = 5071,
  [SMALL_STATE(191)] = 5093,
  [SMALL_STATE(192)] = 5115,
  [SMALL_STATE(193)] = 5137,
  [SMALL_STATE(194)] = 5159,
  [SMALL_STATE(195)] = 5181,
  [SMALL_STATE(196)] = 5203,
  [SMALL_STATE(197)] = 5217,
  [SMALL_STATE(198)] = 5231,
  [SMALL_STATE(199)] = 5247,
  [SMALL_STATE(200)] = 5269,
  [SMALL_STATE(201)] = 5290,
  [SMALL_STATE(202)] = 5311,
  [SMALL_STATE(203)] = 5326,
  [SMALL_STATE(204)] = 5341,
  [SMALL_STATE(205)] = 5356,
  [SMALL_STATE(206)] = 5371,
  [SMALL_STATE(207)] = 5386,
  [SMALL_STATE(208)] = 5407,
  [SMALL_STATE(209)] = 5428,
  [SMALL_STATE(210)] = 5443,
  [SMALL_STATE(211)] = 5460,
  [SMALL_STATE(212)] = 5475,
  [SMALL_STATE(213)] = 5490,
  [SMALL_STATE(214)] = 5511,
  [SMALL_STATE(215)] = 5526,
  [SMALL_STATE(216)] = 5541,
  [SMALL_STATE(217)] = 5556,
  [SMALL_STATE(218)] = 5571,
  [SMALL_STATE(219)] = 5586,
  [SMALL_STATE(220)] = 5601,
  [SMALL_STATE(221)] = 5622,
  [SMALL_STATE(222)] = 5637,
  [SMALL_STATE(223)] = 5658,
  [SMALL_STATE(224)] = 5673,
  [SMALL_STATE(225)] = 5688,
  [SMALL_STATE(226)] = 5703,
  [SMALL_STATE(227)] = 5724,
  [SMALL_STATE(228)] = 5745,
  [SMALL_STATE(229)] = 5766,
  [SMALL_STATE(230)] = 5787,
  [SMALL_STATE(231)] = 5802,
  [SMALL_STATE(232)] = 5817,
  [SMALL_STATE(233)] = 5838,
  [SMALL_STATE(234)] = 5859,
  [SMALL_STATE(235)] = 5880,
  [SMALL_STATE(236)] = 5901,
  [SMALL_STATE(237)] = 5922,
  [SMALL_STATE(238)] = 5943,
  [SMALL_STATE(239)] = 5964,
  [SMALL_STATE(240)] = 5985,
  [SMALL_STATE(241)] = 6006,
  [SMALL_STATE(242)] = 6027,
  [SMALL_STATE(243)] = 6042,
  [SMALL_STATE(244)] = 6054,
  [SMALL_STATE(245)] = 6066,
  [SMALL_STATE(246)] = 6084,
  [SMALL_STATE(247)] = 6098,
  [SMALL_STATE(248)] = 6116,
  [SMALL_STATE(249)] = 6130,
  [SMALL_STATE(250)] = 6142,
  [SMALL_STATE(251)] = 6154,
  [SMALL_STATE(252)] = 6167,
  [SMALL_STATE(253)] = 6180,
  [SMALL_STATE(254)] = 6193,
  [SMALL_STATE(255)] = 6204,
  [SMALL_STATE(256)] = 6217,
  [SMALL_STATE(257)] = 6234,
  [SMALL_STATE(258)] = 6247,
  [SMALL_STATE(259)] = 6262,
  [SMALL_STATE(260)] = 6275,
  [SMALL_STATE(261)] = 6290,
  [SMALL_STATE(262)] = 6307,
  [SMALL_STATE(263)] = 6322,
  [SMALL_STATE(264)] = 6333,
  [SMALL_STATE(265)] = 6348,
  [SMALL_STATE(266)] = 6363,
  [SMALL_STATE(267)] = 6378,
  [SMALL_STATE(268)] = 6389,
  [SMALL_STATE(269)] = 6404,
  [SMALL_STATE(270)] = 6415,
  [SMALL_STATE(271)] = 6430,
  [SMALL_STATE(272)] = 6447,
  [SMALL_STATE(273)] = 6462,
  [SMALL_STATE(274)] = 6477,
  [SMALL_STATE(275)] = 6488,
  [SMALL_STATE(276)] = 6503,
  [SMALL_STATE(277)] = 6518,
  [SMALL_STATE(278)] = 6533,
  [SMALL_STATE(279)] = 6548,
  [SMALL_STATE(280)] = 6563,
  [SMALL_STATE(281)] = 6578,
  [SMALL_STATE(282)] = 6593,
  [SMALL_STATE(283)] = 6608,
  [SMALL_STATE(284)] = 6625,
  [SMALL_STATE(285)] = 6640,
  [SMALL_STATE(286)] = 6655,
  [SMALL_STATE(287)] = 6670,
  [SMALL_STATE(288)] = 6685,
  [SMALL_STATE(289)] = 6700,
  [SMALL_STATE(290)] = 6715,
  [SMALL_STATE(291)] = 6732,
  [SMALL_STATE(292)] = 6743,
  [SMALL_STATE(293)] = 6760,
  [SMALL_STATE(294)] = 6773,
  [SMALL_STATE(295)] = 6788,
  [SMALL_STATE(296)] = 6801,
  [SMALL_STATE(297)] = 6814,
  [SMALL_STATE(298)] = 6829,
  [SMALL_STATE(299)] = 6842,
  [SMALL_STATE(300)] = 6857,
  [SMALL_STATE(301)] = 6869,
  [SMALL_STATE(302)] = 6883,
  [SMALL_STATE(303)] = 6895,
  [SMALL_STATE(304)] = 6909,
  [SMALL_STATE(305)] = 6921,
  [SMALL_STATE(306)] = 6933,
  [SMALL_STATE(307)] = 6947,
  [SMALL_STATE(308)] = 6961,
  [SMALL_STATE(309)] = 6973,
  [SMALL_STATE(310)] = 6987,
  [SMALL_STATE(311)] = 7001,
  [SMALL_STATE(312)] = 7015,
  [SMALL_STATE(313)] = 7029,
  [SMALL_STATE(314)] = 7043,
  [SMALL_STATE(315)] = 7057,
  [SMALL_STATE(316)] = 7066,
  [SMALL_STATE(317)] = 7075,
  [SMALL_STATE(318)] = 7084,
  [SMALL_STATE(319)] = 7093,
  [SMALL_STATE(320)] = 7102,
  [SMALL_STATE(321)] = 7111,
  [SMALL_STATE(322)] = 7120,
  [SMALL_STATE(323)] = 7129,
  [SMALL_STATE(324)] = 7138,
  [SMALL_STATE(325)] = 7147,
  [SMALL_STATE(326)] = 7156,
  [SMALL_STATE(327)] = 7165,
  [SMALL_STATE(328)] = 7174,
  [SMALL_STATE(329)] = 7183,
  [SMALL_STATE(330)] = 7192,
  [SMALL_STATE(331)] = 7201,
  [SMALL_STATE(332)] = 7210,
  [SMALL_STATE(333)] = 7219,
  [SMALL_STATE(334)] = 7230,
  [SMALL_STATE(335)] = 7239,
  [SMALL_STATE(336)] = 7248,
  [SMALL_STATE(337)] = 7257,
  [SMALL_STATE(338)] = 7266,
  [SMALL_STATE(339)] = 7275,
  [SMALL_STATE(340)] = 7284,
  [SMALL_STATE(341)] = 7293,
  [SMALL_STATE(342)] = 7302,
  [SMALL_STATE(343)] = 7311,
  [SMALL_STATE(344)] = 7320,
  [SMALL_STATE(345)] = 7329,
  [SMALL_STATE(346)] = 7337,
  [SMALL_STATE(347)] = 7345,
  [SMALL_STATE(348)] = 7353,
  [SMALL_STATE(349)] = 7361,
  [SMALL_STATE(350)] = 7369,
  [SMALL_STATE(351)] = 7377,
  [SMALL_STATE(352)] = 7385,
  [SMALL_STATE(353)] = 7393,
  [SMALL_STATE(354)] = 7401,
  [SMALL_STATE(355)] = 7409,
  [SMALL_STATE(356)] = 7417,
  [SMALL_STATE(357)] = 7425,
  [SMALL_STATE(358)] = 7433,
  [SMALL_STATE(359)] = 7441,
  [SMALL_STATE(360)] = 7449,
  [SMALL_STATE(361)] = 7457,
  [SMALL_STATE(362)] = 7465,
  [SMALL_STATE(363)] = 7473,
  [SMALL_STATE(364)] = 7481,
  [SMALL_STATE(365)] = 7489,
  [SMALL_STATE(366)] = 7497,
  [SMALL_STATE(367)] = 7505,
  [SMALL_STATE(368)] = 7513,
  [SMALL_STATE(369)] = 7521,
  [SMALL_STATE(370)] = 7529,
  [SMALL_STATE(371)] = 7537,
  [SMALL_STATE(372)] = 7545,
  [SMALL_STATE(373)] = 7553,
  [SMALL_STATE(374)] = 7561,
  [SMALL_STATE(375)] = 7569,
  [SMALL_STATE(376)] = 7577,
  [SMALL_STATE(377)] = 7585,
  [SMALL_STATE(378)] = 7593,
  [SMALL_STATE(379)] = 7601,
  [SMALL_STATE(380)] = 7609,
  [SMALL_STATE(381)] = 7617,
  [SMALL_STATE(382)] = 7625,
  [SMALL_STATE(383)] = 7633,
  [SMALL_STATE(384)] = 7641,
  [SMALL_STATE(385)] = 7649,
  [SMALL_STATE(386)] = 7657,
  [SMALL_STATE(387)] = 7665,
  [SMALL_STATE(388)] = 7673,
  [SMALL_STATE(389)] = 7681,
  [SMALL_STATE(390)] = 7689,
  [SMALL_STATE(391)] = 7697,
  [SMALL_STATE(392)] = 7705,
  [SMALL_STATE(393)] = 7713,
  [SMALL_STATE(394)] = 7721,
  [SMALL_STATE(395)] = 7729,
  [SMALL_STATE(396)] = 7737,
  [SMALL_STATE(397)] = 7745,
  [SMALL_STATE(398)] = 7753,
  [SMALL_STATE(399)] = 7761,
  [SMALL_STATE(400)] = 7769,
  [SMALL_STATE(401)] = 7777,
  [SMALL_STATE(402)] = 7785,
  [SMALL_STATE(403)] = 7793,
  [SMALL_STATE(404)] = 7801,
  [SMALL_STATE(405)] = 7809,
  [SMALL_STATE(406)] = 7817,
  [SMALL_STATE(407)] = 7825,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__spaced_env_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 2, 0, 15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 14), SHIFT(293),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 14), SHIFT(257),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 23),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 1, 0, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 1, 0, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 23),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 16),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(176),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(384),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(272),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(393),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(225),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 17), SHIFT_REPEAT(219),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 3, 0, 10),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 3, 0, 11),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 3, 0, 11),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 11),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 11),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 5, 0, 27),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 5, 0, 27),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1, 0, 0),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 3, 0, 18),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 16),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_maintainer_instruction_repeat1, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6, 0, 23),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6, 0, 23),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 5, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 19),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 19),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 16),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 3, 0, 20),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 3, 0, 20),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 3, 0, 21),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 3, 0, 21),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 22),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 22),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 5, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(6),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, 0, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 12),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, 0, 6),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 6, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3, 0, 7),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 7, 0, 28),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, 0, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3, 0, 9),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_label_pair, 2, 0, 13),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, 0, 24),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, 0, 25),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 5, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, 0, 26),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3, 0, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1094] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token__keyword_terminator = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token__keyword_terminator] = sym__keyword_terminator,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token__keyword_terminator] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
  [4] = {
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
  [5] = {
    [ts_external_token__keyword_terminator] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dockerfile_external_scanner_create(void);
void tree_sitter_dockerfile_external_scanner_destroy(void *);
bool tree_sitter_dockerfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dockerfile_external_scanner_serialize(void *, char *);
void tree_sitter_dockerfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dockerfile_external_scanner_create,
      tree_sitter_dockerfile_external_scanner_destroy,
      tree_sitter_dockerfile_external_scanner_scan,
      tree_sitter_dockerfile_external_scanner_serialize,
      tree_sitter_dockerfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
