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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
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
  [60] = 44,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 23,
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
  [91] = 23,
  [92] = 92,
  [93] = 93,
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
  [132] = 125,
  [133] = 126,
  [134] = 127,
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
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
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
  [106] = {.lex_state = 19},
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
    [sym_source_file] = STATE(120),
    [sym__statement] = STATE(87),
    [sym_directive] = STATE(102),
    [sym_assignment] = STATE(102),
    [sym_instruction] = STATE(102),
    [sym_instruction_prefix] = STATE(131),
    [sym_symbol] = STATE(53),
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
    STATE(53), 1,
      sym_symbol,
    STATE(90), 1,
      sym__statement,
    STATE(131), 1,
      sym_instruction_prefix,
    STATE(102), 3,
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
    STATE(53), 1,
      sym_symbol,
    STATE(116), 1,
      sym__statement,
    STATE(131), 1,
      sym_instruction_prefix,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(102), 3,
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
    STATE(53), 1,
      sym_symbol,
    STATE(103), 1,
      sym__statement,
    STATE(131), 1,
      sym_instruction_prefix,
    STATE(102), 3,
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
    STATE(53), 1,
      sym_symbol,
    STATE(107), 1,
      sym__statement,
    STATE(131), 1,
      sym_instruction_prefix,
    STATE(102), 3,
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
    STATE(53), 1,
      sym_symbol,
    STATE(123), 1,
      sym__statement,
    STATE(131), 1,
      sym_instruction_prefix,
    STATE(102), 3,
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
    STATE(21), 1,
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
    STATE(86), 3,
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
    STATE(114), 1,
      sym__displacement_expression_offset,
    ACTIONS(66), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
    STATE(83), 4,
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
    STATE(114), 1,
      sym__displacement_expression_offset,
    STATE(83), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [424] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(10), 1,
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
  [456] = 15,
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
    STATE(11), 1,
      sym_comment,
    STATE(21), 1,
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
    STATE(86), 3,
      sym_type,
      sym_expression,
      sym_char,
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
    STATE(63), 1,
      sym__operand,
    STATE(114), 1,
      sym__displacement_expression_offset,
    STATE(83), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [558] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(13), 1,
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
  [590] = 16,
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
    STATE(14), 1,
      sym_comment,
    STATE(57), 1,
      sym__operand_symbol,
    STATE(66), 1,
      sym__operand,
    STATE(114), 1,
      sym__displacement_expression_offset,
    STATE(83), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
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
    STATE(81), 1,
      sym__operand,
    STATE(114), 1,
      sym__displacement_expression_offset,
    STATE(83), 4,
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
  [726] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
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
  [757] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(18), 2,
      sym_comment,
      aux_sym_expression_repeat1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(102), 4,
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
    STATE(21), 1,
      sym__paren_expression,
    STATE(32), 1,
      sym__sub_expression,
    STATE(115), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(26), 2,
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
  [848] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__eol,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [876] = 11,
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
      sym__paren_expression,
    STATE(22), 1,
      sym_comment,
    STATE(32), 1,
      sym__sub_expression,
    STATE(95), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(26), 2,
      sym_number,
      sym_symbol,
  [912] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(23), 1,
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
  [938] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(122), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [964] = 11,
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
      sym__paren_expression,
    STATE(25), 1,
      sym_comment,
    STATE(32), 1,
      sym__sub_expression,
    STATE(98), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(26), 2,
      sym_number,
      sym_symbol,
  [1000] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__eol,
  [1026] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
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
    STATE(24), 1,
      sym__sub_expression,
    STATE(29), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(26), 3,
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
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    ACTIONS(114), 4,
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
    ACTIONS(98), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_expression_repeat1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(96), 4,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1217] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(34), 1,
      sym_comment,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1237] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(35), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1257] = 9,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(36), 1,
      sym_comment,
    STATE(119), 1,
      sym__displacement_expression_offset,
  [1285] = 9,
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
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__operand_symbol,
    STATE(37), 1,
      sym_comment,
    STATE(48), 1,
      sym__displacement_expression_offset,
  [1313] = 9,
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
    ACTIONS(148), 1,
      sym_register,
    STATE(35), 1,
      sym__operand_symbol,
    STATE(38), 1,
      sym_comment,
    STATE(128), 1,
      sym__displacement_expression_offset,
  [1341] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(39), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1361] = 9,
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
    ACTIONS(152), 1,
      sym_register,
    STATE(35), 1,
      sym__operand_symbol,
    STATE(40), 1,
      sym_comment,
    STATE(122), 1,
      sym__displacement_expression_offset,
  [1389] = 9,
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
    ACTIONS(154), 1,
      sym_register,
    STATE(35), 1,
      sym__operand_symbol,
    STATE(41), 1,
      sym_comment,
    STATE(117), 1,
      sym__displacement_expression_offset,
  [1417] = 8,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(42), 1,
      sym_comment,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1442] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_directive_repeat1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1465] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_comment_repeat1,
    ACTIONS(160), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1488] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(164), 2,
      aux_sym_comment_token2,
      sym__eol,
    STATE(45), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1509] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1532] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      anon_sym_STAR_SLASH,
    STATE(47), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(160), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1555] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1576] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_directive_repeat1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1599] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1622] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1645] = 8,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(52), 1,
      sym_comment,
    STATE(124), 1,
      sym__displacement_expression_offset,
  [1670] = 7,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      sym__inline_space,
    STATE(53), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1693] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_comment,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1714] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(197), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1735] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1758] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1779] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(58), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [1800] = 8,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(59), 1,
      sym_comment,
    STATE(121), 1,
      sym__displacement_expression_offset,
  [1825] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_STAR_SLASH,
    STATE(45), 1,
      aux_sym_comment_repeat1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1848] = 8,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym__displacement_expression_offset,
  [1873] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(62), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [1894] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1917] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1938] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_instruction_repeat1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1961] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_instruction_repeat1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1984] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_instruction_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2007] = 8,
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
    STATE(35), 1,
      sym__operand_symbol,
    STATE(68), 1,
      sym_comment,
    STATE(122), 1,
      sym__displacement_expression_offset,
  [2032] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_instruction_repeat1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2055] = 5,
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
  [2073] = 2,
    STATE(71), 1,
      sym_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
      sym__eol,
  [2085] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(72), 1,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2103] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(73), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2121] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(74), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2139] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(75), 1,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2157] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(76), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2175] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(77), 1,
      sym_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2193] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(78), 1,
      sym_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2211] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(79), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2229] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(80), 1,
      sym_comment,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2247] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(81), 1,
      sym_comment,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2265] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      anon_sym_STAR_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(239), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2285] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(83), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2303] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(84), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2321] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(85), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2339] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(86), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2357] = 6,
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
    STATE(87), 1,
      sym_comment,
  [2376] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_comment,
  [2395] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(251), 1,
      aux_sym_char_token1,
    ACTIONS(253), 1,
      sym__character_escapes,
    STATE(89), 1,
      sym_comment,
  [2414] = 6,
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
    STATE(90), 1,
      sym_comment,
  [2433] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym__inline_space,
      sym__eol,
  [2448] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      sym_register,
    STATE(92), 1,
      sym_comment,
  [2467] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_comment,
  [2486] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      sym__inline_space,
    STATE(94), 1,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2503] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(95), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2520] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [2539] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      sym_register,
    STATE(97), 1,
      sym_comment,
  [2558] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(98), 1,
      sym_comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2575] = 5,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(277), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym__inline_space,
    STATE(99), 2,
      sym_comment,
      aux_sym_assignment_repeat1,
  [2592] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      sym_register,
    STATE(100), 1,
      sym_comment,
  [2611] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [2630] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(102), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2647] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      sym__eol,
    STATE(103), 1,
      sym_comment,
  [2666] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
  [2685] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      sym_register,
    STATE(105), 1,
      sym_comment,
  [2704] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(302), 1,
      sym__identifier,
    STATE(94), 1,
      sym_symbol,
    STATE(106), 1,
      sym_comment,
  [2723] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_comment,
  [2742] = 6,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      anon_sym_EQ,
    ACTIONS(308), 1,
      sym__inline_space,
    STATE(99), 1,
      aux_sym_assignment_repeat1,
    STATE(108), 1,
      sym_comment,
  [2761] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [2780] = 6,
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
    STATE(110), 1,
      sym_comment,
  [2799] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      sym__inline_space,
    STATE(111), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2816] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_comment,
  [2835] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [2854] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [2870] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [2886] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    STATE(116), 1,
      sym_comment,
  [2902] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [2918] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [2934] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [2950] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_comment,
  [2966] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [2982] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [2998] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(296), 1,
      sym__eol,
    STATE(123), 1,
      sym_comment,
  [3014] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [3030] = 2,
    STATE(125), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3040] = 2,
    STATE(126), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3050] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3060] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_comment,
  [3076] = 5,
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
  [3092] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      sym__inline_space,
    STATE(130), 1,
      sym_comment,
  [3105] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      sym__inline_space,
    STATE(131), 1,
      sym_comment,
  [3118] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [3122] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [3126] = 1,
    ACTIONS(340), 1,
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
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 506,
  [SMALL_STATE(13)] = 558,
  [SMALL_STATE(14)] = 590,
  [SMALL_STATE(15)] = 642,
  [SMALL_STATE(16)] = 694,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 757,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 822,
  [SMALL_STATE(21)] = 848,
  [SMALL_STATE(22)] = 876,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 938,
  [SMALL_STATE(25)] = 964,
  [SMALL_STATE(26)] = 1000,
  [SMALL_STATE(27)] = 1026,
  [SMALL_STATE(28)] = 1052,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1114,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1189,
  [SMALL_STATE(34)] = 1217,
  [SMALL_STATE(35)] = 1237,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1313,
  [SMALL_STATE(39)] = 1341,
  [SMALL_STATE(40)] = 1361,
  [SMALL_STATE(41)] = 1389,
  [SMALL_STATE(42)] = 1417,
  [SMALL_STATE(43)] = 1442,
  [SMALL_STATE(44)] = 1465,
  [SMALL_STATE(45)] = 1488,
  [SMALL_STATE(46)] = 1509,
  [SMALL_STATE(47)] = 1532,
  [SMALL_STATE(48)] = 1555,
  [SMALL_STATE(49)] = 1576,
  [SMALL_STATE(50)] = 1599,
  [SMALL_STATE(51)] = 1622,
  [SMALL_STATE(52)] = 1645,
  [SMALL_STATE(53)] = 1670,
  [SMALL_STATE(54)] = 1693,
  [SMALL_STATE(55)] = 1714,
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1758,
  [SMALL_STATE(58)] = 1779,
  [SMALL_STATE(59)] = 1800,
  [SMALL_STATE(60)] = 1825,
  [SMALL_STATE(61)] = 1848,
  [SMALL_STATE(62)] = 1873,
  [SMALL_STATE(63)] = 1894,
  [SMALL_STATE(64)] = 1917,
  [SMALL_STATE(65)] = 1938,
  [SMALL_STATE(66)] = 1961,
  [SMALL_STATE(67)] = 1984,
  [SMALL_STATE(68)] = 2007,
  [SMALL_STATE(69)] = 2032,
  [SMALL_STATE(70)] = 2055,
  [SMALL_STATE(71)] = 2073,
  [SMALL_STATE(72)] = 2085,
  [SMALL_STATE(73)] = 2103,
  [SMALL_STATE(74)] = 2121,
  [SMALL_STATE(75)] = 2139,
  [SMALL_STATE(76)] = 2157,
  [SMALL_STATE(77)] = 2175,
  [SMALL_STATE(78)] = 2193,
  [SMALL_STATE(79)] = 2211,
  [SMALL_STATE(80)] = 2229,
  [SMALL_STATE(81)] = 2247,
  [SMALL_STATE(82)] = 2265,
  [SMALL_STATE(83)] = 2285,
  [SMALL_STATE(84)] = 2303,
  [SMALL_STATE(85)] = 2321,
  [SMALL_STATE(86)] = 2339,
  [SMALL_STATE(87)] = 2357,
  [SMALL_STATE(88)] = 2376,
  [SMALL_STATE(89)] = 2395,
  [SMALL_STATE(90)] = 2414,
  [SMALL_STATE(91)] = 2433,
  [SMALL_STATE(92)] = 2448,
  [SMALL_STATE(93)] = 2467,
  [SMALL_STATE(94)] = 2486,
  [SMALL_STATE(95)] = 2503,
  [SMALL_STATE(96)] = 2520,
  [SMALL_STATE(97)] = 2539,
  [SMALL_STATE(98)] = 2558,
  [SMALL_STATE(99)] = 2575,
  [SMALL_STATE(100)] = 2592,
  [SMALL_STATE(101)] = 2611,
  [SMALL_STATE(102)] = 2630,
  [SMALL_STATE(103)] = 2647,
  [SMALL_STATE(104)] = 2666,
  [SMALL_STATE(105)] = 2685,
  [SMALL_STATE(106)] = 2704,
  [SMALL_STATE(107)] = 2723,
  [SMALL_STATE(108)] = 2742,
  [SMALL_STATE(109)] = 2761,
  [SMALL_STATE(110)] = 2780,
  [SMALL_STATE(111)] = 2799,
  [SMALL_STATE(112)] = 2816,
  [SMALL_STATE(113)] = 2835,
  [SMALL_STATE(114)] = 2854,
  [SMALL_STATE(115)] = 2870,
  [SMALL_STATE(116)] = 2886,
  [SMALL_STATE(117)] = 2902,
  [SMALL_STATE(118)] = 2918,
  [SMALL_STATE(119)] = 2934,
  [SMALL_STATE(120)] = 2950,
  [SMALL_STATE(121)] = 2966,
  [SMALL_STATE(122)] = 2982,
  [SMALL_STATE(123)] = 2998,
  [SMALL_STATE(124)] = 3014,
  [SMALL_STATE(125)] = 3030,
  [SMALL_STATE(126)] = 3040,
  [SMALL_STATE(127)] = 3050,
  [SMALL_STATE(128)] = 3060,
  [SMALL_STATE(129)] = 3076,
  [SMALL_STATE(130)] = 3092,
  [SMALL_STATE(131)] = 3105,
  [SMALL_STATE(132)] = 3118,
  [SMALL_STATE(133)] = 3122,
  [SMALL_STATE(134)] = 3126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_expression, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sub_expression, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arg, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(82),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(125),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(46),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(99),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_prefix, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
