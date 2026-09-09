/// <reference types="tree-sitter-cli/dsl"/>
// @ts-check

/**
 * @param {GrammarSymbols<string>} $
 * @param {RegExp} pattern
 * @param {string} name
 * @returns {RuleOrLiteral}
 */
function keyword($, pattern, name) {
  return seq(alias(pattern, name), $._keyword_terminator);
}

/**
 * @param {RuleOrLiteral} rule
 * @returns {RuleOrLiteral}
 */
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(',', rule)), optional(',')));
}

module.exports = grammar({
  name: 'dockerfile',

  extras: ($) => [
    /[ \t\f]+/,
    $.line_continuation,
    $.comment,
  ],

  externals: ($) => [
    $.heredoc_marker,
    $.heredoc_line,
    $.heredoc_end,
    $._keyword_terminator,
    $.error_sentinel,
  ],

  conflicts: ($) => [
    [$.env_pair],
  ],

  rules: {
    source_file: ($) => seq(
      repeat($._newline),
      optional(
        seq(
          choice($.parser_directive, $._instruction),
          repeat(seq(repeat1($._newline), choice($.parser_directive, $._instruction))),
          repeat($._newline),
        ),
      ),
    ),

    _newline: ($) => /\r?\n/,

    line_continuation: ($) => /\\([ \t]*)\r?\n/,

    comment: ($) => token(seq('#', /[^\r\n]*/)),

    parser_directive: ($) => token(prec(2, seq(
      '#',
      /[ \t]*/,
      choice(
        /[sS][yY][nN][tT][aA][xX]/,
        /[eE][sS][cC][aA][pP][eE]/,
        /[cC][hH][eE][cC][kK]/,
      ),
      /[ \t]*=[ \t]*/,
      /[^\r\n]*/,
    ))),

    _instruction: ($) => choice(
      $.from_instruction,
      $.run_instruction,
      $.cmd_instruction,
      $.label_instruction,
      $.expose_instruction,
      $.env_instruction,
      $.add_instruction,
      $.copy_instruction,
      $.entrypoint_instruction,
      $.volume_instruction,
      $.user_instruction,
      $.workdir_instruction,
      $.arg_instruction,
      $.onbuild_instruction,
      $.stopsignal_instruction,
      $.healthcheck_instruction,
      $.shell_instruction,
      $.maintainer_instruction,
      $.cross_build_instruction,
    ),

    from_instruction: ($) => seq(
      keyword($, /[fF][rR][oO][mM]/, 'FROM'),
      repeat($.param),
      field('image', $.image_spec),
      optional(seq(
        keyword($, /[aA][sS]/, 'AS'),
        field('as', alias(choice($.identifier, $.unquoted_string), $.image_alias)),
      )),
    ),

    image_spec: ($) => repeat1(choice(
      $.unquoted_string,
      $.expansion,
      $.string,
    )),

    run_instruction: ($) => seq(
      keyword($, /[rR][uU][nN]/, 'RUN'),
      repeat($.param),
      choice(
        $.json_string_array,
        $.shell_command,
      ),
      repeat($.heredoc_block),
    ),

    cmd_instruction: ($) => seq(
      keyword($, /[cC][mM][dD]/, 'CMD'),
      choice(
        $.json_string_array,
        $.shell_command,
      ),
    ),

    label_instruction: ($) => seq(
      keyword($, /[lL][aA][bB][eE][lL]/, 'LABEL'),
      choice(
        prec(2, repeat1($.label_pair)),
        alias($._spaced_label_pair, $.label_pair),
      ),
    ),

    label_pair: ($) => prec(1, seq(
      field('key', choice($.unquoted_string, $.string, $.expansion)),
      '=',
      field('value', choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion)),
    )),

    _spaced_label_pair: ($) => seq(
      field('key', choice($.unquoted_string, $.string, $.expansion)),
      field('value', choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion)),
    ),

    expose_instruction: ($) => seq(
      keyword($, /[eE][xX][pP][oO][sS][eE]/, 'EXPOSE'),
      repeat1($.expose_port),
    ),

    expose_port: ($) => seq(
      field('port', choice($.number, $.expansion)),
      optional(seq(
        '/',
        field('protocol', choice(alias($.unquoted_string, $.protocol), $.expansion)),
      )),
    ),

    env_instruction: ($) => seq(
      keyword($, /[eE][nN][vV]/, 'ENV'),
      choice(
        prec(2, repeat1($.env_pair)),
        alias($._spaced_env_pair, $.env_pair),
      ),
    ),

    env_pair: ($) => prec(1, seq(
      field('name', choice($.identifier, $.unquoted_string)),
      '=',
      field('value', optional(choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion))),
    )),

    _spaced_env_pair: ($) => seq(
      field('name', choice($.identifier, $.unquoted_string)),
      field('value', repeat1(choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion))),
    ),

    add_instruction: ($) => seq(
      keyword($, /[aA][dD][dD]/, 'ADD'),
      repeat($.param),
      choice(
        $.json_string_array,
        seq(
          repeat1(field('source', choice($.path, $.heredoc_marker))),
          field('destination', $.path),
          repeat($.heredoc_block),
        ),
      ),
    ),

    copy_instruction: ($) => seq(
      keyword($, /[cC][oO][pP][yY]/, 'COPY'),
      repeat($.param),
      choice(
        $.json_string_array,
        seq(
          repeat1(field('source', choice($.path, $.heredoc_marker))),
          field('destination', $.path),
          repeat($.heredoc_block),
        ),
      ),
    ),

    entrypoint_instruction: ($) => seq(
      keyword($, /[eE][nN][tT][rR][yY][pP][oO][iI][nN][tT]/, 'ENTRYPOINT'),
      choice(
        $.json_string_array,
        $.shell_command,
      ),
    ),

    volume_instruction: ($) => seq(
      keyword($, /[vV][oO][lL][uU][mM][eE]/, 'VOLUME'),
      choice(
        $.json_string_array,
        repeat1($.path),
      ),
    ),

    user_instruction: ($) => seq(
      keyword($, /[uU][sS][eE][rR]/, 'USER'),
      field('user', choice($.user_name, $.expansion, $.string)),
      optional(seq(
        ':',
        field('group', choice($.user_name, $.expansion, $.string)),
      )),
    ),

    user_name: ($) => /[^#"'\s\r\n\\\$\[\]\(\)=:]+/,

    workdir_instruction: ($) => seq(
      keyword($, /[wW][oO][rR][kK][dD][iI][rR]/, 'WORKDIR'),
      field('path', $.path),
    ),

    arg_instruction: ($) => seq(
      keyword($, /[aA][rR][gG]/, 'ARG'),
      field('name', choice($.identifier, $.unquoted_string)),
      optional(seq(
        '=',
        field('default_value', optional(choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion))),
      )),
    ),

    onbuild_instruction: ($) => seq(
      keyword($, /[oO][nN][bB][uU][iI][lL][dD]/, 'ONBUILD'),
      $._instruction,
    ),

    stopsignal_instruction: ($) => seq(
      keyword($, /[sS][tT][oO][pP][sS][iI][gG][nN][aA][lL]/, 'STOPSIGNAL'),
      field('signal', choice($.identifier, $.number, $.expansion, $.unquoted_string)),
    ),

    healthcheck_instruction: ($) => seq(
      keyword($, /[hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK]/, 'HEALTHCHECK'),
      choice(
        alias(/[nN][oO][nN][eE]/, 'NONE'),
        seq(
          repeat($.param),
          keyword($, /[cC][mM][dD]/, 'CMD'),
          choice(
            $.json_string_array,
            $.shell_command,
          ),
        ),
      ),
    ),

    shell_instruction: ($) => seq(
      keyword($, /[sS][hH][eE][lL][lL]/, 'SHELL'),
      $.json_string_array,
    ),

    maintainer_instruction: ($) => seq(
      keyword($, /[mM][aA][iI][nN][tT][aA][iI][nN][eE][rR]/, 'MAINTAINER'),
      alias(repeat1(choice($.unquoted_string, $.string, $.expansion)), $.maintainer_info),
    ),

    cross_build_instruction: ($) => seq(
      alias(/[cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD]_[a-zA-Z0-9_-]+/, $.cross_build_command),
      repeat(choice($.unquoted_string, $.string, $.expansion)),
    ),

    param: ($) => prec(2, seq(
      alias(token(prec(2, seq('--', /[a-zA-Z0-9_-]+/))), $.param_name),
      optional(seq(
        '=',
        field('value', choice($.identifier, $.unquoted_string, $.unquoted_value, $.number, $.string, $.expansion)),
      )),
    )),

    shell_command: ($) => repeat1(choice(
      $.string,
      $.expansion,
      $.heredoc_marker,
      $._shell_fragment,
    )),

    _shell_fragment: ($) => choice(
      $.unquoted_value,
      token(choice(
        '&&', '||', '|', ';', '&', '>', '>>', '<', '<<', '2>&1', '1>&2',
        '(', ')', '{', '}', '[', ']',
      )),
    ),

    heredoc_block: ($) => seq(
      repeat($.heredoc_line),
      $.heredoc_end,
    ),

    path: ($) => choice(
      $.unquoted_string,
      $.string,
      $.expansion,
    ),

    string: ($) => choice(
      $.double_quoted_string,
      $.single_quoted_string,
    ),

    double_quoted_string: ($) => seq(
      '"',
      repeat(choice(
        $.expansion,
        $.escape_sequence,
        token.immediate(/[^"\\\$]+/),
        '$',
      )),
      '"',
    ),

    single_quoted_string: ($) => seq(
      "'",
      repeat(choice(
        token.immediate(/[^'\\]+/),
        $.escape_sequence,
      )),
      "'",
    ),

    escape_sequence: ($) => token.immediate(seq('\\', /./)),

    expansion: ($) => choice(
      seq(
        '$',
        field('name', alias(/[a-zA-Z_][a-zA-Z0-9_]*/, $.variable)),
      ),
      seq(
        '${',
        field('name', alias(/[a-zA-Z_][a-zA-Z0-9_]*/, $.variable)),
        optional(seq(
          field('operator', choice(':-', '-', ':=', ':', ':+', '+', ':?', '?')),
          field('default', choice($.unquoted_string, $.string)),
        )),
        '}',
      ),
    ),

    json_string_array: ($) => seq(
      '[',
      commaSep(choice(
        $.double_quoted_string,
        $.single_quoted_string,
        $.unquoted_string,
      )),
      ']',
    ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: ($) => /\d+/,

    unquoted_string: ($) => /[^#"'\s\r\n\\\$\[\]\(\)=\{\}]+/,

    unquoted_value: ($) => /[^#"'\s\r\n\\\$=][^#"'\s\r\n\\\$]*/,
  },
});
