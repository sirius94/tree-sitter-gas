(comment) @comment
(number) @constant.numeric
(directive_name) @keyword.directive
(symbol) @variable
(label) @function
(label)
(instruction_prefix) @keyword
(instruction_name) @function.special
(register) @constant.builtin
(string) @string
(char) @char
(type) @type
(constant "$" @constant)
(operand_modifier) @attribute

(expression
  "-" @operator
  "+" @operator
  "*" @operator
  "/" @operator
  "=" @operator)

[ "(" ")" ] @punctuation.bracket

[ "," ] @punctuation.delimiter
