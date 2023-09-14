module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  extras: $ => [$._inline_space, $.comment],

  rules: {
    source_file: $ => seq(
      repeat(choice(
        $._eol,
        seq($._statement, $._eol)
      )),
      optional($._statement)
    ),

    _statement: $ => choice($.directive, $.instruction),

    directive: $ => seq(
      $.directive_name,
      $._inline_space,
      $.directive_arg,
      repeat(seq(',', $.directive_arg))
    ),

    directive_name: $ => seq('.', $._identifier),

    directive_arg: $ => choice($.symbol, $.char, $.string, $.number),

    instruction: $ => seq(
      $.instruction_name,
      $._inline_space,
      $._operand,
      repeat(seq(',', $._operand))
    ),

    instruction_name: $ => /[a-zA-Z0-9]+/,

    _operand: $ => choice($.register, $.symbol, $.char, $.string, $.number, $.constant, $._displacement_expression),

    _displacement_expression: $ => seq(
      optional(seq($.register, ':')),
      optional(seq($._displacement_expression_offset)),
      '(',
      choice(
        $.register,
        seq(',', $._displacement_expression_offset),
        seq(
          optional(choice(',', seq($.register, ','))),
          $.register,
          optional(seq(',', $._displacement_expression_offset))
        )
      ),
      ')'
    ),

    _displacement_expression_offset: $ => prec(1, choice(alias($._integer, $.number), $.symbol)),

    constant: $ => seq('$', choice($._integer, $._float, $._identifier, $.string, $.char)),
    
    char: $ => seq('\'', choice($._character_escapes, /[^\\']/), optional('\'')),

    _character_escapes: $ => /\\b|\\f|\\n|\\r|\\t|\\\\|\\"|\\'/,

    string: $ => seq('"', repeat(choice($._string_escapes, /[^\n\r\\"]/)), '"'),

    _string_escapes: $ => /\\[0-9]{3}|\\x[0-9a-fA-F]{2}|\\b|\\f|\\n|\\r|\\t|\\\\|\\"/,

    number: $ => choice($._integer, $._float),

    _integer: $ => /-?(0[bB][01]*|0[0-7]*|[1-9][0-9]*|0[xX][0-9a-fA-F]+)/,

    _float: $ => /0[a-zA-Z][+\-]?[0-9]*\.?[0-9]*([eE][+\-]?[0-9]+)?/,

    symbol: $ => $._identifier,

    _identifier: $ => /[a-zA-Z_\.\$][a-zA-Z_\.\$]*/,

    register: $ => /%[a-zA-Z][a-zA-Z0-9]*/,

    comment: $ => choice(
      /#[^\n]*/,
      seq('/*', repeat(choice(/./, $._eol)), '*/')
    ),

    _inline_space: $ => /[\t ]+/,

    _eol: $ => /\r\n|\n\r|\n|\r/
  }
});
