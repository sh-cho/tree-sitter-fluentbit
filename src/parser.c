#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_AT = 3,
  anon_sym_SET = 4,
  anon_sym_INCLUDE = 5,
  anon_sym_EQ = 6,
  sym_identifier = 7,
  sym_value = 8,
  sym__LF = 9,
  sym__INDENT = 10,
  sym__WS = 11,
  sym__comment = 12,
  sym_config_file = 13,
  sym_config_block = 14,
  sym_section = 15,
  sym_section_header = 16,
  sym_section_body = 17,
  sym_meta = 18,
  sym_meta_set = 19,
  sym_meta_include = 20,
  sym_assign_expr = 21,
  sym_entry = 22,
  aux_sym_config_file_repeat1 = 23,
  aux_sym_section_body_repeat1 = 24,
  anon_alias_sym_path = 25,
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
  [sym_value] = "value",
  [sym__LF] = "_LF",
  [sym__INDENT] = "_INDENT",
  [sym__WS] = "_WS",
  [sym__comment] = "_comment",
  [sym_config_file] = "config_file",
  [sym_config_block] = "config_block",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_section_body] = "section_body",
  [sym_meta] = "meta",
  [sym_meta_set] = "meta_set",
  [sym_meta_include] = "meta_include",
  [sym_assign_expr] = "assign_expr",
  [sym_entry] = "entry",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_section_body_repeat1] = "section_body_repeat1",
  [anon_alias_sym_path] = "path",
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
  [sym_value] = sym_value,
  [sym__LF] = sym__LF,
  [sym__INDENT] = sym__INDENT,
  [sym__WS] = sym__WS,
  [sym__comment] = sym__comment,
  [sym_config_file] = sym_config_file,
  [sym_config_block] = sym_config_block,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_section_body] = sym_section_body,
  [sym_meta] = sym_meta,
  [sym_meta_set] = sym_meta_set,
  [sym_meta_include] = sym_meta_include,
  [sym_assign_expr] = sym_assign_expr,
  [sym_entry] = sym_entry,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_section_body_repeat1] = aux_sym_section_body_repeat1,
  [anon_alias_sym_path] = anon_alias_sym_path,
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
  [sym_value] = {
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
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_config_block] = {
    .visible = true,
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
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_set] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_include] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_path] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [2] = anon_alias_sym_path,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '#') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__LF);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__INDENT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__INDENT);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
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
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [sym__LF] = ACTIONS(1),
    [sym__INDENT] = ACTIONS(1),
    [sym__WS] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(19),
    [sym_config_block] = STATE(2),
    [sym_section] = STATE(8),
    [sym_section_header] = STATE(12),
    [sym_meta] = STATE(8),
    [aux_sym_config_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym__LF] = ACTIONS(9),
    [sym__comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
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
    STATE(12), 1,
      sym_section_header,
    STATE(3), 2,
      sym_config_block,
      aux_sym_config_file_repeat1,
    STATE(8), 2,
      sym_section,
      sym_meta,
  [27] = 8,
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
    STATE(12), 1,
      sym_section_header,
    STATE(3), 2,
      sym_config_block,
      aux_sym_config_file_repeat1,
    STATE(8), 2,
      sym_section,
      sym_meta,
  [54] = 3,
    ACTIONS(33), 1,
      sym__INDENT,
    STATE(5), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [68] = 3,
    ACTIONS(37), 1,
      sym__INDENT,
    STATE(5), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [82] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__INDENT,
      sym__comment,
  [91] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [99] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [107] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [115] = 1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__LF,
      sym__comment,
  [123] = 3,
    ACTIONS(48), 1,
      anon_sym_SET,
    ACTIONS(50), 1,
      anon_sym_INCLUDE,
    STATE(15), 2,
      sym_meta_set,
      sym_meta_include,
  [134] = 3,
    ACTIONS(33), 1,
      sym__INDENT,
    STATE(4), 1,
      aux_sym_section_body_repeat1,
    STATE(7), 1,
      sym_section_body,
  [144] = 3,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym__comment,
    STATE(23), 1,
      sym_entry,
  [154] = 2,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(27), 1,
      sym_assign_expr,
  [161] = 1,
    ACTIONS(58), 1,
      sym__LF,
  [165] = 1,
    ACTIONS(60), 1,
      sym__LF,
  [169] = 1,
    ACTIONS(62), 1,
      sym_identifier,
  [173] = 1,
    ACTIONS(64), 1,
      sym__LF,
  [177] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [181] = 1,
    ACTIONS(68), 1,
      sym_value,
  [185] = 1,
    ACTIONS(70), 1,
      sym__WS,
  [189] = 1,
    ACTIONS(72), 1,
      sym__WS,
  [193] = 1,
    ACTIONS(74), 1,
      sym__LF,
  [197] = 1,
    ACTIONS(76), 1,
      sym__WS,
  [201] = 1,
    ACTIONS(78), 1,
      sym__INDENT,
  [205] = 1,
    ACTIONS(80), 1,
      anon_sym_EQ,
  [209] = 1,
    ACTIONS(82), 1,
      sym__LF,
  [213] = 1,
    ACTIONS(84), 1,
      sym__LF,
  [217] = 1,
    ACTIONS(86), 1,
      sym_value,
  [221] = 1,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
  [225] = 1,
    ACTIONS(90), 1,
      sym_value,
  [229] = 1,
    ACTIONS(92), 1,
      sym__LF,
  [233] = 1,
    ACTIONS(94), 1,
      sym__LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 185,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 193,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 201,
  [SMALL_STATE(26)] = 205,
  [SMALL_STATE(27)] = 209,
  [SMALL_STATE(28)] = 213,
  [SMALL_STATE(29)] = 217,
  [SMALL_STATE(30)] = 221,
  [SMALL_STATE(31)] = 225,
  [SMALL_STATE(32)] = 229,
  [SMALL_STATE(33)] = 233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_body, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_set, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_include, 3, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expr, 3, .production_id = 3),
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
