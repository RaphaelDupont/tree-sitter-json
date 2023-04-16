#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_COLON = 4,
  sym_name = 5,
  sym_number = 6,
  sym_string = 7,
  sym_source_file = 8,
  sym_main_obj = 9,
  sym_key_pair_list = 10,
  sym_key_pair = 11,
  sym_value = 12,
  aux_sym_key_pair_list_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_main_obj] = "main_obj",
  [sym_key_pair_list] = "key_pair_list",
  [sym_key_pair] = "key_pair",
  [sym_value] = "value",
  [aux_sym_key_pair_list_repeat1] = "key_pair_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_main_obj] = sym_main_obj,
  [sym_key_pair_list] = sym_key_pair_list,
  [sym_key_pair] = sym_key_pair,
  [sym_value] = sym_value,
  [aux_sym_key_pair_list_repeat1] = aux_sym_key_pair_list_repeat1,
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
  [sym_main_obj] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
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
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_main_obj] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_key_pair_list,
    STATE(3), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [11] = 3,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [22] = 3,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym_key_pair,
      aux_sym_key_pair_list_repeat1,
  [33] = 2,
    STATE(16), 1,
      sym_value,
    ACTIONS(14), 2,
      sym_number,
      sym_string,
  [41] = 1,
    ACTIONS(16), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [46] = 1,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [50] = 1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
  [54] = 1,
    ACTIONS(22), 1,
      sym_name,
  [58] = 1,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
  [62] = 1,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
  [66] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [70] = 1,
    ACTIONS(30), 1,
      anon_sym_COLON,
  [74] = 1,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
  [78] = 1,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
  [82] = 1,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 70,
  [SMALL_STATE(14)] = 74,
  [SMALL_STATE(15)] = 78,
  [SMALL_STATE(16)] = 82,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair_list, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2), SHIFT_REPEAT(9),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair, 7),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_obj, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
