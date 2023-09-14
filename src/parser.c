#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 39
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
  sym_string = 28,
  sym__integer = 29,
  sym__float = 30,
  sym__identifier = 31,
  sym_register = 32,
  aux_sym_comment_token1 = 33,
  anon_sym_SLASH_STAR = 34,
  aux_sym_comment_token2 = 35,
  anon_sym_STAR_SLASH = 36,
  sym__inline_space = 37,
  sym__eol = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym_directive = 41,
  sym__directive_arg = 42,
  sym_type = 43,
  sym_assignment = 44,
  sym_expression = 45,
  sym__paren_expression = 46,
  sym__sub_expression = 47,
  sym_instruction = 48,
  sym_instruction_prefix = 49,
  sym__operand = 50,
  sym__operand_symbol = 51,
  sym__displacement_expression = 52,
  sym__displacement_expression_offset = 53,
  sym_constant = 54,
  sym_char = 55,
  sym_number = 56,
  sym_symbol = 57,
  sym_comment = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_directive_repeat1 = 60,
  aux_sym_assignment_repeat1 = 61,
  aux_sym_expression_repeat1 = 62,
  aux_sym_instruction_repeat1 = 63,
  aux_sym_comment_repeat1 = 64,
  alias_sym_instruction_name = 65,
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 42,
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
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 19,
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
  [93] = 19,
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
  [131] = 127,
  [132] = 124,
  [133] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(100);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(45);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(96);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(45);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w')) ADVANCE(96);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(45);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(96);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(96);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__operand_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__character_escapes);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '3') ADVANCE(75);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(76);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4') ADVANCE(43);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\r') ADVANCE(108);
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
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
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
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 19},
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
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {(TSStateId)(-1)},
  [132] = {(TSStateId)(-1)},
  [133] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(113),
    [sym__statement] = STATE(101),
    [sym_directive] = STATE(106),
    [sym_assignment] = STATE(106),
    [sym_instruction] = STATE(106),
    [sym_instruction_prefix] = STATE(130),
    [sym_symbol] = STATE(58),
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
    STATE(58), 1,
      sym_symbol,
    STATE(97), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(106), 3,
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
    STATE(58), 1,
      sym_symbol,
    STATE(126), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(106), 3,
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
    STATE(58), 1,
      sym_symbol,
    STATE(105), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(106), 3,
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
    STATE(58), 1,
      sym_symbol,
    STATE(108), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(106), 3,
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
    STATE(58), 1,
      sym_symbol,
    STATE(117), 1,
      sym__statement,
    STATE(130), 1,
      sym_instruction_prefix,
    STATE(106), 3,
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
    STATE(31), 1,
      sym__sub_expression,
    STATE(78), 1,
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
    STATE(66), 3,
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
    STATE(50), 1,
      sym__operand,
    STATE(51), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
    ACTIONS(66), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
    STATE(81), 4,
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
    STATE(40), 1,
      sym__operand,
    STATE(51), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
    STATE(81), 4,
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
    ACTIONS(29), 3,
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
  [456] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(11), 1,
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
  [488] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(12), 1,
      sym_comment,
    ACTIONS(90), 3,
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
  [520] = 16,
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
    STATE(51), 1,
      sym__operand_symbol,
    STATE(56), 1,
      sym__operand,
    STATE(123), 1,
      sym__displacement_expression_offset,
    STATE(81), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [572] = 15,
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
    STATE(14), 1,
      sym_comment,
    STATE(27), 1,
      sym__paren_expression,
    STATE(31), 1,
      sym__sub_expression,
    STATE(41), 1,
      sym__directive_arg,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(30), 2,
      sym_number,
      sym_symbol,
    STATE(66), 3,
      sym_type,
      sym_expression,
      sym_char,
  [622] = 16,
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
    STATE(51), 1,
      sym__operand_symbol,
    STATE(67), 1,
      sym__operand,
    STATE(123), 1,
      sym__displacement_expression_offset,
    STATE(81), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
  [674] = 16,
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
    STATE(16), 1,
      sym_comment,
    STATE(46), 1,
      sym__operand,
    STATE(51), 1,
      sym__operand_symbol,
    STATE(123), 1,
      sym__displacement_expression_offset,
    STATE(81), 4,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_number,
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
  [786] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    STATE(19), 1,
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
  [812] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(20), 1,
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
  [838] = 11,
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
    STATE(31), 1,
      sym__sub_expression,
    STATE(85), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(25), 2,
      sym_number,
      sym_symbol,
  [874] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(22), 1,
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
  [900] = 11,
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
    STATE(96), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(25), 2,
      sym_number,
      sym_symbol,
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
    STATE(31), 1,
      sym__sub_expression,
    STATE(120), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(25), 2,
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
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(118), 4,
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
    STATE(69), 3,
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
    STATE(20), 1,
      sym__sub_expression,
    STATE(29), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym__integer,
      sym__float,
    STATE(25), 3,
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
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
    ACTIONS(118), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1141] = 7,
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
    STATE(31), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1166] = 9,
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
    STATE(89), 1,
      sym__operand_symbol,
    STATE(122), 1,
      sym__displacement_expression_offset,
  [1194] = 9,
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
    STATE(89), 1,
      sym__operand_symbol,
    STATE(114), 1,
      sym__displacement_expression_offset,
  [1222] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(34), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [1242] = 9,
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
      sym_register,
    STATE(35), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(116), 1,
      sym__displacement_expression_offset,
  [1270] = 9,
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
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(115), 1,
      sym__displacement_expression_offset,
  [1298] = 9,
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
    STATE(89), 1,
      sym__operand_symbol,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1326] = 9,
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
    STATE(89), 1,
      sym__operand_symbol,
    STATE(119), 1,
      sym__displacement_expression_offset,
  [1354] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1377] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1400] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_directive_repeat1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1423] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1446] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1469] = 6,
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
    STATE(44), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1490] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(45), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [1511] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_instruction_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1534] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_instruction_repeat1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1557] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1578] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1599] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1622] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1643] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(52), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [1664] = 8,
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
    STATE(53), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(116), 1,
      sym__displacement_expression_offset,
  [1689] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1712] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_instruction_repeat1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1735] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_instruction_repeat1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1758] = 8,
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
    STATE(57), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(122), 1,
      sym__displacement_expression_offset,
  [1783] = 7,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(199), 1,
      aux_sym_comment_token1,
    ACTIONS(201), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      sym__inline_space,
    STATE(58), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1806] = 8,
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
    STATE(59), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(118), 1,
      sym__displacement_expression_offset,
  [1831] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1852] = 8,
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
    STATE(61), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(112), 1,
      sym__displacement_expression_offset,
  [1877] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_directive_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1900] = 8,
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
    STATE(63), 1,
      sym_comment,
    STATE(89), 1,
      sym__operand_symbol,
    STATE(125), 1,
      sym__displacement_expression_offset,
  [1925] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1948] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      anon_sym_STAR_SLASH,
    STATE(54), 1,
      aux_sym_comment_repeat1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1971] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(66), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1989] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(67), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2007] = 2,
    STATE(68), 1,
      sym_comment,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
      sym__eol,
  [2019] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(69), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2037] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(70), 1,
      sym_comment,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2055] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(71), 1,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2073] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(72), 1,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2091] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(73), 1,
      sym_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2109] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(74), 1,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2127] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(75), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2145] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(231), 1,
      anon_sym_STAR_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(229), 2,
      aux_sym_comment_token2,
      sym__eol,
  [2165] = 5,
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
  [2183] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(78), 1,
      sym_comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2201] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(79), 1,
      sym_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2219] = 5,
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
  [2237] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(81), 1,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2255] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(82), 1,
      sym_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [2273] = 6,
    ACTIONS(199), 1,
      aux_sym_comment_token1,
    ACTIONS(201), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(243), 1,
      sym__inline_space,
    STATE(83), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_assignment_repeat1,
  [2292] = 6,
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
  [2311] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(85), 1,
      sym_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2328] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      sym__inline_space,
    STATE(86), 1,
      sym_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2345] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(87), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2362] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_comment,
  [2381] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(89), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2398] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      sym__inline_space,
    STATE(90), 1,
      sym_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2415] = 6,
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
    STATE(91), 1,
      sym_comment,
  [2434] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      sym_register,
    STATE(92), 1,
      sym_comment,
  [2453] = 4,
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
  [2468] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      sym_register,
    STATE(94), 1,
      sym_comment,
  [2487] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_comment,
  [2506] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(96), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2523] = 6,
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
    STATE(97), 1,
      sym_comment,
  [2542] = 6,
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
  [2561] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_comment,
  [2580] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [2599] = 6,
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
    STATE(101), 1,
      sym_comment,
  [2618] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(287), 1,
      sym__identifier,
    STATE(86), 1,
      sym_symbol,
    STATE(102), 1,
      sym_comment,
  [2637] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_comment,
  [2656] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      sym_register,
    STATE(104), 1,
      sym_comment,
  [2675] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym__eol,
    STATE(105), 1,
      sym_comment,
  [2694] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    STATE(106), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2711] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
  [2730] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(293), 1,
      sym__eol,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_comment,
  [2749] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [2768] = 5,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      sym__inline_space,
    STATE(110), 2,
      sym_comment,
      aux_sym_assignment_repeat1,
  [2785] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      sym_comment,
  [2804] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
  [2820] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_comment,
  [2836] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [2852] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_comment,
  [2868] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
  [2884] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(293), 1,
      sym__eol,
    STATE(117), 1,
      sym_comment,
  [2900] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [2916] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [2932] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [2948] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(328), 1,
      sym__identifier,
    STATE(121), 1,
      sym_comment,
  [2964] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [2980] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
  [2996] = 2,
    STATE(124), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3006] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [3022] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__inline_space,
    ACTIONS(48), 1,
      sym__eol,
    STATE(126), 1,
      sym_comment,
  [3038] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3048] = 2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_EQ,
      aux_sym_comment_token1,
      anon_sym_SLASH_STAR,
      sym__inline_space,
  [3058] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      sym__inline_space,
    STATE(129), 1,
      sym_comment,
  [3071] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(342), 1,
      sym__inline_space,
    STATE(130), 1,
      sym_comment,
  [3084] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [3088] = 1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
  [3092] = 1,
    ACTIONS(338), 1,
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
  [SMALL_STATE(12)] = 488,
  [SMALL_STATE(13)] = 520,
  [SMALL_STATE(14)] = 572,
  [SMALL_STATE(15)] = 622,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 757,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 812,
  [SMALL_STATE(21)] = 838,
  [SMALL_STATE(22)] = 874,
  [SMALL_STATE(23)] = 900,
  [SMALL_STATE(24)] = 936,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 998,
  [SMALL_STATE(27)] = 1024,
  [SMALL_STATE(28)] = 1052,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1114,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1166,
  [SMALL_STATE(33)] = 1194,
  [SMALL_STATE(34)] = 1222,
  [SMALL_STATE(35)] = 1242,
  [SMALL_STATE(36)] = 1270,
  [SMALL_STATE(37)] = 1298,
  [SMALL_STATE(38)] = 1326,
  [SMALL_STATE(39)] = 1354,
  [SMALL_STATE(40)] = 1377,
  [SMALL_STATE(41)] = 1400,
  [SMALL_STATE(42)] = 1423,
  [SMALL_STATE(43)] = 1446,
  [SMALL_STATE(44)] = 1469,
  [SMALL_STATE(45)] = 1490,
  [SMALL_STATE(46)] = 1511,
  [SMALL_STATE(47)] = 1534,
  [SMALL_STATE(48)] = 1557,
  [SMALL_STATE(49)] = 1578,
  [SMALL_STATE(50)] = 1599,
  [SMALL_STATE(51)] = 1622,
  [SMALL_STATE(52)] = 1643,
  [SMALL_STATE(53)] = 1664,
  [SMALL_STATE(54)] = 1689,
  [SMALL_STATE(55)] = 1712,
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1758,
  [SMALL_STATE(58)] = 1783,
  [SMALL_STATE(59)] = 1806,
  [SMALL_STATE(60)] = 1831,
  [SMALL_STATE(61)] = 1852,
  [SMALL_STATE(62)] = 1877,
  [SMALL_STATE(63)] = 1900,
  [SMALL_STATE(64)] = 1925,
  [SMALL_STATE(65)] = 1948,
  [SMALL_STATE(66)] = 1971,
  [SMALL_STATE(67)] = 1989,
  [SMALL_STATE(68)] = 2007,
  [SMALL_STATE(69)] = 2019,
  [SMALL_STATE(70)] = 2037,
  [SMALL_STATE(71)] = 2055,
  [SMALL_STATE(72)] = 2073,
  [SMALL_STATE(73)] = 2091,
  [SMALL_STATE(74)] = 2109,
  [SMALL_STATE(75)] = 2127,
  [SMALL_STATE(76)] = 2145,
  [SMALL_STATE(77)] = 2165,
  [SMALL_STATE(78)] = 2183,
  [SMALL_STATE(79)] = 2201,
  [SMALL_STATE(80)] = 2219,
  [SMALL_STATE(81)] = 2237,
  [SMALL_STATE(82)] = 2255,
  [SMALL_STATE(83)] = 2273,
  [SMALL_STATE(84)] = 2292,
  [SMALL_STATE(85)] = 2311,
  [SMALL_STATE(86)] = 2328,
  [SMALL_STATE(87)] = 2345,
  [SMALL_STATE(88)] = 2362,
  [SMALL_STATE(89)] = 2381,
  [SMALL_STATE(90)] = 2398,
  [SMALL_STATE(91)] = 2415,
  [SMALL_STATE(92)] = 2434,
  [SMALL_STATE(93)] = 2453,
  [SMALL_STATE(94)] = 2468,
  [SMALL_STATE(95)] = 2487,
  [SMALL_STATE(96)] = 2506,
  [SMALL_STATE(97)] = 2523,
  [SMALL_STATE(98)] = 2542,
  [SMALL_STATE(99)] = 2561,
  [SMALL_STATE(100)] = 2580,
  [SMALL_STATE(101)] = 2599,
  [SMALL_STATE(102)] = 2618,
  [SMALL_STATE(103)] = 2637,
  [SMALL_STATE(104)] = 2656,
  [SMALL_STATE(105)] = 2675,
  [SMALL_STATE(106)] = 2694,
  [SMALL_STATE(107)] = 2711,
  [SMALL_STATE(108)] = 2730,
  [SMALL_STATE(109)] = 2749,
  [SMALL_STATE(110)] = 2768,
  [SMALL_STATE(111)] = 2785,
  [SMALL_STATE(112)] = 2804,
  [SMALL_STATE(113)] = 2820,
  [SMALL_STATE(114)] = 2836,
  [SMALL_STATE(115)] = 2852,
  [SMALL_STATE(116)] = 2868,
  [SMALL_STATE(117)] = 2884,
  [SMALL_STATE(118)] = 2900,
  [SMALL_STATE(119)] = 2916,
  [SMALL_STATE(120)] = 2932,
  [SMALL_STATE(121)] = 2948,
  [SMALL_STATE(122)] = 2964,
  [SMALL_STATE(123)] = 2980,
  [SMALL_STATE(124)] = 2996,
  [SMALL_STATE(125)] = 3006,
  [SMALL_STATE(126)] = 3022,
  [SMALL_STATE(127)] = 3038,
  [SMALL_STATE(128)] = 3048,
  [SMALL_STATE(129)] = 3058,
  [SMALL_STATE(130)] = 3071,
  [SMALL_STATE(131)] = 3084,
  [SMALL_STATE(132)] = 3088,
  [SMALL_STATE(133)] = 3092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sub_expression, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arg, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_symbol, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(76),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(127),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(64),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(110),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_prefix, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
