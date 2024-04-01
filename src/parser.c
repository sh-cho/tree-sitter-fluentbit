#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_AT = 3,
  anon_sym_SET = 4,
  anon_sym_INCLUDE = 5,
  anon_sym_EQ = 6,
  sym_identifier = 7,
  sym_section_header_type = 8,
  sym_value_type = 9,
  sym__LF = 10,
  sym__INDENT = 11,
  sym__WS = 12,
  sym__comment = 13,
  sym_config = 14,
  sym__config_block = 15,
  sym_section = 16,
  sym_section_header = 17,
  sym_section_body = 18,
  sym_directive = 19,
  sym_directive_set = 20,
  sym_directive_include = 21,
  sym__assign_expr = 22,
  sym_entry = 23,
  aux_sym_config_repeat1 = 24,
  aux_sym_section_body_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_SET] = "SET",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_section_header_type] = "section_header_type",
  [sym_value_type] = "value_type",
  [sym__LF] = "_LF",
  [sym__INDENT] = "_INDENT",
  [sym__WS] = "_WS",
  [sym__comment] = "_comment",
  [sym_config] = "config",
  [sym__config_block] = "_config_block",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_section_body] = "section_body",
  [sym_directive] = "directive",
  [sym_directive_set] = "directive_set",
  [sym_directive_include] = "directive_include",
  [sym__assign_expr] = "_assign_expr",
  [sym_entry] = "entry",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_body_repeat1] = "section_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_section_header_type] = sym_section_header_type,
  [sym_value_type] = sym_value_type,
  [sym__LF] = sym__LF,
  [sym__INDENT] = sym__INDENT,
  [sym__WS] = sym__WS,
  [sym__comment] = sym__comment,
  [sym_config] = sym_config,
  [sym__config_block] = sym__config_block,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_section_body] = sym_section_body,
  [sym_directive] = sym_directive,
  [sym_directive_set] = sym_directive_set,
  [sym_directive_include] = sym_directive_include,
  [sym__assign_expr] = sym__assign_expr,
  [sym_entry] = sym_entry,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_body_repeat1] = aux_sym_section_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header_type] = {
    .visible = true,
    .named = true,
  },
  [sym_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym__LF] = {
    .visible = false,
    .named = true,
  },
  [sym__INDENT] = {
    .visible = false,
    .named = true,
  },
  [sym__WS] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__config_block] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_section_body] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_set] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_include] = {
    .visible = true,
    .named = true,
  },
  [sym__assign_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_header = 2,
  field_key = 3,
  field_name = 4,
  field_pattern = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_key] = "key",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
    {field_header, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_key, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [5] =
    {field_pattern, 2},
  [6] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '#') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == '[') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_value_type);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__LF);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__INDENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__INDENT);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_section_header_type] = ACTIONS(1),
    [sym__LF] = ACTIONS(1),
    [sym__INDENT] = ACTIONS(1),
    [sym__WS] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(23),
    [sym__config_block] = STATE(2),
    [sym_section] = STATE(2),
    [sym_section_header] = STATE(11),
    [sym_directive] = STATE(2),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym__LF] = ACTIONS(9),
    [sym__comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      sym__comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__LF,
    STATE(11), 1,
      sym_section_header,
    STATE(3), 4,
      sym__config_block,
      sym_section,
      sym_directive,
      aux_sym_config_repeat1,
  [25] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(22), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__LF,
    ACTIONS(28), 1,
      sym__comment,
    STATE(11), 1,
      sym_section_header,
    STATE(3), 4,
      sym__config_block,
      sym_section,
      sym_directive,
      aux_sym_config_repeat1,
  [50] = 3,
    ACTIONS(33), 1,
      sym__INDENT,
    STATE(4), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [64] = 3,
    ACTIONS(38), 1,
      sym__INDENT,
    STATE(4), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [78] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__INDENT,
      sym__comment,
  [87] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [95] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [103] = 1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [111] = 3,
    ACTIONS(46), 1,
      anon_sym_SET,
    ACTIONS(48), 1,
      anon_sym_INCLUDE,
    STATE(15), 2,
      sym_directive_set,
      sym_directive_include,
  [122] = 3,
    ACTIONS(38), 1,
      sym__INDENT,
    STATE(5), 1,
      aux_sym_section_body_repeat1,
    STATE(7), 1,
      sym_section_body,
  [132] = 3,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      sym__comment,
    STATE(22), 1,
      sym_entry,
  [142] = 2,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(26), 1,
      sym__assign_expr,
  [149] = 1,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
  [153] = 1,
    ACTIONS(58), 1,
      sym__LF,
  [157] = 1,
    ACTIONS(60), 1,
      sym_section_header_type,
  [161] = 1,
    ACTIONS(62), 1,
      sym__LF,
  [165] = 1,
    ACTIONS(64), 1,
      sym__WS,
  [169] = 1,
    ACTIONS(66), 1,
      sym_value_type,
  [173] = 1,
    ACTIONS(68), 1,
      sym__WS,
  [177] = 1,
    ACTIONS(70), 1,
      sym__WS,
  [181] = 1,
    ACTIONS(72), 1,
      sym__LF,
  [185] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [189] = 1,
    ACTIONS(76), 1,
      sym__INDENT,
  [193] = 1,
    ACTIONS(78), 1,
      anon_sym_EQ,
  [197] = 1,
    ACTIONS(80), 1,
      sym__LF,
  [201] = 1,
    ACTIONS(82), 1,
      sym__LF,
  [205] = 1,
    ACTIONS(84), 1,
      sym_value_type,
  [209] = 1,
    ACTIONS(86), 1,
      sym__LF,
  [213] = 1,
    ACTIONS(88), 1,
      sym_value_type,
  [217] = 1,
    ACTIONS(90), 1,
      sym__LF,
  [221] = 1,
    ACTIONS(92), 1,
      sym__LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 161,
  [SMALL_STATE(18)] = 165,
  [SMALL_STATE(19)] = 169,
  [SMALL_STATE(20)] = 173,
  [SMALL_STATE(21)] = 177,
  [SMALL_STATE(22)] = 181,
  [SMALL_STATE(23)] = 185,
  [SMALL_STATE(24)] = 189,
  [SMALL_STATE(25)] = 193,
  [SMALL_STATE(26)] = 197,
  [SMALL_STATE(27)] = 201,
  [SMALL_STATE(28)] = 205,
  [SMALL_STATE(29)] = 209,
  [SMALL_STATE(30)] = 213,
  [SMALL_STATE(31)] = 217,
  [SMALL_STATE(32)] = 221,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_body, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_set, 3, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_include, 3, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_expr, 3, .production_id = 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fluentbit(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
