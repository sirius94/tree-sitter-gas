#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum {
  sym_label = 1,
  anon_sym_COMMA = 2,
  sym_directive_name = 3,
  anon_sym_AT = 4,
  anon_sym_EQ = 5,
  anon_sym_DASH = 6,
  anon_sym_PLUS = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_instruction_prefix_token1 = 12,
  aux_sym_instruction_prefix_token2 = 13,
  aux_sym_instruction_prefix_token3 = 14,
  aux_sym_instruction_prefix_token4 = 15,
  aux_sym_instruction_prefix_token5 = 16,
  aux_sym_instruction_prefix_token6 = 17,
  aux_sym_instruction_prefix_token7 = 18,
  aux_sym_instruction_prefix_token8 = 19,
  aux_sym_instruction_prefix_token9 = 20,
  aux_sym_instruction_prefix_token10 = 21,
  aux_sym__operand_symbol_token1 = 22,
  anon_sym_COLON = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_char_token1 = 26,
  sym__character_escapes = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_token1 = 29,
  sym__string_escapes = 30,
  sym__integer = 31,
  sym__float = 32,
  sym__identifier = 33,
  sym_register = 34,
  aux_sym_comment_token1 = 35,
  anon_sym_SLASH_STAR = 36,
  aux_sym_comment_token2 = 37,
  anon_sym_STAR_SLASH = 38,
  sym__inline_space = 39,
  sym__eol = 40,
  sym_source_file = 41,
  sym__statement = 42,
  sym_directive = 43,
  sym__directive_arg = 44,
  sym_type = 45,
  sym_assignment = 46,
  sym_expression = 47,
  sym__paren_expression = 48,
  sym__sub_expression = 49,
  sym_instruction = 50,
  sym_instruction_prefix = 51,
  sym__operand = 52,
  sym__operand_symbol = 53,
  sym__displacement_expression = 54,
  sym__displacement_expression_offset = 55,
  sym_constant = 56,
  sym_char = 57,
  sym_string = 58,
  sym_number = 59,
  sym_symbol = 60,
  sym_comment = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_directive_repeat1 = 63,
  aux_sym_assignment_repeat1 = 64,
  aux_sym_expression_repeat1 = 65,
  aux_sym_instruction_repeat1 = 66,
  aux_sym_string_repeat1 = 67,
  aux_sym_comment_repeat1 = 68,
  alias_sym_instruction_name = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [sym_directive_name] = "directive_name",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_instruction_prefix_token1] = "instruction_prefix_token1",
  [aux_sym_instruction_prefix_token2] = "instruction_prefix_token2",
  [aux_sym_instruction_prefix_token3] = "instruction_prefix_token3",
  [aux_sym_instruction_prefix_token4] = "instruction_prefix_token4",
  [aux_sym_instruction_prefix_token5] = "instruction_prefix_token5",
  [aux_sym_instruction_prefix_token6] = "instruction_prefix_token6",
  [aux_sym_instruction_prefix_token7] = "instruction_prefix_token7",
  [aux_sym_instruction_prefix_token8] = "instruction_prefix_token8",
  [aux_sym_instruction_prefix_token9] = "instruction_prefix_token9",
  [aux_sym_instruction_prefix_token10] = "instruction_prefix_token10",
  [aux_sym__operand_symbol_token1] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym__character_escapes] = "_character_escapes",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym__string_escapes] = "_string_escapes",
  [sym__integer] = "_integer",
  [sym__float] = "_float",
  [sym__identifier] = "_identifier",
  [sym_register] = "register",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__inline_space] = "_inline_space",
  [sym__eol] = "_eol",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym__directive_arg] = "_directive_arg",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym__paren_expression] = "_paren_expression",
  [sym__sub_expression] = "_sub_expression",
  [sym_instruction] = "instruction",
  [sym_instruction_prefix] = "instruction_prefix",
  [sym__operand] = "_operand",
  [sym__operand_symbol] = "_operand_symbol",
  [sym__displacement_expression] = "_displacement_expression",
  [sym__displacement_expression_offset] = "_displacement_expression_offset",
  [sym_constant] = "constant",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_instruction_name] = "instruction_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_label] = sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_directive_name] = sym_directive_name,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_instruction_prefix_token1] = aux_sym_instruction_prefix_token1,
  [aux_sym_instruction_prefix_token2] = aux_sym_instruction_prefix_token2,
  [aux_sym_instruction_prefix_token3] = aux_sym_instruction_prefix_token3,
  [aux_sym_instruction_prefix_token4] = aux_sym_instruction_prefix_token4,
  [aux_sym_instruction_prefix_token5] = aux_sym_instruction_prefix_token5,
  [aux_sym_instruction_prefix_token6] = aux_sym_instruction_prefix_token6,
  [aux_sym_instruction_prefix_token7] = aux_sym_instruction_prefix_token7,
  [aux_sym_instruction_prefix_token8] = aux_sym_instruction_prefix_token8,
  [aux_sym_instruction_prefix_token9] = aux_sym_instruction_prefix_token9,
  [aux_sym_instruction_prefix_token10] = aux_sym_instruction_prefix_token10,
  [aux_sym__operand_symbol_token1] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym__character_escapes] = sym__character_escapes,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__string_escapes] = sym__string_escapes,
  [sym__integer] = sym__integer,
  [sym__float] = sym__float,
  [sym__identifier] = sym__identifier,
  [sym_register] = sym_register,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__inline_space] = sym__inline_space,
  [sym__eol] = sym__eol,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym__directive_arg] = sym__directive_arg,
  [sym_type] = sym_type,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym__paren_expression] = sym__paren_expression,
  [sym__sub_expression] = sym__sub_expression,
  [sym_instruction] = sym_instruction,
  [sym_instruction_prefix] = sym_instruction_prefix,
  [sym__operand] = sym__operand,
  [sym__operand_symbol] = sym__operand_symbol,
  [sym__displacement_expression] = sym__displacement_expression,
  [sym__displacement_expression_offset] = sym__displacement_expression_offset,
  [sym_constant] = sym_constant,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_instruction_name] = alias_sym_instruction_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_instruction_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operand_symbol_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__character_escapes] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__string_escapes] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__inline_space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__sub_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym__operand_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__displacement_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__displacement_expression_offset] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_instruction_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_instruction_name,
  },
  [2] = {
    [2] = alias_sym_instruction_name,
  },
  [3] = {
    [0] = sym_number,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_symbol, 2,
    sym_symbol,
    alias_sym_instruction_name,
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
  [26] = 26,
  [27] = 27,
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
  [43] = 42,
  [44] = 44,
  [45] = 45,
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
  [61] = 41,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 21,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 21,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 118,
  [138] = 127,
  [139] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(85);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '6') ADVANCE(81);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(44);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(100);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(44);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(100);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(44);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(100);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(100);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__character_escapes);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__string_escapes);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(67);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '3') ADVANCE(79);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(42);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\r') ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {(TSStateId)(-1)},
  [138] = {(TSStateId)(-1)},
  [139] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__operand_symbol_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(126),
    [sym__statement] = STATE(91),
    [sym_directive] = STATE(89),
    [sym_assignment] = STATE(89),
    [sym_instruction] = STATE(89),
    [sym_instruction_prefix] = STATE(136),
    [sym_symbol] = STATE(68),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [sym_directive_name] = ACTIONS(13),
    [aux_sym_instruction_prefix_token1] = ACTIONS(15),
    [aux_sym_instruction_prefix_token2] = ACTIONS(15),
    [aux_sym_instruction_prefix_token3] = ACTIONS(15),
    [aux_sym_instruction_prefix_token4] = ACTIONS(15),
    [aux_sym_instruction_prefix_token5] = ACTIONS(15),
    [aux_sym_instruction_prefix_token6] = ACTIONS(15),
    [aux_sym_instruction_prefix_token7] = ACTIONS(15),
    [aux_sym_instruction_prefix_token8] = ACTIONS(15),
    [aux_sym_instruction_prefix_token9] = ACTIONS(15),
    [aux_sym_instruction_prefix_token10] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym__inline_space] = ACTIONS(21),
    [sym__eol] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym_directive_name,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(23), 1,
      sym__eol,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_label,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_symbol,
    STATE(96), 1,
      sym__statement,
    STATE(136), 1,
      sym_instruction_prefix,
    STATE(89), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [57] = 14,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_label,
    ACTIONS(34), 1,
      sym_directive_name,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym__eol,
    STATE(68), 1,
      sym_symbol,
    STATE(120), 1,
      sym__statement,
    STATE(136), 1,
      sym_instruction_prefix,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(89), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(37), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [112] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    STATE(4), 1,
      sym_comment,
    STATE(68), 1,
      sym_symbol,
    STATE(104), 1,
      sym__statement,
    STATE(136), 1,
      sym_instruction_prefix,
    STATE(89), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [163] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(68), 1,
      sym_symbol,
    STATE(100), 1,
      sym__statement,
    STATE(136), 1,
      sym_instruction_prefix,
    STATE(89), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [214] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(86), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(28), 2,
      sym_number,
      sym_symbol,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    STATE(76), 4,
      sym_type,
      sym_expression,
      sym_char,
      sym_string,
  [270] = 12,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(46), 1,
      sym_directive_name,
    ACTIONS(48), 1,
      sym__eol,
    STATE(7), 1,
      sym_comment,
    STATE(68), 1,
      sym_symbol,
    STATE(122), 1,
      sym__statement,
    STATE(136), 1,
      sym_instruction_prefix,
    STATE(89), 3,
      sym_directive,
      sym_assignment,
      sym_instruction,
    ACTIONS(15), 10,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
  [318] = 15,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym__integer,
    ACTIONS(78), 1,
      sym_register,
    STATE(8), 1,
      sym_comment,
    STATE(54), 1,
      sym__operand,
    STATE(55), 1,
      sym__operand_symbol,
    STATE(119), 1,
      sym__displacement_expression_offset,
    ACTIONS(66), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
    STATE(87), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [371] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym__integer,
    ACTIONS(78), 1,
      sym_register,
    ACTIONS(80), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_comment,
    STATE(55), 1,
      sym__operand_symbol,
    STATE(62), 1,
      sym__operand,
    STATE(119), 1,
      sym__displacement_expression_offset,
    STATE(87), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [427] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym__integer,
    ACTIONS(78), 1,
      sym_register,
    STATE(10), 1,
      sym_comment,
    STATE(55), 1,
      sym__operand_symbol,
    STATE(57), 1,
      sym__operand,
    STATE(119), 1,
      sym__displacement_expression_offset,
    STATE(87), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [480] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym__integer,
    ACTIONS(78), 1,
      sym_register,
    STATE(11), 1,
      sym_comment,
    STATE(55), 1,
      sym__operand_symbol,
    STATE(60), 1,
      sym__operand,
    STATE(119), 1,
      sym__displacement_expression_offset,
    STATE(87), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [533] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym__integer,
    ACTIONS(78), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(55), 1,
      sym__operand_symbol,
    STATE(70), 1,
      sym__operand,
    STATE(119), 1,
      sym__displacement_expression_offset,
    STATE(87), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [586] = 15,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(13), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(47), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(28), 2,
      sym_number,
      sym_symbol,
    STATE(76), 4,
      sym_type,
      sym_expression,
      sym_char,
      sym_string,
  [637] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(14), 1,
      sym_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(84), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [669] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(15), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(88), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [701] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(16), 1,
      sym_comment,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(90), 12,
      sym_directive_name,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      sym__identifier,
  [733] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(96), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(94), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [764] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(103), 1,
      anon_sym_SLASH,
    STATE(18), 2,
      sym_comment,
      aux_sym_expression_repeat1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [793] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(19), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(130), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(24), 2,
      sym_number,
      sym_symbol,
  [829] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(20), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(113), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(24), 2,
      sym_number,
      sym_symbol,
  [865] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [891] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [917] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(23), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(90), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(24), 2,
      sym_number,
      sym_symbol,
  [953] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [979] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [1005] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(122), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [1031] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
  [1059] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    ACTIONS(112), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1086] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(22), 1,
      sym__sub_expression,
    STATE(29), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(24), 3,
      sym__paren_expression,
      sym_number,
      sym_symbol,
  [1117] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(30), 1,
      sym_comment,
    ACTIONS(128), 2,
      sym__integer,
      sym__float,
    STATE(78), 2,
      sym_char,
      sym_string,
  [1147] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(96), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_expression_repeat1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1172] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(134), 1,
      sym_register,
    STATE(32), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
  [1200] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(136), 1,
      sym_register,
    STATE(33), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(125), 1,
      sym__displacement_expression_offset,
  [1228] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(138), 1,
      sym_register,
    STATE(34), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1256] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(132), 1,
      sym__displacement_expression_offset,
  [1284] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(36), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1304] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(144), 1,
      sym_register,
    STATE(37), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(128), 1,
      sym__displacement_expression_offset,
  [1332] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    ACTIONS(146), 1,
      sym_register,
    STATE(38), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(124), 1,
      sym__displacement_expression_offset,
  [1360] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_string_token1,
    ACTIONS(152), 1,
      sym__string_escapes,
    STATE(39), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1385] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1408] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      anon_sym_STAR_SLASH,
    STATE(41), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1431] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      anon_sym_STAR_SLASH,
    STATE(41), 1,
      aux_sym_comment_repeat1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1454] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      anon_sym_STAR_SLASH,
    STATE(43), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1477] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(166), 2,
      aux_sym_comment_token2,
      sym__eol,
    STATE(44), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1498] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    STATE(45), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(131), 1,
      sym__displacement_expression_offset,
  [1523] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    STATE(46), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(129), 1,
      sym__displacement_expression_offset,
  [1548] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_directive_repeat1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1571] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    STATE(48), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(124), 1,
      sym__displacement_expression_offset,
  [1596] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    STATE(49), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(128), 1,
      sym__displacement_expression_offset,
  [1621] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1644] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(132), 1,
      sym__integer,
    STATE(51), 1,
      sym_comment,
    STATE(95), 1,
      sym__operand_symbol,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1669] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1690] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1711] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_instruction_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1734] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1755] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1778] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_instruction_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1801] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(58), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [1822] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1845] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_instruction_repeat1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1868] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1891] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_instruction_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1914] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1935] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(64), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [1956] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_string_token1,
    ACTIONS(214), 1,
      sym__string_escapes,
    STATE(65), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [1979] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      aux_sym_string_token1,
    ACTIONS(152), 1,
      sym__string_escapes,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    STATE(66), 1,
      sym_comment,
  [2004] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_directive_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2027] = 7,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(225), 1,
      aux_sym_comment_token1,
    ACTIONS(227), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      sym__inline_space,
    STATE(68), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2050] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(69), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2068] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(70), 1,
      sym_comment,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2086] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(71), 1,
      sym_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2104] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(72), 1,
      sym_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2122] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(73), 1,
      sym_comment,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2140] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_DQUOTE,
      sym__string_escapes,
  [2160] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(75), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2178] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(76), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2196] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(77), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2214] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(78), 1,
      sym_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2232] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(79), 1,
      sym_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2250] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_STAR_SLASH,
    STATE(80), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2270] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(81), 1,
      sym_comment,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2288] = 2,
    STATE(82), 1,
      sym_comment,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
      sym__eol,
  [2300] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(83), 1,
      sym_comment,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2318] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(84), 1,
      sym_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2336] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(85), 1,
      sym_comment,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2354] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(86), 1,
      sym_comment,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2372] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(87), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2390] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(88), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2408] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(89), 1,
      sym_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2425] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(90), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2442] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__eol,
    STATE(91), 1,
      sym_comment,
  [2461] = 6,
    ACTIONS(225), 1,
      aux_sym_comment_token1,
    ACTIONS(227), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      sym__inline_space,
    STATE(92), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_assignment_repeat1,
  [2480] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(93), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2497] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_comment,
  [2516] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(95), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2533] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_comment,
  [2552] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym__inline_space,
      sym__eol,
  [2567] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_register,
    STATE(98), 1,
      sym_comment,
  [2586] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(99), 1,
      sym_comment,
    STATE(114), 1,
      sym_symbol,
  [2605] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym__eol,
    STATE(100), 1,
      sym_comment,
  [2624] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_comment,
  [2643] = 5,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      sym__inline_space,
    STATE(102), 2,
      sym_comment,
      aux_sym_assignment_repeat1,
  [2660] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(298), 1,
      aux_sym_char_token1,
    ACTIONS(300), 1,
      sym__character_escapes,
    STATE(103), 1,
      sym_comment,
  [2679] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym__eol,
    STATE(104), 1,
      sym_comment,
  [2698] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_comment,
  [2717] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [2736] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
  [2755] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      sym__inline_space,
    STATE(108), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2772] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_comment,
  [2791] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      sym_register,
    STATE(110), 1,
      sym_comment,
  [2810] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      sym_register,
    STATE(111), 1,
      sym_comment,
  [2829] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
  [2848] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(113), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2865] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      sym__inline_space,
    STATE(114), 1,
      sym_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2882] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [2901] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      sym_register,
    STATE(116), 1,
      sym_comment,
  [2920] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
  [2939] = 2,
    STATE(118), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [2949] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
  [2965] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    STATE(120), 1,
      sym_comment,
  [2981] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [2997] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      sym__eol,
    STATE(122), 1,
      sym_comment,
  [3013] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [3029] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [3045] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [3061] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_comment,
  [3077] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3087] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_comment,
  [3103] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
  [3119] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_comment,
  [3135] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_comment,
  [3151] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
  [3167] = 2,
    STATE(133), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3177] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(362), 1,
      sym__identifier,
    STATE(134), 1,
      sym_comment,
  [3193] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym__inline_space,
    STATE(135), 1,
      sym_comment,
  [3206] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      sym__inline_space,
    STATE(136), 1,
      sym_comment,
  [3219] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [3223] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [3227] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 427,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 533,
  [SMALL_STATE(13)] = 586,
  [SMALL_STATE(14)] = 637,
  [SMALL_STATE(15)] = 669,
  [SMALL_STATE(16)] = 701,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 764,
  [SMALL_STATE(19)] = 793,
  [SMALL_STATE(20)] = 829,
  [SMALL_STATE(21)] = 865,
  [SMALL_STATE(22)] = 891,
  [SMALL_STATE(23)] = 917,
  [SMALL_STATE(24)] = 953,
  [SMALL_STATE(25)] = 979,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1031,
  [SMALL_STATE(28)] = 1059,
  [SMALL_STATE(29)] = 1086,
  [SMALL_STATE(30)] = 1117,
  [SMALL_STATE(31)] = 1147,
  [SMALL_STATE(32)] = 1172,
  [SMALL_STATE(33)] = 1200,
  [SMALL_STATE(34)] = 1228,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1284,
  [SMALL_STATE(37)] = 1304,
  [SMALL_STATE(38)] = 1332,
  [SMALL_STATE(39)] = 1360,
  [SMALL_STATE(40)] = 1385,
  [SMALL_STATE(41)] = 1408,
  [SMALL_STATE(42)] = 1431,
  [SMALL_STATE(43)] = 1454,
  [SMALL_STATE(44)] = 1477,
  [SMALL_STATE(45)] = 1498,
  [SMALL_STATE(46)] = 1523,
  [SMALL_STATE(47)] = 1548,
  [SMALL_STATE(48)] = 1571,
  [SMALL_STATE(49)] = 1596,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1644,
  [SMALL_STATE(52)] = 1669,
  [SMALL_STATE(53)] = 1690,
  [SMALL_STATE(54)] = 1711,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1755,
  [SMALL_STATE(57)] = 1778,
  [SMALL_STATE(58)] = 1801,
  [SMALL_STATE(59)] = 1822,
  [SMALL_STATE(60)] = 1845,
  [SMALL_STATE(61)] = 1868,
  [SMALL_STATE(62)] = 1891,
  [SMALL_STATE(63)] = 1914,
  [SMALL_STATE(64)] = 1935,
  [SMALL_STATE(65)] = 1956,
  [SMALL_STATE(66)] = 1979,
  [SMALL_STATE(67)] = 2004,
  [SMALL_STATE(68)] = 2027,
  [SMALL_STATE(69)] = 2050,
  [SMALL_STATE(70)] = 2068,
  [SMALL_STATE(71)] = 2086,
  [SMALL_STATE(72)] = 2104,
  [SMALL_STATE(73)] = 2122,
  [SMALL_STATE(74)] = 2140,
  [SMALL_STATE(75)] = 2160,
  [SMALL_STATE(76)] = 2178,
  [SMALL_STATE(77)] = 2196,
  [SMALL_STATE(78)] = 2214,
  [SMALL_STATE(79)] = 2232,
  [SMALL_STATE(80)] = 2250,
  [SMALL_STATE(81)] = 2270,
  [SMALL_STATE(82)] = 2288,
  [SMALL_STATE(83)] = 2300,
  [SMALL_STATE(84)] = 2318,
  [SMALL_STATE(85)] = 2336,
  [SMALL_STATE(86)] = 2354,
  [SMALL_STATE(87)] = 2372,
  [SMALL_STATE(88)] = 2390,
  [SMALL_STATE(89)] = 2408,
  [SMALL_STATE(90)] = 2425,
  [SMALL_STATE(91)] = 2442,
  [SMALL_STATE(92)] = 2461,
  [SMALL_STATE(93)] = 2480,
  [SMALL_STATE(94)] = 2497,
  [SMALL_STATE(95)] = 2516,
  [SMALL_STATE(96)] = 2533,
  [SMALL_STATE(97)] = 2552,
  [SMALL_STATE(98)] = 2567,
  [SMALL_STATE(99)] = 2586,
  [SMALL_STATE(100)] = 2605,
  [SMALL_STATE(101)] = 2624,
  [SMALL_STATE(102)] = 2643,
  [SMALL_STATE(103)] = 2660,
  [SMALL_STATE(104)] = 2679,
  [SMALL_STATE(105)] = 2698,
  [SMALL_STATE(106)] = 2717,
  [SMALL_STATE(107)] = 2736,
  [SMALL_STATE(108)] = 2755,
  [SMALL_STATE(109)] = 2772,
  [SMALL_STATE(110)] = 2791,
  [SMALL_STATE(111)] = 2810,
  [SMALL_STATE(112)] = 2829,
  [SMALL_STATE(113)] = 2848,
  [SMALL_STATE(114)] = 2865,
  [SMALL_STATE(115)] = 2882,
  [SMALL_STATE(116)] = 2901,
  [SMALL_STATE(117)] = 2920,
  [SMALL_STATE(118)] = 2939,
  [SMALL_STATE(119)] = 2949,
  [SMALL_STATE(120)] = 2965,
  [SMALL_STATE(121)] = 2981,
  [SMALL_STATE(122)] = 2997,
  [SMALL_STATE(123)] = 3013,
  [SMALL_STATE(124)] = 3029,
  [SMALL_STATE(125)] = 3045,
  [SMALL_STATE(126)] = 3061,
  [SMALL_STATE(127)] = 3077,
  [SMALL_STATE(128)] = 3087,
  [SMALL_STATE(129)] = 3103,
  [SMALL_STATE(130)] = 3119,
  [SMALL_STATE(131)] = 3135,
  [SMALL_STATE(132)] = 3151,
  [SMALL_STATE(133)] = 3167,
  [SMALL_STATE(134)] = 3177,
  [SMALL_STATE(135)] = 3193,
  [SMALL_STATE(136)] = 3206,
  [SMALL_STATE(137)] = 3219,
  [SMALL_STATE(138)] = 3223,
  [SMALL_STATE(139)] = 3227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_expression, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sub_expression, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arg, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(12),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(118),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(42),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(102),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_prefix, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gas(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
