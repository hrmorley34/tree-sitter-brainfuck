#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LBRACK = 1,
  aux_sym_comment_loop_token1 = 2,
  anon_sym_RBRACK = 3,
  sym_pointerleft = 4,
  sym_pointerright = 5,
  sym_memoryadd = 6,
  sym_memorysubtract = 7,
  sym_memoryinput = 8,
  sym_memoryoutput = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_initial_comment = 12,
  sym__any_comment = 13,
  sym_comment_loop = 14,
  sym__any = 15,
  sym_loop = 16,
  sym__command = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym__any_comment_repeat1 = 19,
  aux_sym_comment_loop_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_comment_loop_token1] = "comment_loop_token1",
  [anon_sym_RBRACK] = "]",
  [sym_pointerleft] = "pointerleft",
  [sym_pointerright] = "pointerright",
  [sym_memoryadd] = "memoryadd",
  [sym_memorysubtract] = "memorysubtract",
  [sym_memoryinput] = "memoryinput",
  [sym_memoryoutput] = "memoryoutput",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_initial_comment] = "initial_comment",
  [sym__any_comment] = "_any_comment",
  [sym_comment_loop] = "comment_loop",
  [sym__any] = "_any",
  [sym_loop] = "loop",
  [sym__command] = "_command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__any_comment_repeat1] = "_any_comment_repeat1",
  [aux_sym_comment_loop_repeat1] = "comment_loop_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_comment_loop_token1] = aux_sym_comment_loop_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_pointerleft] = sym_pointerleft,
  [sym_pointerright] = sym_pointerright,
  [sym_memoryadd] = sym_memoryadd,
  [sym_memorysubtract] = sym_memorysubtract,
  [sym_memoryinput] = sym_memoryinput,
  [sym_memoryoutput] = sym_memoryoutput,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_initial_comment] = sym_initial_comment,
  [sym__any_comment] = sym__any_comment,
  [sym_comment_loop] = sym_comment_loop,
  [sym__any] = sym__any,
  [sym_loop] = sym_loop,
  [sym__command] = sym__command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__any_comment_repeat1] = aux_sym__any_comment_repeat1,
  [aux_sym_comment_loop_repeat1] = aux_sym_comment_loop_repeat1,
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
  [aux_sym_comment_loop_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_pointerleft] = {
    .visible = true,
    .named = true,
  },
  [sym_pointerright] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryadd] = {
    .visible = true,
    .named = true,
  },
  [sym_memorysubtract] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryinput] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryoutput] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_initial_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__any_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_loop] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__any_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_loop_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_comment_loop_token1);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_comment_loop_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_comment_loop_token1);
      if (('+' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_loop_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_pointerleft);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_pointerleft);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_pointerright);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_pointerright);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_memoryadd);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_memoryadd);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_memorysubtract);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_memorysubtract);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_memoryinput);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_memoryinput);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_memoryoutput);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_memoryoutput);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '+' || '.' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          (lookahead < '+' || '.' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_comment_loop_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_pointerleft] = ACTIONS(1),
    [sym_pointerright] = ACTIONS(1),
    [sym_memoryadd] = ACTIONS(1),
    [sym_memorysubtract] = ACTIONS(1),
    [sym_memoryinput] = ACTIONS(1),
    [sym_memoryoutput] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_initial_comment] = STATE(6),
    [sym__any_comment] = STATE(20),
    [sym_comment_loop] = STATE(11),
    [sym__any] = STATE(8),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__any_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_pointerleft] = ACTIONS(7),
    [sym_pointerright] = ACTIONS(7),
    [sym_memoryadd] = ACTIONS(7),
    [sym_memorysubtract] = ACTIONS(7),
    [sym_memoryinput] = ACTIONS(7),
    [sym_memoryoutput] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_comment_loop] = STATE(22),
    [sym__any] = STATE(9),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_comment_loop_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym_comment_loop_token1] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(15),
    [sym_pointerleft] = ACTIONS(17),
    [sym_pointerright] = ACTIONS(17),
    [sym_memoryadd] = ACTIONS(17),
    [sym_memorysubtract] = ACTIONS(17),
    [sym_memoryinput] = ACTIONS(17),
    [sym_memoryoutput] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
  },
  [3] = {
    [sym_comment_loop] = STATE(24),
    [sym__any] = STATE(9),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_comment_loop_repeat1] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym_comment_loop_token1] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_pointerleft] = ACTIONS(17),
    [sym_pointerright] = ACTIONS(17),
    [sym_memoryadd] = ACTIONS(17),
    [sym_memorysubtract] = ACTIONS(17),
    [sym_memoryinput] = ACTIONS(17),
    [sym_memoryoutput] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
  },
  [4] = {
    [sym__any] = STATE(4),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(28),
    [sym_pointerleft] = ACTIONS(30),
    [sym_pointerright] = ACTIONS(30),
    [sym_memoryadd] = ACTIONS(30),
    [sym_memorysubtract] = ACTIONS(30),
    [sym_memoryinput] = ACTIONS(30),
    [sym_memoryoutput] = ACTIONS(30),
    [sym_comment] = ACTIONS(33),
  },
  [5] = {
    [sym__any] = STATE(4),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_pointerleft] = ACTIONS(40),
    [sym_pointerright] = ACTIONS(40),
    [sym_memoryadd] = ACTIONS(40),
    [sym_memorysubtract] = ACTIONS(40),
    [sym_memoryinput] = ACTIONS(40),
    [sym_memoryoutput] = ACTIONS(40),
    [sym_comment] = ACTIONS(42),
  },
  [6] = {
    [sym__any] = STATE(5),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_pointerleft] = ACTIONS(46),
    [sym_pointerright] = ACTIONS(46),
    [sym_memoryadd] = ACTIONS(46),
    [sym_memorysubtract] = ACTIONS(46),
    [sym_memoryinput] = ACTIONS(46),
    [sym_memoryoutput] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
  },
  [7] = {
    [sym__any_comment] = STATE(14),
    [sym_comment_loop] = STATE(11),
    [aux_sym__any_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(54),
    [sym_pointerleft] = ACTIONS(54),
    [sym_pointerright] = ACTIONS(54),
    [sym_memoryadd] = ACTIONS(54),
    [sym_memorysubtract] = ACTIONS(54),
    [sym_memoryinput] = ACTIONS(54),
    [sym_memoryoutput] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym__any] = STATE(4),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_pointerleft] = ACTIONS(40),
    [sym_pointerright] = ACTIONS(40),
    [sym_memoryadd] = ACTIONS(40),
    [sym_memorysubtract] = ACTIONS(40),
    [sym_memoryinput] = ACTIONS(40),
    [sym_memoryoutput] = ACTIONS(40),
    [sym_comment] = ACTIONS(42),
  },
  [9] = {
    [sym__any] = STATE(4),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(56),
    [sym_pointerleft] = ACTIONS(40),
    [sym_pointerright] = ACTIONS(40),
    [sym_memoryadd] = ACTIONS(40),
    [sym_memorysubtract] = ACTIONS(40),
    [sym_memoryinput] = ACTIONS(40),
    [sym_memoryoutput] = ACTIONS(40),
    [sym_comment] = ACTIONS(42),
  },
  [10] = {
    [sym__any] = STATE(9),
    [sym_loop] = STATE(7),
    [sym__command] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym_pointerleft] = ACTIONS(17),
    [sym_pointerright] = ACTIONS(17),
    [sym_memoryadd] = ACTIONS(17),
    [sym_memorysubtract] = ACTIONS(17),
    [sym_memoryinput] = ACTIONS(17),
    [sym_memoryoutput] = ACTIONS(17),
    [sym_comment] = ACTIONS(60),
  },
  [11] = {
    [sym_comment_loop] = STATE(12),
    [aux_sym__any_comment_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(64),
    [sym_pointerleft] = ACTIONS(64),
    [sym_pointerright] = ACTIONS(64),
    [sym_memoryadd] = ACTIONS(64),
    [sym_memorysubtract] = ACTIONS(64),
    [sym_memoryinput] = ACTIONS(64),
    [sym_memoryoutput] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
  },
  [12] = {
    [sym_comment_loop] = STATE(12),
    [aux_sym__any_comment_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_pointerleft] = ACTIONS(73),
    [sym_pointerright] = ACTIONS(73),
    [sym_memoryadd] = ACTIONS(73),
    [sym_memorysubtract] = ACTIONS(73),
    [sym_memoryinput] = ACTIONS(73),
    [sym_memoryoutput] = ACTIONS(73),
    [sym_comment] = ACTIONS(75),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(80), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [15] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(84), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [30] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(88), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [45] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(92), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [60] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(96), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [75] = 2,
    ACTIONS(96), 3,
      anon_sym_LBRACK,
      aux_sym_comment_loop_token1,
      anon_sym_RBRACK,
    ACTIONS(80), 7,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
      sym_comment,
  [90] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(96), 7,
      anon_sym_LBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [104] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(100), 7,
      anon_sym_LBRACK,
      sym_pointerleft,
      sym_pointerright,
      sym_memoryadd,
      sym_memorysubtract,
      sym_memoryinput,
      sym_memoryoutput,
  [118] = 4,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(22), 2,
      sym_comment_loop,
      aux_sym_comment_loop_repeat1,
  [132] = 4,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_comment_loop,
      aux_sym_comment_loop_repeat1,
  [146] = 4,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_comment_loop,
      aux_sym_comment_loop_repeat1,
  [160] = 4,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_comment_loop,
      aux_sym_comment_loop_repeat1,
  [174] = 4,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(24), 2,
      sym_comment_loop,
      aux_sym_comment_loop_repeat1,
  [188] = 2,
    ACTIONS(90), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [196] = 2,
    ACTIONS(94), 1,
      aux_sym_comment_loop_token1,
    ACTIONS(96), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [204] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 15,
  [SMALL_STATE(15)] = 30,
  [SMALL_STATE(16)] = 45,
  [SMALL_STATE(17)] = 60,
  [SMALL_STATE(18)] = 75,
  [SMALL_STATE(19)] = 90,
  [SMALL_STATE(20)] = 104,
  [SMALL_STATE(21)] = 118,
  [SMALL_STATE(22)] = 132,
  [SMALL_STATE(23)] = 146,
  [SMALL_STATE(24)] = 160,
  [SMALL_STATE(25)] = 174,
  [SMALL_STATE(26)] = 188,
  [SMALL_STATE(27)] = 196,
  [SMALL_STATE(28)] = 204,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_comment, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_comment, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__any_comment_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any_comment_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__any_comment_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__any_comment_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_loop, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_loop, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_loop, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_loop, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_comment, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_initial_comment, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_loop_repeat1, 2), SHIFT_REPEAT(25),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_loop_repeat1, 2), SHIFT_REPEAT(23),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_loop_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_brainfuck(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
