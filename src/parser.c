#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  sym_name = 8,
  sym_number = 9,
  sym_string = 10,
  sym_source_file = 11,
  sym_key_pair_list = 12,
  sym_key_pair = 13,
  sym_value = 14,
  aux_sym_key_pair_list_repeat1 = 15,
  aux_sym_value_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_name] = "name",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_key_pair_list] = "key_pair_list",
  [sym_key_pair] = "key_pair",
  [sym_value] = "value",
  [aux_sym_key_pair_list_repeat1] = "key_pair_list_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_key_pair_list] = sym_key_pair_list,
  [sym_key_pair] = sym_key_pair,
  [sym_value] = sym_value,
  [aux_sym_key_pair_list_repeat1] = aux_sym_key_pair_list_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_key_pair_list] = {
    .visible = true,
    .named = true,
  },
  [sym_key_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_key_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      aux_sym_value_repeat1,
    STATE(24), 1,
      sym_value,
    ACTIONS(8), 2,
      sym_number,
      sym_string,
  [14] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      aux_sym_value_repeat1,
    STATE(15), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
  [28] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      aux_sym_value_repeat1,
    STATE(13), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
  [42] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
  [53] = 3,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(7), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [64] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(7), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [75] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_key_pair_list,
    STATE(6), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [86] = 1,
    ACTIONS(24), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [92] = 1,
    ACTIONS(26), 3,
      anon_sym_LBRACK,
      sym_number,
      sym_string,
  [98] = 1,
    ACTIONS(28), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [104] = 1,
    ACTIONS(30), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [110] = 2,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
  [117] = 1,
    ACTIONS(36), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [122] = 2,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
  [129] = 1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
  [133] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [137] = 1,
    ACTIONS(44), 1,
      anon_sym_COLON,
  [141] = 1,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
  [145] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
  [149] = 1,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
  [153] = 1,
    ACTIONS(52), 1,
      sym_name,
  [157] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [161] = 1,
    ACTIONS(32), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 122,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 133,
  [SMALL_STATE(18)] = 137,
  [SMALL_STATE(19)] = 141,
  [SMALL_STATE(20)] = 145,
  [SMALL_STATE(21)] = 149,
  [SMALL_STATE(22)] = 153,
  [SMALL_STATE(23)] = 157,
  [SMALL_STATE(24)] = 161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(4),
  [8] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair_list, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2), SHIFT_REPEAT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair, 7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_JSON(void) {
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
