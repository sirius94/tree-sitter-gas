module.exports = grammar({
  name: 'gas',

  extras: $ => [$._inline_space, $.comment],

  rules: {
    source_file: $ => seq(
      repeat(choice(
        $._eol,
        seq(optional($.label), $._statement, $._eol),
        seq($.label, $._eol)
      )),
      optional($.label),
      optional($._statement)
    ),

    _statement: $ => choice(
      $.directive, 
      $.instruction, 
      $.assignment
    ),

    label: $ => /[a-zA-Z_\.\$][a-zA-Z0-9_\.\$]*:/,

    directive: $ => seq(
      $.directive_name,
      optional(seq(
        $._inline_space,
        $._directive_arg,
        repeat(seq(',', optional($._directive_arg)))
      ))
    ),

    directive_name: $ => /\.[a-zA-Z_\.\$][a-zA-Z0-9_\.\$]*/,

    _directive_arg: $ => choice(
      $.symbol, 
      $.type, 
      $.char, 
      $.string, 
      $.number, 
      $.expression
    ),

    type: $ => seq('@', $._identifier),

    assignment: $ => seq(
      $.symbol,
      repeat(choice($._inline_space, $.comment)),
      '=',
      $.expression
    ),

    expression: $ => choice(
      seq(
        $._sub_expression,
        repeat1(seq(choice('-', '+', '*', '/', '='), $._sub_expression))
      ),
      $._paren_expression
    ),

    _paren_expression: $ => seq('(', $.expression, ')'),

    _sub_expression: $ => choice(
      $.symbol,
      $.number,
      $._paren_expression
    ),

    instruction: $ => seq(
      alias($.symbol, $.instruction_name),
      optional(seq(
        $._inline_space,
        optional('*'),
        $._operand,
        repeat(seq(',', $._operand))
      ))
    ),

    _operand: $ => choice(
      $.register, 
      $._operand_symbol, 
      $.char, 
      $.string, 
      $.number, 
      $.constant, 
      $._displacement_expression
    ),

     // symbols in operands cannot start with $
    _operand_symbol: $ => alias(/[a-zA-Z_\.][a-zA-Z0-9_\.\$]*/, $.symbol),

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

    _displacement_expression_offset: $ => prec(1, choice(
      alias($._integer, $.number),
      $._operand_symbol
    )),

    constant: $ => seq('$', choice($._integer, $._float, $._identifier, $.string, $.char)),
    
    char: $ => seq('\'', choice($._character_escapes, /[^\\']/), optional('\'')),

    _character_escapes: $ => /\\b|\\f|\\n|\\r|\\t|\\\\|\\"|\\'/,

    string: $ => seq('"', repeat(choice($._string_escapes, /[^\n\r\\"]/)), '"'),

    _string_escapes: $ => /\\[0-9]{3}|\\x[0-9a-fA-F]{2}|\\b|\\f|\\n|\\r|\\t|\\\\|\\"/,

    number: $ => choice($._integer, $._float),

    _integer: $ => /-?(0[bB][01]*|0[0-7]*|[1-9][0-9]*|0[xX][0-9a-fA-F]+)/,

    _float: $ => /0[a-zA-Z][+\-]?[0-9]*\.?[0-9]*([eE][+\-]?[0-9]+)?/,

    symbol: $ => $._identifier,

    _identifier: $ => /[a-zA-Z_\.\$][a-zA-Z0-9_\.\$]*/,

    register: $ => /%[a-zA-Z][a-zA-Z0-9]*/,

    comment: $ => choice(
      /#[^\n]*/,
      seq('/*', repeat(choice(/./, $._eol)), '*/')
    ),

    _inline_space: $ => /[\t ]+/,

    _eol: $ => /\r\n|\n\r|\n|\r|;/
  }
});
