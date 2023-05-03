#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_number = 7,
  sym_string = 8,
  sym_source_file = 9,
  sym_key_pair_list = 10,
  sym_key_pair = 11,
  sym_value = 12,
  sym_array = 13,
  sym_object = 14,
  aux_sym_key_pair_list_repeat1 = 15,
  aux_sym_array_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_key_pair_list] = "key_pair_list",
  [sym_key_pair] = "key_pair",
  [sym_value] = "value",
  [sym_array] = "array",
  [sym_object] = "object",
  [aux_sym_key_pair_list_repeat1] = "key_pair_list_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_key_pair_list] = sym_key_pair_list,
  [sym_key_pair] = sym_key_pair,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [aux_sym_key_pair_list_repeat1] = aux_sym_key_pair_list_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_key_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [5] = {.lex_state = 0},
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
  [2] = {
    [sym_key_pair] = STATE(15),
    [sym_value] = STATE(30),
    [sym_array] = STATE(15),
    [sym_object] = STATE(15),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(8),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(14),
  },
  [3] = {
    [sym_key_pair] = STATE(15),
    [sym_value] = STATE(23),
    [sym_array] = STATE(15),
    [sym_object] = STATE(15),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
  [4] = {
    [sym_key_pair] = STATE(15),
    [sym_value] = STATE(22),
    [sym_array] = STATE(15),
    [sym_object] = STATE(15),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
  [5] = {
    [sym_key_pair] = STATE(15),
    [sym_value] = STATE(19),
    [sym_array] = STATE(15),
    [sym_object] = STATE(15),
    [aux_sym_array_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
  [6] = {
    [sym_key_pair] = STATE(15),
    [sym_value] = STATE(21),
    [sym_array] = STATE(15),
    [sym_object] = STATE(15),
    [aux_sym_array_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(17), 1,
      sym_value,
    STATE(15), 3,
      sym_key_pair,
      sym_array,
      sym_object,
  [21] = 2,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(25), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [30] = 1,
    ACTIONS(29), 4,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_number,
      sym_string,
  [37] = 4,
    ACTIONS(31), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_key_pair_list_repeat1,
    STATE(24), 1,
      sym_key_pair,
    STATE(25), 1,
      sym_key_pair_list,
  [50] = 1,
    ACTIONS(33), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [56] = 1,
    ACTIONS(35), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [62] = 3,
    ACTIONS(37), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_key_pair_list_repeat1,
    STATE(29), 1,
      sym_key_pair,
  [72] = 1,
    ACTIONS(40), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [78] = 1,
    ACTIONS(25), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [84] = 1,
    ACTIONS(42), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [90] = 1,
    ACTIONS(44), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [96] = 3,
    ACTIONS(31), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_key_pair_list_repeat1,
    STATE(20), 1,
      sym_key_pair,
  [106] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
  [113] = 2,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_COMMA,
  [120] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
  [127] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
  [134] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [141] = 2,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
  [148] = 1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
  [152] = 1,
    ACTIONS(64), 1,
      sym_string,
  [156] = 1,
    ACTIONS(27), 1,
      anon_sym_COLON,
  [160] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [164] = 1,
    ACTIONS(52), 1,
      anon_sym_COMMA,
  [168] = 1,
    ACTIONS(46), 1,
      anon_sym_COMMA,
  [172] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 21,
  [SMALL_STATE(9)] = 30,
  [SMALL_STATE(10)] = 37,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 78,
  [SMALL_STATE(16)] = 84,
  [SMALL_STATE(17)] = 90,
  [SMALL_STATE(18)] = 96,
  [SMALL_STATE(19)] = 106,
  [SMALL_STATE(20)] = 113,
  [SMALL_STATE(21)] = 120,
  [SMALL_STATE(22)] = 127,
  [SMALL_STATE(23)] = 134,
  [SMALL_STATE(24)] = 141,
  [SMALL_STATE(25)] = 148,
  [SMALL_STATE(26)] = 152,
  [SMALL_STATE(27)] = 156,
  [SMALL_STATE(28)] = 160,
  [SMALL_STATE(29)] = 164,
  [SMALL_STATE(30)] = 168,
  [SMALL_STATE(31)] = 172,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [8] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2), SHIFT_REPEAT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair_list, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_pair_list, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_pair_list_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
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
