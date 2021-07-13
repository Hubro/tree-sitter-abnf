#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_rulename = 1,
  anon_sym_EQ = 2,
  anon_sym_EQ_SLASH = 3,
  sym_comment = 4,
  anon_sym_SLASH = 5,
  anon_sym_STAR = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_PERCENTi = 11,
  anon_sym_PERCENTs = 12,
  aux_sym_quoted_string_token1 = 13,
  anon_sym_PERCENT = 14,
  anon_sym_b = 15,
  anon_sym_DOT = 16,
  anon_sym_DASH = 17,
  anon_sym_d = 18,
  anon_sym_x = 19,
  anon_sym_LT = 20,
  aux_sym_prose_val_token1 = 21,
  anon_sym_GT = 22,
  anon_sym_ALPHA = 23,
  anon_sym_BIT = 24,
  anon_sym_CHAR = 25,
  anon_sym_CR = 26,
  anon_sym_CRLF = 27,
  anon_sym_CTL = 28,
  anon_sym_DIGIT = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_HEXDIG = 31,
  anon_sym_HTAB = 32,
  anon_sym_LF = 33,
  anon_sym_LWSP = 34,
  anon_sym_OCTET = 35,
  anon_sym_SP = 36,
  anon_sym_VCHAR = 37,
  anon_sym_WSP = 38,
  sym_ALPHA = 39,
  anon_sym_0 = 40,
  anon_sym_1 = 41,
  sym_DIGIT = 42,
  sym__CR = 43,
  sym__DQUOTE = 44,
  sym_HEXDIG = 45,
  sym__HTAB = 46,
  sym__LF = 47,
  sym__SP = 48,
  sym_VCHAR = 49,
  sym_source_file = 50,
  sym_rulelist = 51,
  sym_rule = 52,
  sym_defined_as = 53,
  sym_elements = 54,
  sym__c_wsp = 55,
  sym__c_nl = 56,
  sym_alternation = 57,
  sym_concatenation = 58,
  sym_repetition = 59,
  sym_repeat = 60,
  sym_element = 61,
  sym_group = 62,
  sym_option = 63,
  sym_char_val = 64,
  sym_case_insensitive_string = 65,
  sym_case_sensitive_string = 66,
  sym_quoted_string = 67,
  sym_num_val = 68,
  sym_bin_val = 69,
  sym_dec_val = 70,
  sym_hex_val = 71,
  sym_prose_val = 72,
  sym_core_rulename = 73,
  sym_BIT = 74,
  sym__CRLF = 75,
  sym__WSP = 76,
  aux_sym_rulelist_repeat1 = 77,
  aux_sym_rulelist_repeat2 = 78,
  aux_sym_alternation_repeat1 = 79,
  aux_sym_concatenation_repeat1 = 80,
  aux_sym_repeat_repeat1 = 81,
  aux_sym_bin_val_repeat1 = 82,
  aux_sym_bin_val_repeat2 = 83,
  aux_sym_dec_val_repeat1 = 84,
  aux_sym_hex_val_repeat1 = 85,
  aux_sym_hex_val_repeat2 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_rulename] = "rulename",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_SLASH] = "=/",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENTi] = "%i",
  [anon_sym_PERCENTs] = "%s",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_b] = "b",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_d] = "d",
  [anon_sym_x] = "x",
  [anon_sym_LT] = "<",
  [aux_sym_prose_val_token1] = "prose_val_token1",
  [anon_sym_GT] = ">",
  [anon_sym_ALPHA] = "ALPHA",
  [anon_sym_BIT] = "BIT",
  [anon_sym_CHAR] = "CHAR",
  [anon_sym_CR] = "CR",
  [anon_sym_CRLF] = "CRLF",
  [anon_sym_CTL] = "CTL",
  [anon_sym_DIGIT] = "DIGIT",
  [anon_sym_DQUOTE] = "DQUOTE",
  [anon_sym_HEXDIG] = "HEXDIG",
  [anon_sym_HTAB] = "HTAB",
  [anon_sym_LF] = "LF",
  [anon_sym_LWSP] = "LWSP",
  [anon_sym_OCTET] = "OCTET",
  [anon_sym_SP] = "SP",
  [anon_sym_VCHAR] = "VCHAR",
  [anon_sym_WSP] = "WSP",
  [sym_ALPHA] = "ALPHA",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [sym_DIGIT] = "DIGIT",
  [sym__CR] = "_CR",
  [sym__DQUOTE] = "_DQUOTE",
  [sym_HEXDIG] = "HEXDIG",
  [sym__HTAB] = "_HTAB",
  [sym__LF] = "_LF",
  [sym__SP] = "_SP",
  [sym_VCHAR] = "VCHAR",
  [sym_source_file] = "source_file",
  [sym_rulelist] = "rulelist",
  [sym_rule] = "rule",
  [sym_defined_as] = "defined_as",
  [sym_elements] = "elements",
  [sym__c_wsp] = "_c_wsp",
  [sym__c_nl] = "_c_nl",
  [sym_alternation] = "alternation",
  [sym_concatenation] = "concatenation",
  [sym_repetition] = "repetition",
  [sym_repeat] = "repeat",
  [sym_element] = "element",
  [sym_group] = "group",
  [sym_option] = "option",
  [sym_char_val] = "char_val",
  [sym_case_insensitive_string] = "case_insensitive_string",
  [sym_case_sensitive_string] = "case_sensitive_string",
  [sym_quoted_string] = "quoted_string",
  [sym_num_val] = "num_val",
  [sym_bin_val] = "bin_val",
  [sym_dec_val] = "dec_val",
  [sym_hex_val] = "hex_val",
  [sym_prose_val] = "prose_val",
  [sym_core_rulename] = "core_rulename",
  [sym_BIT] = "BIT",
  [sym__CRLF] = "_CRLF",
  [sym__WSP] = "_WSP",
  [aux_sym_rulelist_repeat1] = "rulelist_repeat1",
  [aux_sym_rulelist_repeat2] = "rulelist_repeat2",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_repeat_repeat1] = "repeat_repeat1",
  [aux_sym_bin_val_repeat1] = "bin_val_repeat1",
  [aux_sym_bin_val_repeat2] = "bin_val_repeat2",
  [aux_sym_dec_val_repeat1] = "dec_val_repeat1",
  [aux_sym_hex_val_repeat1] = "hex_val_repeat1",
  [aux_sym_hex_val_repeat2] = "hex_val_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_rulename] = sym_rulename,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_SLASH] = anon_sym_EQ_SLASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PERCENTi] = anon_sym_PERCENTi,
  [anon_sym_PERCENTs] = anon_sym_PERCENTs,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_prose_val_token1] = aux_sym_prose_val_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ALPHA] = anon_sym_ALPHA,
  [anon_sym_BIT] = anon_sym_BIT,
  [anon_sym_CHAR] = anon_sym_CHAR,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CRLF] = anon_sym_CRLF,
  [anon_sym_CTL] = anon_sym_CTL,
  [anon_sym_DIGIT] = anon_sym_DIGIT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_HEXDIG] = anon_sym_HEXDIG,
  [anon_sym_HTAB] = anon_sym_HTAB,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LWSP] = anon_sym_LWSP,
  [anon_sym_OCTET] = anon_sym_OCTET,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_VCHAR] = anon_sym_VCHAR,
  [anon_sym_WSP] = anon_sym_WSP,
  [sym_ALPHA] = sym_ALPHA,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [sym_DIGIT] = sym_DIGIT,
  [sym__CR] = sym__CR,
  [sym__DQUOTE] = sym__DQUOTE,
  [sym_HEXDIG] = sym_HEXDIG,
  [sym__HTAB] = sym__HTAB,
  [sym__LF] = sym__LF,
  [sym__SP] = sym__SP,
  [sym_VCHAR] = sym_VCHAR,
  [sym_source_file] = sym_source_file,
  [sym_rulelist] = sym_rulelist,
  [sym_rule] = sym_rule,
  [sym_defined_as] = sym_defined_as,
  [sym_elements] = sym_elements,
  [sym__c_wsp] = sym__c_wsp,
  [sym__c_nl] = sym__c_nl,
  [sym_alternation] = sym_alternation,
  [sym_concatenation] = sym_concatenation,
  [sym_repetition] = sym_repetition,
  [sym_repeat] = sym_repeat,
  [sym_element] = sym_element,
  [sym_group] = sym_group,
  [sym_option] = sym_option,
  [sym_char_val] = sym_char_val,
  [sym_case_insensitive_string] = sym_case_insensitive_string,
  [sym_case_sensitive_string] = sym_case_sensitive_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_num_val] = sym_num_val,
  [sym_bin_val] = sym_bin_val,
  [sym_dec_val] = sym_dec_val,
  [sym_hex_val] = sym_hex_val,
  [sym_prose_val] = sym_prose_val,
  [sym_core_rulename] = sym_core_rulename,
  [sym_BIT] = sym_BIT,
  [sym__CRLF] = sym__CRLF,
  [sym__WSP] = sym__WSP,
  [aux_sym_rulelist_repeat1] = aux_sym_rulelist_repeat1,
  [aux_sym_rulelist_repeat2] = aux_sym_rulelist_repeat2,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
  [aux_sym_repeat_repeat1] = aux_sym_repeat_repeat1,
  [aux_sym_bin_val_repeat1] = aux_sym_bin_val_repeat1,
  [aux_sym_bin_val_repeat2] = aux_sym_bin_val_repeat2,
  [aux_sym_dec_val_repeat1] = aux_sym_dec_val_repeat1,
  [aux_sym_hex_val_repeat1] = aux_sym_hex_val_repeat1,
  [aux_sym_hex_val_repeat2] = aux_sym_hex_val_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_rulename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTs] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prose_val_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALPHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRLF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIGIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEXDIG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LWSP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OCTET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VCHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WSP] = {
    .visible = true,
    .named = false,
  },
  [sym_ALPHA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [sym_DIGIT] = {
    .visible = true,
    .named = true,
  },
  [sym__CR] = {
    .visible = false,
    .named = true,
  },
  [sym__DQUOTE] = {
    .visible = false,
    .named = true,
  },
  [sym_HEXDIG] = {
    .visible = true,
    .named = true,
  },
  [sym__HTAB] = {
    .visible = false,
    .named = true,
  },
  [sym__LF] = {
    .visible = false,
    .named = true,
  },
  [sym__SP] = {
    .visible = false,
    .named = true,
  },
  [sym_VCHAR] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rulelist] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_defined_as] = {
    .visible = true,
    .named = true,
  },
  [sym_elements] = {
    .visible = true,
    .named = true,
  },
  [sym__c_wsp] = {
    .visible = false,
    .named = true,
  },
  [sym__c_nl] = {
    .visible = false,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_repetition] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_char_val] = {
    .visible = true,
    .named = true,
  },
  [sym_case_insensitive_string] = {
    .visible = true,
    .named = true,
  },
  [sym_case_sensitive_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_num_val] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_val] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_val] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_val] = {
    .visible = true,
    .named = true,
  },
  [sym_prose_val] = {
    .visible = true,
    .named = true,
  },
  [sym_core_rulename] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT] = {
    .visible = true,
    .named = true,
  },
  [sym__CRLF] = {
    .visible = false,
    .named = true,
  },
  [sym__WSP] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_rulelist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rulelist_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repeat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_val_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dec_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_val_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '1') ADVANCE(144);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(133);
      if (lookahead == 'W') ADVANCE(142);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'F' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('!' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(152);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'V') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == ']') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '~')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(130);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '1') ADVANCE(144);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == ']') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'B') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'G') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'Q') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'X') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENTi);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENTs);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_prose_val_token1);
      if ((' ' <= lookahead && lookahead <= '=') ||
          ('?' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ALPHA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ALPHA);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BIT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CHAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CHAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CRLF);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CRLF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CTL);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CTL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DIGIT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DIGIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_HEXDIG);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_HEXDIG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_HTAB);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_HTAB);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LWSP);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LWSP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_OCTET);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_OCTET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_VCHAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_VCHAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_WSP);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_WSP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ALPHA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'W') ADVANCE(27);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'H') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'Q') ADVANCE(33);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'P') ADVANCE(126);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_DIGIT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__CR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__DQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_HEXDIG);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__HTAB);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__LF);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__SP);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_VCHAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_VCHAR);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '~')) ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 36},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 98},
  [106] = {.lex_state = 90},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PERCENTi] = ACTIONS(1),
    [anon_sym_PERCENTs] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ALPHA] = ACTIONS(1),
    [anon_sym_BIT] = ACTIONS(1),
    [anon_sym_CHAR] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_CRLF] = ACTIONS(1),
    [anon_sym_CTL] = ACTIONS(1),
    [anon_sym_DIGIT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_HEXDIG] = ACTIONS(1),
    [anon_sym_HTAB] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LWSP] = ACTIONS(1),
    [anon_sym_OCTET] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [anon_sym_VCHAR] = ACTIONS(1),
    [anon_sym_WSP] = ACTIONS(1),
    [sym_ALPHA] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym_DIGIT] = ACTIONS(1),
    [sym__CR] = ACTIONS(1),
    [sym__DQUOTE] = ACTIONS(1),
    [sym_HEXDIG] = ACTIONS(1),
    [sym__HTAB] = ACTIONS(1),
    [sym__LF] = ACTIONS(1),
    [sym__SP] = ACTIONS(1),
    [sym_VCHAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym_rulelist] = STATE(103),
    [sym_rule] = STATE(33),
    [sym__c_wsp] = STATE(58),
    [sym__c_nl] = STATE(33),
    [sym__CRLF] = STATE(33),
    [sym__WSP] = STATE(58),
    [aux_sym_rulelist_repeat1] = STATE(58),
    [aux_sym_rulelist_repeat2] = STATE(33),
    [sym_rulename] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__CR] = ACTIONS(7),
    [sym__HTAB] = ACTIONS(9),
    [sym__SP] = ACTIONS(9),
  },
  [2] = {
    [sym__c_wsp] = STATE(12),
    [sym__c_nl] = STATE(94),
    [sym_alternation] = STATE(47),
    [sym_concatenation] = STATE(28),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(12),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(35),
    [sym__SP] = ACTIONS(35),
  },
  [3] = {
    [sym__c_wsp] = STATE(12),
    [sym__c_nl] = STATE(94),
    [sym_alternation] = STATE(49),
    [sym_concatenation] = STATE(28),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(12),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(35),
    [sym__SP] = ACTIONS(35),
  },
  [4] = {
    [sym__c_wsp] = STATE(2),
    [sym__c_nl] = STATE(94),
    [sym_alternation] = STATE(52),
    [sym_concatenation] = STATE(28),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(2),
    [aux_sym_rulelist_repeat1] = STATE(2),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(37),
    [sym__SP] = ACTIONS(37),
  },
  [5] = {
    [sym__c_wsp] = STATE(3),
    [sym__c_nl] = STATE(94),
    [sym_alternation] = STATE(53),
    [sym_concatenation] = STATE(28),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(3),
    [aux_sym_rulelist_repeat1] = STATE(3),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(39),
    [sym__SP] = ACTIONS(39),
  },
  [6] = {
    [sym__c_wsp] = STATE(12),
    [sym__c_nl] = STATE(94),
    [sym_concatenation] = STATE(83),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(12),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(35),
    [sym__SP] = ACTIONS(35),
  },
  [7] = {
    [sym__c_wsp] = STATE(12),
    [sym__c_nl] = STATE(94),
    [sym_concatenation] = STATE(76),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(12),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(35),
    [sym__SP] = ACTIONS(35),
  },
  [8] = {
    [sym__c_wsp] = STATE(6),
    [sym__c_nl] = STATE(94),
    [sym_concatenation] = STATE(76),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(6),
    [aux_sym_rulelist_repeat1] = STATE(6),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(41),
    [sym__SP] = ACTIONS(41),
  },
  [9] = {
    [sym__c_wsp] = STATE(7),
    [sym__c_nl] = STATE(94),
    [sym_concatenation] = STATE(74),
    [sym_repetition] = STATE(29),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(7),
    [aux_sym_rulelist_repeat1] = STATE(7),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(43),
    [sym__SP] = ACTIONS(43),
  },
  [10] = {
    [sym__c_wsp] = STATE(12),
    [sym__c_nl] = STATE(94),
    [sym_repetition] = STATE(78),
    [sym_repeat] = STATE(19),
    [sym_element] = STATE(86),
    [sym_group] = STATE(79),
    [sym_option] = STATE(79),
    [sym_char_val] = STATE(79),
    [sym_case_insensitive_string] = STATE(85),
    [sym_case_sensitive_string] = STATE(85),
    [sym_quoted_string] = STATE(84),
    [sym_num_val] = STATE(79),
    [sym_prose_val] = STATE(79),
    [sym_core_rulename] = STATE(79),
    [sym__CRLF] = STATE(94),
    [sym__WSP] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(12),
    [aux_sym_repeat_repeat1] = STATE(20),
    [sym_rulename] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENTi] = ACTIONS(21),
    [anon_sym_PERCENTs] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_ALPHA] = ACTIONS(29),
    [anon_sym_BIT] = ACTIONS(29),
    [anon_sym_CHAR] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CRLF] = ACTIONS(29),
    [anon_sym_CTL] = ACTIONS(29),
    [anon_sym_DIGIT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_HEXDIG] = ACTIONS(29),
    [anon_sym_HTAB] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LWSP] = ACTIONS(29),
    [anon_sym_OCTET] = ACTIONS(29),
    [anon_sym_SP] = ACTIONS(29),
    [anon_sym_VCHAR] = ACTIONS(29),
    [anon_sym_WSP] = ACTIONS(29),
    [sym_DIGIT] = ACTIONS(31),
    [sym__CR] = ACTIONS(7),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(35),
    [sym__SP] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(11), 1,
      sym_rulename,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENTi,
    ACTIONS(23), 1,
      anon_sym_PERCENTs,
    ACTIONS(25), 1,
      anon_sym_PERCENT,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_DIGIT,
    ACTIONS(33), 1,
      sym__DQUOTE,
    STATE(19), 1,
      sym_repeat,
    STATE(20), 1,
      aux_sym_repeat_repeat1,
    STATE(28), 1,
      sym_concatenation,
    STATE(29), 1,
      sym_repetition,
    STATE(54), 1,
      sym_alternation,
    STATE(84), 1,
      sym_quoted_string,
    STATE(86), 1,
      sym_element,
    STATE(92), 1,
      sym_elements,
    STATE(85), 2,
      sym_case_insensitive_string,
      sym_case_sensitive_string,
    STATE(79), 6,
      sym_group,
      sym_option,
      sym_char_val,
      sym_num_val,
      sym_prose_val,
      sym_core_rulename,
    ACTIONS(29), 16,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [85] = 7,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym__CR,
    ACTIONS(55), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    ACTIONS(47), 12,
      anon_sym_EQ_SLASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__DQUOTE,
    ACTIONS(45), 19,
      sym_rulename,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [140] = 4,
    ACTIONS(62), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(60), 16,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_LT,
      sym__CR,
      sym__DQUOTE,
      sym__HTAB,
      sym__SP,
    ACTIONS(58), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [185] = 7,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    ACTIONS(67), 8,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__DQUOTE,
    ACTIONS(65), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [235] = 2,
    ACTIONS(71), 16,
      anon_sym_EQ_SLASH,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__CR,
      sym__DQUOTE,
      sym__HTAB,
      sym__SP,
    ACTIONS(69), 19,
      sym_rulename,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [275] = 7,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(14), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    ACTIONS(75), 8,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__DQUOTE,
    ACTIONS(73), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [325] = 7,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(18), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    ACTIONS(67), 8,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__DQUOTE,
    ACTIONS(65), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [375] = 7,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    ACTIONS(83), 8,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym_DIGIT,
      sym__DQUOTE,
    ACTIONS(81), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [425] = 13,
    ACTIONS(11), 1,
      sym_rulename,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENTi,
    ACTIONS(23), 1,
      anon_sym_PERCENTs,
    ACTIONS(25), 1,
      anon_sym_PERCENT,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__DQUOTE,
    STATE(70), 1,
      sym_element,
    STATE(84), 1,
      sym_quoted_string,
    STATE(85), 2,
      sym_case_insensitive_string,
      sym_case_sensitive_string,
    STATE(79), 6,
      sym_group,
      sym_option,
      sym_char_val,
      sym_num_val,
      sym_prose_val,
      sym_core_rulename,
    ACTIONS(29), 16,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [486] = 5,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(89), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym__DQUOTE,
    ACTIONS(85), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [524] = 4,
    ACTIONS(91), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(95), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym__DQUOTE,
    ACTIONS(93), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [559] = 4,
    ACTIONS(91), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(99), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym__DQUOTE,
    ACTIONS(97), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [594] = 4,
    ACTIONS(101), 1,
      sym_DIGIT,
    STATE(21), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(99), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym__DQUOTE,
    ACTIONS(97), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [629] = 4,
    ACTIONS(103), 1,
      sym_DIGIT,
    STATE(22), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(89), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PERCENTi,
      anon_sym_PERCENTs,
      anon_sym_LT,
      sym__DQUOTE,
    ACTIONS(85), 18,
      sym_rulename,
      anon_sym_PERCENT,
      anon_sym_ALPHA,
      anon_sym_BIT,
      anon_sym_CHAR,
      anon_sym_CR,
      anon_sym_CRLF,
      anon_sym_CTL,
      anon_sym_DIGIT,
      anon_sym_DQUOTE,
      anon_sym_HEXDIG,
      anon_sym_HTAB,
      anon_sym_LF,
      anon_sym_LWSP,
      anon_sym_OCTET,
      anon_sym_SP,
      anon_sym_VCHAR,
      anon_sym_WSP,
  [664] = 6,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(61), 1,
      aux_sym_bin_val_repeat2,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(26), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
    ACTIONS(105), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [691] = 3,
    ACTIONS(115), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(26), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
    ACTIONS(113), 9,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [711] = 8,
    ACTIONS(118), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(126), 1,
      sym__CR,
    STATE(27), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(124), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(129), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(44), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [741] = 8,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(139), 1,
      sym__CR,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(137), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(142), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(44), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [771] = 7,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__CR,
    STATE(31), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(153), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    ACTIONS(148), 3,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(10), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [799] = 7,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__CR,
    STATE(30), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(164), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    ACTIONS(159), 3,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(10), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [827] = 7,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__CR,
    STATE(30), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(175), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(10), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [855] = 7,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_rulename,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__CR,
    ACTIONS(189), 2,
      sym__HTAB,
      sym__SP,
    STATE(58), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    STATE(32), 4,
      sym_rule,
      sym__c_nl,
      sym__CRLF,
      aux_sym_rulelist_repeat2,
  [883] = 7,
    ACTIONS(3), 1,
      sym_rulename,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym__HTAB,
      sym__SP,
    STATE(58), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
    STATE(32), 4,
      sym_rule,
      sym__c_nl,
      sym__CRLF,
      aux_sym_rulelist_repeat2,
  [911] = 8,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__CR,
    STATE(27), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(44), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [941] = 6,
    ACTIONS(209), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      sym_HEXDIG,
    STATE(41), 1,
      aux_sym_hex_val_repeat1,
    STATE(59), 1,
      aux_sym_hex_val_repeat2,
    ACTIONS(207), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [966] = 6,
    ACTIONS(91), 1,
      sym_DIGIT,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    STATE(60), 1,
      aux_sym_dec_val_repeat1,
    ACTIONS(215), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [991] = 8,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_EQ_SLASH,
    STATE(11), 1,
      sym_defined_as,
    ACTIONS(225), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(40), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1020] = 3,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(26), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
    ACTIONS(227), 8,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1039] = 1,
    ACTIONS(229), 11,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_0,
      anon_sym_1,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1053] = 7,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_EQ_SLASH,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1079] = 3,
    ACTIONS(237), 1,
      sym_HEXDIG,
    STATE(41), 1,
      aux_sym_hex_val_repeat1,
    ACTIONS(235), 9,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1097] = 3,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(26), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
    ACTIONS(240), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1115] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1138] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1161] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1184] = 3,
    ACTIONS(91), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(248), 8,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1201] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(45), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1224] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1247] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(43), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1270] = 3,
    ACTIONS(213), 1,
      sym_HEXDIG,
    STATE(41), 1,
      aux_sym_hex_val_repeat1,
    ACTIONS(258), 8,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1287] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1310] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    ACTIONS(262), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(48), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1333] = 6,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(51), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1356] = 4,
    ACTIONS(268), 2,
      sym_comment,
      sym__CR,
    ACTIONS(270), 2,
      sym__HTAB,
      sym__SP,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(56), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1374] = 3,
    ACTIONS(272), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_bin_val_repeat2,
    ACTIONS(227), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1390] = 4,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    ACTIONS(275), 2,
      sym_comment,
      sym__CR,
    STATE(94), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1408] = 3,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_dec_val_repeat1,
    ACTIONS(248), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1424] = 5,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(280), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym__HTAB,
      sym__SP,
    STATE(81), 2,
      sym__c_nl,
      sym__CRLF,
    STATE(12), 3,
      sym__c_wsp,
      sym__WSP,
      aux_sym_rulelist_repeat1,
  [1444] = 3,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_hex_val_repeat2,
    ACTIONS(282), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1460] = 3,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_dec_val_repeat1,
    ACTIONS(284), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1476] = 3,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_bin_val_repeat2,
    ACTIONS(286), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1492] = 3,
    ACTIONS(288), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_hex_val_repeat2,
    ACTIONS(258), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1508] = 3,
    ACTIONS(213), 1,
      sym_HEXDIG,
    STATE(41), 1,
      aux_sym_hex_val_repeat1,
    ACTIONS(291), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1524] = 3,
    ACTIONS(91), 1,
      sym_DIGIT,
    STATE(13), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(293), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1540] = 1,
    ACTIONS(295), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1550] = 1,
    ACTIONS(297), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1560] = 1,
    ACTIONS(299), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1570] = 1,
    ACTIONS(301), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1580] = 1,
    ACTIONS(303), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1590] = 1,
    ACTIONS(305), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1600] = 1,
    ACTIONS(307), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1610] = 1,
    ACTIONS(309), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1620] = 1,
    ACTIONS(311), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1630] = 1,
    ACTIONS(124), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1640] = 1,
    ACTIONS(313), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1650] = 1,
    ACTIONS(315), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1660] = 1,
    ACTIONS(317), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1670] = 1,
    ACTIONS(159), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1680] = 1,
    ACTIONS(319), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1690] = 1,
    ACTIONS(321), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1700] = 2,
    STATE(15), 1,
      sym__WSP,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_rulename,
      sym_comment,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1712] = 1,
    ACTIONS(323), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1722] = 1,
    ACTIONS(325), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1732] = 1,
    ACTIONS(327), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1742] = 1,
    ACTIONS(329), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1752] = 1,
    ACTIONS(331), 7,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1762] = 1,
    ACTIONS(333), 6,
      ts_builtin_sym_end,
      sym_rulename,
      sym_comment,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1771] = 4,
    ACTIONS(335), 1,
      anon_sym_b,
    ACTIONS(337), 1,
      anon_sym_d,
    ACTIONS(339), 1,
      anon_sym_x,
    STATE(69), 3,
      sym_bin_val,
      sym_dec_val,
      sym_hex_val,
  [1786] = 1,
    ACTIONS(341), 6,
      ts_builtin_sym_end,
      sym_rulename,
      sym_comment,
      sym__CR,
      sym__HTAB,
      sym__SP,
  [1795] = 2,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(42), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
  [1804] = 2,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(38), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
  [1813] = 3,
    ACTIONS(7), 1,
      sym__CR,
    ACTIONS(343), 1,
      sym_comment,
    STATE(89), 2,
      sym__c_nl,
      sym__CRLF,
  [1824] = 2,
    ACTIONS(111), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(25), 2,
      sym_BIT,
      aux_sym_bin_val_repeat1,
  [1833] = 2,
    STATE(15), 1,
      sym__WSP,
    ACTIONS(345), 2,
      sym__HTAB,
      sym__SP,
  [1841] = 2,
    ACTIONS(33), 1,
      sym__DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [1848] = 2,
    ACTIONS(33), 1,
      sym__DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [1855] = 2,
    ACTIONS(347), 1,
      sym_HEXDIG,
    STATE(50), 1,
      aux_sym_hex_val_repeat1,
  [1862] = 2,
    ACTIONS(349), 1,
      sym_HEXDIG,
    STATE(63), 1,
      aux_sym_hex_val_repeat1,
  [1869] = 2,
    ACTIONS(351), 1,
      sym_DIGIT,
    STATE(46), 1,
      aux_sym_repeat_repeat1,
  [1876] = 2,
    ACTIONS(353), 1,
      sym_DIGIT,
    STATE(64), 1,
      aux_sym_repeat_repeat1,
  [1883] = 2,
    ACTIONS(355), 1,
      sym_DIGIT,
    STATE(36), 1,
      aux_sym_repeat_repeat1,
  [1890] = 2,
    ACTIONS(357), 1,
      sym_HEXDIG,
    STATE(35), 1,
      aux_sym_hex_val_repeat1,
  [1897] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1901] = 1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1905] = 1,
    ACTIONS(363), 1,
      aux_sym_prose_val_token1,
  [1909] = 1,
    ACTIONS(365), 1,
      aux_sym_quoted_string_token1,
  [1913] = 1,
    ACTIONS(367), 1,
      sym__LF,
  [1917] = 1,
    ACTIONS(369), 1,
      sym__DQUOTE,
  [1921] = 1,
    ACTIONS(371), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 559,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 629,
  [SMALL_STATE(25)] = 664,
  [SMALL_STATE(26)] = 691,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 741,
  [SMALL_STATE(29)] = 771,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 855,
  [SMALL_STATE(33)] = 883,
  [SMALL_STATE(34)] = 911,
  [SMALL_STATE(35)] = 941,
  [SMALL_STATE(36)] = 966,
  [SMALL_STATE(37)] = 991,
  [SMALL_STATE(38)] = 1020,
  [SMALL_STATE(39)] = 1039,
  [SMALL_STATE(40)] = 1053,
  [SMALL_STATE(41)] = 1079,
  [SMALL_STATE(42)] = 1097,
  [SMALL_STATE(43)] = 1115,
  [SMALL_STATE(44)] = 1138,
  [SMALL_STATE(45)] = 1161,
  [SMALL_STATE(46)] = 1184,
  [SMALL_STATE(47)] = 1201,
  [SMALL_STATE(48)] = 1224,
  [SMALL_STATE(49)] = 1247,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1287,
  [SMALL_STATE(52)] = 1310,
  [SMALL_STATE(53)] = 1333,
  [SMALL_STATE(54)] = 1356,
  [SMALL_STATE(55)] = 1374,
  [SMALL_STATE(56)] = 1390,
  [SMALL_STATE(57)] = 1408,
  [SMALL_STATE(58)] = 1424,
  [SMALL_STATE(59)] = 1444,
  [SMALL_STATE(60)] = 1460,
  [SMALL_STATE(61)] = 1476,
  [SMALL_STATE(62)] = 1492,
  [SMALL_STATE(63)] = 1508,
  [SMALL_STATE(64)] = 1524,
  [SMALL_STATE(65)] = 1540,
  [SMALL_STATE(66)] = 1550,
  [SMALL_STATE(67)] = 1560,
  [SMALL_STATE(68)] = 1570,
  [SMALL_STATE(69)] = 1580,
  [SMALL_STATE(70)] = 1590,
  [SMALL_STATE(71)] = 1600,
  [SMALL_STATE(72)] = 1610,
  [SMALL_STATE(73)] = 1620,
  [SMALL_STATE(74)] = 1630,
  [SMALL_STATE(75)] = 1640,
  [SMALL_STATE(76)] = 1650,
  [SMALL_STATE(77)] = 1660,
  [SMALL_STATE(78)] = 1670,
  [SMALL_STATE(79)] = 1680,
  [SMALL_STATE(80)] = 1690,
  [SMALL_STATE(81)] = 1700,
  [SMALL_STATE(82)] = 1712,
  [SMALL_STATE(83)] = 1722,
  [SMALL_STATE(84)] = 1732,
  [SMALL_STATE(85)] = 1742,
  [SMALL_STATE(86)] = 1752,
  [SMALL_STATE(87)] = 1762,
  [SMALL_STATE(88)] = 1771,
  [SMALL_STATE(89)] = 1786,
  [SMALL_STATE(90)] = 1795,
  [SMALL_STATE(91)] = 1804,
  [SMALL_STATE(92)] = 1813,
  [SMALL_STATE(93)] = 1824,
  [SMALL_STATE(94)] = 1833,
  [SMALL_STATE(95)] = 1841,
  [SMALL_STATE(96)] = 1848,
  [SMALL_STATE(97)] = 1855,
  [SMALL_STATE(98)] = 1862,
  [SMALL_STATE(99)] = 1869,
  [SMALL_STATE(100)] = 1876,
  [SMALL_STATE(101)] = 1883,
  [SMALL_STATE(102)] = 1890,
  [SMALL_STATE(103)] = 1897,
  [SMALL_STATE(104)] = 1901,
  [SMALL_STATE(105)] = 1905,
  [SMALL_STATE(106)] = 1909,
  [SMALL_STATE(107)] = 1913,
  [SMALL_STATE(108)] = 1917,
  [SMALL_STATE(109)] = 1921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(94),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(107),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_repeat_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_repeat_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defined_as, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defined_as, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_wsp, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_wsp, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defined_as, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defined_as, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defined_as, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defined_as, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_val, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_val_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_val_repeat1, 2), SHIFT_REPEAT(39),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(94),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(107),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(44),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 1), SHIFT(94),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 1),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 1), SHIFT(107),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 1), SHIFT(44),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 1), SHIFT(94),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 1),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 1), SHIFT(107),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 1), SHIFT(10),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(94),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(107),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(10),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 2), SHIFT(94),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 2), SHIFT(107),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_concatenation, 2), SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat2, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(37),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(32),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(107),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rulelist, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 2), SHIFT(94),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 2), SHIFT(107),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_alternation, 2), SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_val, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_val, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_val_repeat2, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BIT, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_val_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(41),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_val, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dec_val_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_val_repeat2, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elements, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(99),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_val, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_val, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_val, 3),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_val, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_val, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_val, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_rulename, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_val, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_insensitive_string, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_sensitive_string, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_insensitive_string, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_val, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__CRLF, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_abnf(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
