#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
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
  sym_operand_modifier = 23,
  anon_sym_COLON = 24,
  anon_sym_DOLLAR = 25,
  anon_sym_SQUOTE = 26,
  aux_sym_char_token1 = 27,
  sym__character_escapes = 28,
  sym_string = 29,
  sym__integer = 30,
  sym__float = 31,
  sym__identifier = 32,
  sym_register = 33,
  aux_sym_comment_token1 = 34,
  anon_sym_SLASH_STAR = 35,
  aux_sym_comment_token2 = 36,
  anon_sym_STAR_SLASH = 37,
  sym__inline_space = 38,
  sym__eol = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_directive = 42,
  sym__directive_arg = 43,
  sym_type = 44,
  sym_assignment = 45,
  sym_expression = 46,
  sym__paren_expression = 47,
  sym__sub_expression = 48,
  sym_instruction = 49,
  sym_instruction_prefix = 50,
  sym__operand = 51,
  sym__operand_symbol = 52,
  sym__displacement_expression = 53,
  sym__displacement_expression_offset = 54,
  sym_constant = 55,
  sym_char = 56,
  sym_number = 57,
  sym_symbol = 58,
  sym_comment = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_directive_repeat1 = 61,
  aux_sym_assignment_repeat1 = 62,
  aux_sym_expression_repeat1 = 63,
  aux_sym_instruction_repeat1 = 64,
  aux_sym_comment_repeat1 = 65,
  alias_sym_instruction_name = 66,
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
  [sym_operand_modifier] = "operand_modifier",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym__character_escapes] = "_character_escapes",
  [sym_string] = "string",
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
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
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
  [sym_operand_modifier] = sym_operand_modifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym__character_escapes] = sym__character_escapes,
  [sym_string] = sym_string,
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
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
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
  [sym_operand_modifier] = {
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
  [sym_string] = {
    .visible = true,
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
  [43] = 43,
  [44] = 43,
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
  [61] = 61,
  [62] = 42,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 20,
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
  [82] = 82,
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
  [93] = 20,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [132] = 127,
  [133] = 128,
  [134] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
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
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ';') ADVANCE(110);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(110);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(83);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(102);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '6') ADVANCE(79);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(45);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(46);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(98);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(45);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(46);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(98);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(46);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(98);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(98);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_operand_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__character_escapes);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(44);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\r') ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {(TSStateId)(-1)},
  [133] = {(TSStateId)(-1)},
  [134] = {(TSStateId)(-1)},
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__statement] = STATE(90),
    [sym_directive] = STATE(100),
    [sym_assignment] = STATE(100),
    [sym_instruction] = STATE(100),
    [sym_instruction_prefix] = STATE(130),
    [sym_symbol] = STATE(47),
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
    STATE(47), 1,
      sym_symbol,
    STATE(89), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(100), 3,
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
    STATE(47), 1,
      sym_symbol,
    STATE(124), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(100), 3,
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
    STATE(47), 1,
      sym_symbol,
    STATE(103), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(100), 3,
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
    STATE(47), 1,
      sym_symbol,
    STATE(111), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(100), 3,
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
  [214] = 12,
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
    STATE(6), 1,
      sym_comment,
    STATE(47), 1,
      sym_symbol,
    STATE(122), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(100), 3,
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
  [262] = 16,
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
      sym_string,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(32), 1,
      sym__sub_expression,
    STATE(79), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(30), 2,
      sym_number,
      sym_symbol,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    STATE(81), 3,
      sym_type,
      sym_expression,
      sym_char,
  [317] = 15,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
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
      sym_string,
    ACTIONS(78), 1,
      sym__integer,
    ACTIONS(80), 1,
      sym_register,
    STATE(8), 1,
      sym_comment,
    STATE(56), 1,
      sym__operand,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(120), 1,
      sym__displacement_expression_offset,
    ACTIONS(66), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
    STATE(80), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [369] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym__integer,
    ACTIONS(80), 1,
      sym_register,
    ACTIONS(82), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_comment,
    STATE(51), 1,
      sym__operand,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(120), 1,
      sym__displacement_expression_offset,
    STATE(80), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [424] = 15,
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
      sym_string,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(32), 1,
      sym__sub_expression,
    STATE(49), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(30), 2,
      sym_number,
      sym_symbol,
    STATE(81), 3,
      sym_type,
      sym_expression,
      sym_char,
  [474] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(11), 1,
      sym_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      sym_label,
      sym__eol,
    ACTIONS(86), 12,
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
  [506] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym__integer,
    ACTIONS(80), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(58), 1,
      sym__operand,
    STATE(120), 1,
      sym__displacement_expression_offset,
    STATE(80), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [558] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym__integer,
    ACTIONS(80), 1,
      sym_register,
    STATE(13), 1,
      sym_comment,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(76), 1,
      sym__operand,
    STATE(120), 1,
      sym__displacement_expression_offset,
    STATE(80), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [610] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(14), 1,
      sym_comment,
    ACTIONS(88), 3,
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
  [642] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      sym__float,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym__integer,
    ACTIONS(80), 1,
      sym_register,
    STATE(15), 1,
      sym_comment,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(66), 1,
      sym__operand,
    STATE(120), 1,
      sym__displacement_expression_offset,
    STATE(80), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [694] = 6,
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
    ACTIONS(92), 12,
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
  [726] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_comment,
      aux_sym_expression_repeat1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(96), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [755] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_expression_repeat1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [786] = 11,
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
    STATE(32), 1,
      sym__sub_expression,
    STATE(116), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(22), 2,
      sym_number,
      sym_symbol,
  [822] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [848] = 11,
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
    STATE(21), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(32), 1,
      sym__sub_expression,
    STATE(99), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(22), 2,
      sym_number,
      sym_symbol,
  [884] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(22), 1,
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
  [910] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [936] = 11,
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
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(32), 1,
      sym__sub_expression,
    STATE(97), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(22), 2,
      sym_number,
      sym_symbol,
  [972] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [998] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [1024] = 7,
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
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
  [1052] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      sym__identifier,
    ACTIONS(128), 1,
      sym_string,
    STATE(28), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(70), 3,
      sym_char,
      sym_number,
      sym_symbol,
  [1083] = 9,
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
      sym__sub_expression,
    STATE(29), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(22), 3,
      sym__paren_expression,
      sym_number,
      sym_symbol,
  [1114] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    ACTIONS(112), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1141] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(134), 1,
      sym_operand_modifier,
    STATE(31), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1164] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1189] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(138), 1,
      sym_register,
    STATE(33), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(115), 1,
      sym__displacement_expression_offset,
  [1217] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(140), 1,
      sym_register,
    STATE(34), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1245] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(142), 1,
      sym_register,
    STATE(35), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1273] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(144), 1,
      sym_register,
    STATE(36), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
  [1301] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(146), 1,
      sym_register,
    STATE(37), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(119), 1,
      sym__displacement_expression_offset,
  [1329] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(38), 1,
      sym_comment,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1349] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(117), 1,
      sym__displacement_expression_offset,
  [1377] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    STATE(40), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1402] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(41), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [1423] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_comment_repeat1,
    ACTIONS(157), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1446] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(157), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1469] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(157), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1492] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(165), 2,
      aux_sym_comment_token2,
      sym__eol,
    STATE(45), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1513] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1536] = 7,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(178), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      sym__inline_space,
    STATE(47), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1559] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(48), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [1580] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_directive_repeat1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1603] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    STATE(50), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(126), 1,
      sym__displacement_expression_offset,
  [1628] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1651] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    STATE(52), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(113), 1,
      sym__displacement_expression_offset,
  [1676] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1699] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1720] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(201), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1741] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1764] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1785] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_instruction_repeat1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1808] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    STATE(59), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(119), 1,
      sym__displacement_expression_offset,
  [1833] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1856] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1879] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_STAR_SLASH,
    STATE(45), 1,
      aux_sym_comment_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(157), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1902] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(72), 1,
      aux_sym__operand_symbol_token1,
    ACTIONS(136), 1,
      sym__integer,
    STATE(63), 1,
      sym_comment,
    STATE(88), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
  [1927] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1948] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_directive_repeat1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1971] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_instruction_repeat1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1994] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(67), 1,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2012] = 2,
    STATE(68), 1,
      sym_comment,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
      sym__eol,
  [2024] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(69), 1,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2042] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(70), 1,
      sym_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2060] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(71), 1,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2078] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(72), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2096] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(73), 1,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2114] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(74), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2132] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(75), 1,
      sym_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2150] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(76), 1,
      sym_comment,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2168] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      anon_sym_STAR_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(235), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2188] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(78), 1,
      sym_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2206] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(79), 1,
      sym_comment,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2224] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(80), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2242] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(81), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2260] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(82), 1,
      sym_comment,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2278] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(83), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2296] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
  [2315] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      sym_register,
    STATE(85), 1,
      sym_comment,
  [2334] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(86), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2351] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(253), 1,
      sym__identifier,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      sym_symbol,
  [2370] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(88), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2387] = 6,
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
    STATE(89), 1,
      sym_comment,
  [2406] = 6,
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
    STATE(90), 1,
      sym_comment,
  [2425] = 6,
    ACTIONS(178), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(257), 1,
      sym__inline_space,
    STATE(91), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_assignment_repeat1,
  [2444] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_register,
    STATE(92), 1,
      sym_comment,
  [2463] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      sym__inline_space,
      sym__eol,
  [2478] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(263), 1,
      aux_sym_char_token1,
    ACTIONS(265), 1,
      sym__character_escapes,
    STATE(94), 1,
      sym_comment,
  [2497] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(269), 1,
      sym__inline_space,
    STATE(95), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2514] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [2533] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(97), 1,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2550] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      sym_register,
    STATE(98), 1,
      sym_comment,
  [2569] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(99), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2586] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(100), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2603] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [2622] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_comment,
  [2641] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      sym__eol,
    STATE(103), 1,
      sym_comment,
  [2660] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
  [2679] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      sym_register,
    STATE(105), 1,
      sym_comment,
  [2698] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [2717] = 5,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      sym__inline_space,
    STATE(107), 2,
      sym_comment,
      aux_sym_assignment_repeat1,
  [2734] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      sym__inline_space,
    STATE(108), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2751] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [2770] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [2789] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(289), 1,
      sym__eol,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_comment,
  [2808] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_comment,
  [2827] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [2843] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_comment,
  [2859] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [2875] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
  [2891] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_comment,
  [2907] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [2923] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [2939] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_comment,
  [2955] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [2971] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(289), 1,
      sym__eol,
    STATE(122), 1,
      sym_comment,
  [2987] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [3003] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    STATE(124), 1,
      sym_comment,
  [3019] = 2,
    STATE(125), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3029] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_comment,
  [3045] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3055] = 2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3065] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(342), 1,
      sym__identifier,
    STATE(129), 1,
      sym_comment,
  [3081] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      sym__inline_space,
    STATE(130), 1,
      sym_comment,
  [3094] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      sym__inline_space,
    STATE(131), 1,
      sym_comment,
  [3107] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [3111] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [3115] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 369,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 474,
  [SMALL_STATE(12)] = 506,
  [SMALL_STATE(13)] = 558,
  [SMALL_STATE(14)] = 610,
  [SMALL_STATE(15)] = 642,
  [SMALL_STATE(16)] = 694,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 822,
  [SMALL_STATE(21)] = 848,
  [SMALL_STATE(22)] = 884,
  [SMALL_STATE(23)] = 910,
  [SMALL_STATE(24)] = 936,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 998,
  [SMALL_STATE(27)] = 1024,
  [SMALL_STATE(28)] = 1052,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1114,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1189,
  [SMALL_STATE(34)] = 1217,
  [SMALL_STATE(35)] = 1245,
  [SMALL_STATE(36)] = 1273,
  [SMALL_STATE(37)] = 1301,
  [SMALL_STATE(38)] = 1329,
  [SMALL_STATE(39)] = 1349,
  [SMALL_STATE(40)] = 1377,
  [SMALL_STATE(41)] = 1402,
  [SMALL_STATE(42)] = 1423,
  [SMALL_STATE(43)] = 1446,
  [SMALL_STATE(44)] = 1469,
  [SMALL_STATE(45)] = 1492,
  [SMALL_STATE(46)] = 1513,
  [SMALL_STATE(47)] = 1536,
  [SMALL_STATE(48)] = 1559,
  [SMALL_STATE(49)] = 1580,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1628,
  [SMALL_STATE(52)] = 1651,
  [SMALL_STATE(53)] = 1676,
  [SMALL_STATE(54)] = 1699,
  [SMALL_STATE(55)] = 1720,
  [SMALL_STATE(56)] = 1741,
  [SMALL_STATE(57)] = 1764,
  [SMALL_STATE(58)] = 1785,
  [SMALL_STATE(59)] = 1808,
  [SMALL_STATE(60)] = 1833,
  [SMALL_STATE(61)] = 1856,
  [SMALL_STATE(62)] = 1879,
  [SMALL_STATE(63)] = 1902,
  [SMALL_STATE(64)] = 1927,
  [SMALL_STATE(65)] = 1948,
  [SMALL_STATE(66)] = 1971,
  [SMALL_STATE(67)] = 1994,
  [SMALL_STATE(68)] = 2012,
  [SMALL_STATE(69)] = 2024,
  [SMALL_STATE(70)] = 2042,
  [SMALL_STATE(71)] = 2060,
  [SMALL_STATE(72)] = 2078,
  [SMALL_STATE(73)] = 2096,
  [SMALL_STATE(74)] = 2114,
  [SMALL_STATE(75)] = 2132,
  [SMALL_STATE(76)] = 2150,
  [SMALL_STATE(77)] = 2168,
  [SMALL_STATE(78)] = 2188,
  [SMALL_STATE(79)] = 2206,
  [SMALL_STATE(80)] = 2224,
  [SMALL_STATE(81)] = 2242,
  [SMALL_STATE(82)] = 2260,
  [SMALL_STATE(83)] = 2278,
  [SMALL_STATE(84)] = 2296,
  [SMALL_STATE(85)] = 2315,
  [SMALL_STATE(86)] = 2334,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2370,
  [SMALL_STATE(89)] = 2387,
  [SMALL_STATE(90)] = 2406,
  [SMALL_STATE(91)] = 2425,
  [SMALL_STATE(92)] = 2444,
  [SMALL_STATE(93)] = 2463,
  [SMALL_STATE(94)] = 2478,
  [SMALL_STATE(95)] = 2497,
  [SMALL_STATE(96)] = 2514,
  [SMALL_STATE(97)] = 2533,
  [SMALL_STATE(98)] = 2550,
  [SMALL_STATE(99)] = 2569,
  [SMALL_STATE(100)] = 2586,
  [SMALL_STATE(101)] = 2603,
  [SMALL_STATE(102)] = 2622,
  [SMALL_STATE(103)] = 2641,
  [SMALL_STATE(104)] = 2660,
  [SMALL_STATE(105)] = 2679,
  [SMALL_STATE(106)] = 2698,
  [SMALL_STATE(107)] = 2717,
  [SMALL_STATE(108)] = 2734,
  [SMALL_STATE(109)] = 2751,
  [SMALL_STATE(110)] = 2770,
  [SMALL_STATE(111)] = 2789,
  [SMALL_STATE(112)] = 2808,
  [SMALL_STATE(113)] = 2827,
  [SMALL_STATE(114)] = 2843,
  [SMALL_STATE(115)] = 2859,
  [SMALL_STATE(116)] = 2875,
  [SMALL_STATE(117)] = 2891,
  [SMALL_STATE(118)] = 2907,
  [SMALL_STATE(119)] = 2923,
  [SMALL_STATE(120)] = 2939,
  [SMALL_STATE(121)] = 2955,
  [SMALL_STATE(122)] = 2971,
  [SMALL_STATE(123)] = 2987,
  [SMALL_STATE(124)] = 3003,
  [SMALL_STATE(125)] = 3019,
  [SMALL_STATE(126)] = 3029,
  [SMALL_STATE(127)] = 3045,
  [SMALL_STATE(128)] = 3055,
  [SMALL_STATE(129)] = 3065,
  [SMALL_STATE(130)] = 3081,
  [SMALL_STATE(131)] = 3094,
  [SMALL_STATE(132)] = 3107,
  [SMALL_STATE(133)] = 3111,
  [SMALL_STATE(134)] = 3115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_expression, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sub_expression, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arg, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(13),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(77),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(128),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(43),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(107),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_prefix, 1),
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
