#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  anon_sym_DOT = 2,
  sym_instruction_name = 3,
  anon_sym_COLON = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_char_token1 = 9,
  sym__character_escapes = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym__string_escapes = 13,
  sym__integer = 14,
  sym__float = 15,
  sym__identifier = 16,
  sym_register = 17,
  aux_sym_comment_token1 = 18,
  anon_sym_SLASH_STAR = 19,
  aux_sym_comment_token2 = 20,
  anon_sym_STAR_SLASH = 21,
  sym__inline_space = 22,
  sym__eol = 23,
  sym_source_file = 24,
  sym__statement = 25,
  sym_directive = 26,
  sym_directive_name = 27,
  sym_directive_arg = 28,
  sym_instruction = 29,
  sym__operand = 30,
  sym__displacement_expression = 31,
  sym__displacement_expression_offset = 32,
  sym_constant = 33,
  sym_char = 34,
  sym_string = 35,
  sym_number = 36,
  sym_symbol = 37,
  sym_comment = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_directive_repeat1 = 40,
  aux_sym_instruction_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  aux_sym_comment_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [sym_instruction_name] = "instruction_name",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_directive_name] = "directive_name",
  [sym_directive_arg] = "directive_arg",
  [sym_instruction] = "instruction",
  [sym__operand] = "_operand",
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
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_instruction_name] = sym_instruction_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_directive_name] = sym_directive_name,
  [sym_directive_arg] = sym_directive_arg,
  [sym_instruction] = sym_instruction,
  [sym__operand] = sym__operand,
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
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_instruction_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_number,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(39);
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
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_instruction_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__character_escapes);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__string_escapes);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\r') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {(TSStateId)(-1)},
  [93] = {(TSStateId)(-1)},
  [94] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_instruction_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(81),
    [sym__statement] = STATE(64),
    [sym_directive] = STATE(62),
    [sym_directive_name] = STATE(89),
    [sym_instruction] = STATE(62),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_instruction_name] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym__inline_space] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__integer,
    ACTIONS(31), 1,
      sym__float,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      sym_register,
    STATE(2), 1,
      sym_comment,
    STATE(32), 1,
      sym__operand,
    STATE(35), 1,
      sym_symbol,
    STATE(86), 1,
      sym__displacement_expression_offset,
    STATE(53), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [53] = 16,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__integer,
    ACTIONS(31), 1,
      sym__float,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      sym_register,
    STATE(3), 1,
      sym_comment,
    STATE(35), 1,
      sym_symbol,
    STATE(56), 1,
      sym__operand,
    STATE(86), 1,
      sym__displacement_expression_offset,
    STATE(53), 5,
      sym__displacement_expression,
      sym_constant,
      sym_char,
      sym_string,
      sym_number,
  [106] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(4), 1,
      sym_comment,
    STATE(55), 1,
      sym_directive_arg,
    ACTIONS(31), 2,
      sym__integer,
      sym__float,
    STATE(41), 4,
      sym_char,
      sym_string,
      sym_number,
      sym_symbol,
  [141] = 10,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(36), 1,
      sym_directive_arg,
    ACTIONS(31), 2,
      sym__integer,
      sym__float,
    STATE(41), 4,
      sym_char,
      sym_string,
      sym_number,
      sym_symbol,
  [176] = 12,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      sym_instruction_name,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(19), 1,
      sym__eol,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(71), 1,
      sym__statement,
    STATE(89), 1,
      sym_directive_name,
    STATE(62), 2,
      sym_directive,
      sym_instruction,
  [214] = 11,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      sym_instruction_name,
    ACTIONS(49), 1,
      sym__eol,
    STATE(77), 1,
      sym__statement,
    STATE(89), 1,
      sym_directive_name,
    STATE(7), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(62), 2,
      sym_directive,
      sym_instruction,
  [250] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    ACTIONS(52), 2,
      sym__integer,
      sym__float,
    STATE(44), 2,
      sym_char,
      sym_string,
  [280] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(58), 1,
      sym_register,
    STATE(9), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(82), 1,
      sym__displacement_expression_offset,
  [308] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(60), 1,
      sym_register,
    STATE(10), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(79), 1,
      sym__displacement_expression_offset,
  [336] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(62), 1,
      sym_register,
    STATE(11), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(80), 1,
      sym__displacement_expression_offset,
  [364] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(64), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(83), 1,
      sym__displacement_expression_offset,
  [392] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(88), 1,
      sym__displacement_expression_offset,
  [420] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    ACTIONS(68), 1,
      sym_register,
    STATE(14), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(84), 1,
      sym__displacement_expression_offset,
  [448] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(15), 1,
      sym_comment,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__eol,
  [468] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(72), 2,
      aux_sym_comment_token2,
      sym__eol,
    STATE(16), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [489] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_directive_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__eol,
  [512] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    STATE(18), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(87), 1,
      sym__displacement_expression_offset,
  [537] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    STATE(19), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(85), 1,
      sym__displacement_expression_offset,
  [562] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_STAR_SLASH,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_comment_repeat1,
    ACTIONS(81), 2,
      aux_sym_comment_token2,
      sym__eol,
  [585] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_STAR_SLASH,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(81), 2,
      aux_sym_comment_token2,
      sym__eol,
  [608] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    STATE(22), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(82), 1,
      sym__displacement_expression_offset,
  [633] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(23), 1,
      sym_comment,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_instruction_name,
      sym__eol,
  [652] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    STATE(24), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(79), 1,
      sym__displacement_expression_offset,
  [677] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(56), 1,
      sym__integer,
    STATE(25), 1,
      sym_comment,
    STATE(60), 1,
      sym_symbol,
    STATE(80), 1,
      sym__displacement_expression_offset,
  [702] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(26), 2,
      sym_comment,
      aux_sym_directive_repeat1,
  [723] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(27), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [744] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_token1,
    ACTIONS(101), 1,
      sym__string_escapes,
    STATE(28), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [769] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [790] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_string_token1,
    ACTIONS(112), 1,
      sym__string_escapes,
    STATE(30), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [813] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(117), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [834] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__eol,
  [857] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(33), 1,
      sym_comment,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_instruction_name,
      sym__eol,
  [876] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(99), 1,
      aux_sym_string_token1,
    ACTIONS(101), 1,
      sym__string_escapes,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat1,
    STATE(34), 1,
      sym_comment,
  [901] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [922] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_directive_repeat1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__eol,
  [945] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [966] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_instruction_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__eol,
  [989] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(39), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1007] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(40), 1,
      sym_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1025] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(41), 1,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1043] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(42), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1061] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(43), 1,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1079] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(44), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1097] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(45), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1115] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(153), 1,
      aux_sym_string_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DQUOTE,
      sym__string_escapes,
  [1135] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      anon_sym_STAR_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(155), 2,
      aux_sym_comment_token2,
      sym__eol,
  [1155] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(48), 1,
      sym_comment,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1173] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(49), 1,
      sym_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1191] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(50), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1209] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(51), 1,
      sym_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1227] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(52), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1245] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(53), 1,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1263] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(54), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1281] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(55), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1299] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(56), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1317] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(57), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
  [1335] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__inline_space,
    ACTIONS(171), 1,
      aux_sym_char_token1,
    ACTIONS(173), 1,
      sym__character_escapes,
    STATE(58), 1,
      sym_comment,
  [1354] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_comment,
  [1373] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(60), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1390] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_comment,
  [1409] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(62), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1426] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym_register,
    STATE(63), 1,
      sym_comment,
  [1445] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym__eol,
    STATE(64), 1,
      sym_comment,
  [1464] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_comment,
  [1483] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym_register,
    STATE(66), 1,
      sym_comment,
  [1502] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_register,
    STATE(67), 1,
      sym_comment,
  [1521] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comment,
  [1540] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_comment,
  [1559] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_comment,
  [1578] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(189), 1,
      sym__eol,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_comment,
  [1597] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_comment,
  [1616] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      sym_register,
    STATE(73), 1,
      sym_comment,
  [1635] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    STATE(74), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1652] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      sym_comment,
  [1671] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_comment,
  [1690] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(189), 1,
      sym__eol,
    STATE(77), 1,
      sym_comment,
  [1706] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(221), 1,
      sym__identifier,
    STATE(78), 1,
      sym_comment,
  [1722] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_comment,
  [1738] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_comment,
  [1754] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_comment,
  [1770] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
  [1786] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
  [1802] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
  [1818] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_comment,
  [1834] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
  [1850] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_comment,
  [1866] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_comment,
  [1882] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(233), 1,
      sym__inline_space,
    STATE(89), 1,
      sym_comment,
  [1895] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(235), 1,
      sym__inline_space,
    STATE(90), 1,
      sym_comment,
  [1908] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      sym__inline_space,
    STATE(91), 1,
      sym_comment,
  [1921] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [1925] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1929] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 608,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 652,
  [SMALL_STATE(25)] = 677,
  [SMALL_STATE(26)] = 702,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 769,
  [SMALL_STATE(30)] = 790,
  [SMALL_STATE(31)] = 813,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 876,
  [SMALL_STATE(35)] = 901,
  [SMALL_STATE(36)] = 922,
  [SMALL_STATE(37)] = 945,
  [SMALL_STATE(38)] = 966,
  [SMALL_STATE(39)] = 989,
  [SMALL_STATE(40)] = 1007,
  [SMALL_STATE(41)] = 1025,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1061,
  [SMALL_STATE(44)] = 1079,
  [SMALL_STATE(45)] = 1097,
  [SMALL_STATE(46)] = 1115,
  [SMALL_STATE(47)] = 1135,
  [SMALL_STATE(48)] = 1155,
  [SMALL_STATE(49)] = 1173,
  [SMALL_STATE(50)] = 1191,
  [SMALL_STATE(51)] = 1209,
  [SMALL_STATE(52)] = 1227,
  [SMALL_STATE(53)] = 1245,
  [SMALL_STATE(54)] = 1263,
  [SMALL_STATE(55)] = 1281,
  [SMALL_STATE(56)] = 1299,
  [SMALL_STATE(57)] = 1317,
  [SMALL_STATE(58)] = 1335,
  [SMALL_STATE(59)] = 1354,
  [SMALL_STATE(60)] = 1373,
  [SMALL_STATE(61)] = 1390,
  [SMALL_STATE(62)] = 1409,
  [SMALL_STATE(63)] = 1426,
  [SMALL_STATE(64)] = 1445,
  [SMALL_STATE(65)] = 1464,
  [SMALL_STATE(66)] = 1483,
  [SMALL_STATE(67)] = 1502,
  [SMALL_STATE(68)] = 1521,
  [SMALL_STATE(69)] = 1540,
  [SMALL_STATE(70)] = 1559,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1597,
  [SMALL_STATE(73)] = 1616,
  [SMALL_STATE(74)] = 1635,
  [SMALL_STATE(75)] = 1652,
  [SMALL_STATE(76)] = 1671,
  [SMALL_STATE(77)] = 1690,
  [SMALL_STATE(78)] = 1706,
  [SMALL_STATE(79)] = 1722,
  [SMALL_STATE(80)] = 1738,
  [SMALL_STATE(81)] = 1754,
  [SMALL_STATE(82)] = 1770,
  [SMALL_STATE(83)] = 1786,
  [SMALL_STATE(84)] = 1802,
  [SMALL_STATE(85)] = 1818,
  [SMALL_STATE(86)] = 1834,
  [SMALL_STATE(87)] = 1850,
  [SMALL_STATE(88)] = 1866,
  [SMALL_STATE(89)] = 1882,
  [SMALL_STATE(90)] = 1895,
  [SMALL_STATE(91)] = 1908,
  [SMALL_STATE(92)] = 1921,
  [SMALL_STATE(93)] = 1925,
  [SMALL_STATE(94)] = 1929,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression_offset, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_arg, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 9),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__displacement_expression, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
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
