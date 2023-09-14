const symbol = /[a-zA-Z_\.\$][a-zA-Z_\.\$]*/
const string_escapes = /\\[0-9]{3}|\\x[0-9a-fA-F]{2}|\\b|\\f|\\n|\\r|\\t|\\\\|\\"/
const character_escapes = /\\b|\\f|\\n|\\r|\\t|\\\\|\\"|\\'/
const integer = /-?(0[bB][01]*|0[0-7]*|[1-9][0-9]*|0[xX][0-9a-fA-F]+)/
const float = /0[a-zA-Z][+\-]?[0-9]*\.?[0-9]*([eE][+\-]?[0-9]+)?/
const eol = /\r\n|\n\r|\n|\r/

module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  extras: $ => [$.comment, $._inline_space],

  rules: {
    source_file: $ => repeat(choice(
      $._until_eol,
      seq($._statement, $._until_eol)
    )),

    _statement: $ => choice($.directive, $.instruction),

    directive: $ => seq(
      $.directive_name,
      $._inline_space,
      $.directive_arg,
      repeat(seq(',', $.directive_arg))
    ),

    directive_name: $ => seq('.', symbol),

    directive_arg: $ => choice($.symbol, $.char, $.string, $.number),

    instruction: $ => seq(
      $.instruction_name,
      $._inline_space,
      $._operand,
      repeat(seq(',', $._operand))
    ),

    instruction_name: $ => symbol,

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

    _displacement_expression_offset: $ => prec(1, choice(alias(integer, $.number), $.symbol)),

    constant: $ => seq('$', choice(integer, float, symbol, $.string, $.char)),
    
    char: $ => seq('\'', choice(character_escapes, /[^\\']/), optional('\'')),

    string: $ => seq('"', repeat(choice(string_escapes, /[^\n\r\\"]/)), '"'),

    number: $ => choice(integer, float),

    symbol: $ => symbol,

    register: $ => /%[a-zA-Z][a-zA-Z0-9]*/,

    _until_eol: $ => seq(
      repeat($.comment),
      choice(
        alias($._line_comment, $.comment),
        alias($._block_comment, $.comment),
        eol
      )
    ),

    comment: $ => seq('/*', repeat(/./), '*/'),
    
    _line_comment: $ => /#[^\n]*/,
   
    _block_comment: $ => seq('/*', repeat(/./), eol, repeat(choice(/./, eol)) ,'*/'),

    _inline_space: $ => /[\t ]+/
  }
});
