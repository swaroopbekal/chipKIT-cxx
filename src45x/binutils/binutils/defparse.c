/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     LIBRARY = 259,
     DESCRIPTION = 260,
     STACKSIZE = 261,
     HEAPSIZE = 262,
     CODE = 263,
     DATA = 264,
     SECTIONS = 265,
     EXPORTS = 266,
     IMPORTS = 267,
     VERSIONK = 268,
     BASE = 269,
     CONSTANT = 270,
     READ = 271,
     WRITE = 272,
     EXECUTE = 273,
     SHARED = 274,
     NONSHARED = 275,
     NONAME = 276,
     PRIVATE = 277,
     SINGLE = 278,
     MULTIPLE = 279,
     INITINSTANCE = 280,
     INITGLOBAL = 281,
     TERMINSTANCE = 282,
     TERMGLOBAL = 283,
     EQUAL = 284,
     ID = 285,
     NUMBER = 286
   };
#endif
#define NAME 258
#define LIBRARY 259
#define DESCRIPTION 260
#define STACKSIZE 261
#define HEAPSIZE 262
#define CODE 263
#define DATA 264
#define SECTIONS 265
#define EXPORTS 266
#define IMPORTS 267
#define VERSIONK 268
#define BASE 269
#define CONSTANT 270
#define READ 271
#define WRITE 272
#define EXECUTE 273
#define SHARED 274
#define NONSHARED 275
#define NONAME 276
#define PRIVATE 277
#define SINGLE 278
#define MULTIPLE 279
#define INITINSTANCE 280
#define INITGLOBAL 281
#define TERMINSTANCE 282
#define TERMGLOBAL 283
#define EQUAL 284
#define ID 285
#define NUMBER 286




/* Copy the first part of user declarations.  */
#line 1 "defparse.y"
 /* defparse.y - parser for .def files */

/* Copyright 1995, 1997, 1998, 1999, 2001, 2004, 2005, 2007
   Free Software Foundation, Inc.
   
   This file is part of GNU Binutils.
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libiberty.h"
#include "dlltool.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 29 "defparse.y"
typedef union YYSTYPE {
  char *id;
  int number;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 171 "defparse.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 183 "defparse.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  24
/* YYNRULES -- Number of rules. */
#define YYNRULES  70
/* YYNRULES -- Number of states. */
#define YYNSTATES  109

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,    32,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    17,    20,    23,    27,
      31,    34,    37,    40,    43,    46,    51,    52,    55,    64,
      67,    69,    78,    87,    94,   101,   108,   115,   120,   125,
     128,   130,   133,   137,   139,   141,   142,   145,   146,   148,
     150,   152,   154,   156,   158,   160,   162,   163,   165,   166,
     168,   169,   171,   172,   174,   178,   179,   182,   183,   186,
     187,   190,   195,   196,   200,   201,   202,   206,   208,   210,
     212
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      37,     0,    -1,    37,    38,    -1,    38,    -1,     3,    53,
      57,    -1,     4,    53,    57,    58,    -1,    11,    39,    -1,
       5,    30,    -1,     6,    31,    47,    -1,     7,    31,    47,
      -1,     8,    45,    -1,     9,    45,    -1,    10,    43,    -1,
      12,    41,    -1,    13,    31,    -1,    13,    31,    32,    31,
      -1,    -1,    39,    40,    -1,    30,    56,    54,    50,    49,
      51,    52,    55,    -1,    41,    42,    -1,    42,    -1,    30,
      33,    30,    32,    30,    32,    30,    55,    -1,    30,    33,
      30,    32,    30,    32,    31,    55,    -1,    30,    33,    30,
      32,    30,    55,    -1,    30,    33,    30,    32,    31,    55,
      -1,    30,    32,    30,    32,    30,    55,    -1,    30,    32,
      30,    32,    31,    55,    -1,    30,    32,    30,    55,    -1,
      30,    32,    31,    55,    -1,    43,    44,    -1,    44,    -1,
      30,    45,    -1,    45,    46,    48,    -1,    48,    -1,    34,
      -1,    -1,    34,    31,    -1,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    20,    -1,    23,    -1,    24,    -1,
      15,    -1,    -1,    21,    -1,    -1,     9,    -1,    -1,    22,
      -1,    -1,    30,    -1,    30,    32,    30,    -1,    -1,    35,
      31,    -1,    -1,    29,    30,    -1,    -1,    33,    30,    -1,
      33,    30,    32,    30,    -1,    -1,    14,    33,    31,    -1,
      -1,    -1,    58,    46,    59,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    47,    47,    48,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    67,    69,    73,    78,
      79,    83,    85,    87,    89,    91,    93,    95,    97,   102,
     103,   107,   111,   112,   116,   117,   119,   120,   124,   125,
     126,   127,   128,   129,   130,   134,   135,   139,   140,   144,
     145,   149,   150,   153,   154,   160,   164,   165,   169,   170,
     174,   175,   181,   184,   185,   188,   190,   194,   195,   196,
     197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "LIBRARY", "DESCRIPTION",
  "STACKSIZE", "HEAPSIZE", "CODE", "DATA", "SECTIONS", "EXPORTS",
  "IMPORTS", "VERSIONK", "BASE", "CONSTANT", "READ", "WRITE", "EXECUTE",
  "SHARED", "NONSHARED", "NONAME", "PRIVATE", "SINGLE", "MULTIPLE",
  "INITINSTANCE", "INITGLOBAL", "TERMINSTANCE", "TERMGLOBAL", "EQUAL",
  "ID", "NUMBER", "'.'", "'='", "','", "'@'", "$accept", "start",
  "command", "explist", "expline", "implist", "impline", "seclist",
  "secline", "attr_list", "opt_comma", "opt_number", "attr",
  "opt_CONSTANT", "opt_NONAME", "opt_DATA", "opt_PRIVATE", "opt_name",
  "opt_ordinal", "opt_import_name", "opt_equal_name", "opt_base",
  "option_list", "option", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    46,    61,    44,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    36,    37,    37,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    42,    42,    42,    42,    42,    42,    43,
      43,    44,    45,    45,    46,    46,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    59,
      59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     3,     4,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     4,     0,     2,     8,     2,
       1,     8,     8,     6,     6,     6,     6,     4,     4,     2,
       1,     2,     3,     1,     1,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     3,     0,     2,     0,     2,     0,
       2,     4,     0,     3,     0,     0,     3,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,    55,    55,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     3,    53,    64,    64,     7,    37,    37,
      38,    39,    40,    41,    42,    43,    44,    10,    33,    11,
       0,    12,    30,     6,     0,    13,    20,    14,     1,     2,
       0,     0,     4,    65,     0,     8,     9,    34,     0,    31,
      29,    62,    17,     0,     0,    19,     0,    54,     0,     5,
      36,    32,     0,    57,    59,    59,     0,    15,    63,     0,
      60,     0,    48,     0,     0,    27,    28,     0,    67,    68,
      69,    70,    66,     0,    56,    47,    46,    58,    59,    59,
      59,    59,    61,    45,    50,    25,    26,     0,    23,    24,
      49,    52,    59,    59,    51,    59,    21,    22,    18
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,    12,    13,    33,    52,    35,    36,    31,    32,    27,
      48,    45,    28,    94,    86,   101,   105,    15,    72,    75,
      63,    42,    59,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yysigned_char yypact[] =
{
      50,   -29,   -29,    -8,   -28,    10,    48,    48,    40,   -66,
      47,    38,    39,   -66,    46,    65,    65,   -66,    49,    49,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,    -6,   -66,    -6,
      48,    40,   -66,    51,   -12,    47,   -66,    52,   -66,   -66,
      55,    53,   -66,   -66,    56,   -66,   -66,   -66,    48,    -6,
     -66,    57,   -66,     3,    58,   -66,    60,   -66,    61,   -19,
     -66,   -66,    59,    62,   -27,    64,    63,   -66,   -66,     4,
      66,    68,    73,    70,     5,   -66,   -66,    43,   -66,   -66,
     -66,   -66,   -66,    71,   -66,   -66,    67,   -66,    64,    64,
     -13,    64,   -66,   -66,    87,   -66,   -66,    45,   -66,   -66,
     -66,    80,    64,    64,   -66,    64,   -66,   -66,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -66,   -66,    91,   -66,   -66,   -66,    69,   -66,    74,    -3,
      21,    88,    72,   -66,   -66,   -66,   -66,   104,   -66,   -65,
     -66,    92,   -66,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yysigned_char yytable[] =
{
      76,    14,    73,    18,    29,    74,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,    47,    73,   -35,   -35,    97,
      53,    54,    17,    95,    96,    98,    99,    49,    47,    78,
      79,    80,    81,    64,    65,    88,    89,   106,   107,    38,
     108,    19,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    20,    21,    22,    23,    24,    37,
      30,    25,    26,    90,    91,   102,   103,    34,    40,    41,
      69,    51,    93,    44,    56,    57,    58,    60,    66,    70,
      62,    67,    68,    73,    85,    77,   100,    71,    83,    84,
      87,    92,   104,    39,    55,    50,    16,    46,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61
};

static const yysigned_char yycheck[] =
{
      65,    30,    29,    31,     7,    32,    25,    26,    27,    28,
      16,    17,    18,    19,    20,    34,    29,    23,    24,    32,
      32,    33,    30,    88,    89,    90,    91,    30,    34,    25,
      26,    27,    28,    30,    31,    30,    31,   102,   103,     0,
     105,    31,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    17,    18,    19,    20,    31,
      30,    23,    24,    30,    31,    30,    31,    30,    32,    14,
      59,    30,    15,    34,    32,    30,    33,    31,    30,    30,
      33,    31,    31,    29,    21,    32,     9,    35,    32,    31,
      30,    30,    22,    12,    35,    31,     2,    19,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    37,    38,    30,    53,    53,    30,    31,    31,
      16,    17,    18,    19,    20,    23,    24,    45,    48,    45,
      30,    43,    44,    39,    30,    41,    42,    31,     0,    38,
      32,    14,    57,    57,    34,    47,    47,    34,    46,    45,
      44,    30,    40,    32,    33,    42,    32,    30,    33,    58,
      31,    48,    33,    56,    30,    31,    30,    31,    31,    46,
      30,    35,    54,    29,    32,    55,    55,    32,    25,    26,
      27,    28,    59,    32,    31,    21,    50,    30,    30,    31,
      30,    31,    30,    15,    49,    55,    55,    32,    55,    55,
       9,    51,    30,    31,    22,    52,    55,    55,    55
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 52 "defparse.y"
    { def_name (yyvsp[-1].id, yyvsp[0].number); }
    break;

  case 5:
#line 53 "defparse.y"
    { def_library (yyvsp[-2].id, yyvsp[-1].number); }
    break;

  case 7:
#line 55 "defparse.y"
    { def_description (yyvsp[0].id);}
    break;

  case 8:
#line 56 "defparse.y"
    { def_stacksize (yyvsp[-1].number, yyvsp[0].number);}
    break;

  case 9:
#line 57 "defparse.y"
    { def_heapsize (yyvsp[-1].number, yyvsp[0].number);}
    break;

  case 10:
#line 58 "defparse.y"
    { def_code (yyvsp[0].number);}
    break;

  case 11:
#line 59 "defparse.y"
    { def_data (yyvsp[0].number);}
    break;

  case 14:
#line 62 "defparse.y"
    { def_version (yyvsp[0].number,0);}
    break;

  case 15:
#line 63 "defparse.y"
    { def_version (yyvsp[-2].number,yyvsp[0].number);}
    break;

  case 18:
#line 75 "defparse.y"
    { def_exports (yyvsp[-7].id, yyvsp[-6].id, yyvsp[-5].number, yyvsp[-4].number, yyvsp[-3].number, yyvsp[-2].number, yyvsp[-1].number, yyvsp[0].id);}
    break;

  case 21:
#line 84 "defparse.y"
    { def_import (yyvsp[-7].id,yyvsp[-5].id,yyvsp[-3].id,yyvsp[-1].id, 0, yyvsp[0].id); }
    break;

  case 22:
#line 86 "defparse.y"
    { def_import (yyvsp[-7].id,yyvsp[-5].id,yyvsp[-3].id, 0,yyvsp[-1].number, yyvsp[0].id); }
    break;

  case 23:
#line 88 "defparse.y"
    { def_import (yyvsp[-5].id,yyvsp[-3].id, 0,yyvsp[-1].id, 0, yyvsp[0].id); }
    break;

  case 24:
#line 90 "defparse.y"
    { def_import (yyvsp[-5].id,yyvsp[-3].id, 0, 0,yyvsp[-1].number, yyvsp[0].id); }
    break;

  case 25:
#line 92 "defparse.y"
    { def_import ( 0,yyvsp[-5].id,yyvsp[-3].id,yyvsp[-1].id, 0, yyvsp[0].id); }
    break;

  case 26:
#line 94 "defparse.y"
    { def_import ( 0,yyvsp[-5].id,yyvsp[-3].id, 0,yyvsp[-1].number, yyvsp[0].id); }
    break;

  case 27:
#line 96 "defparse.y"
    { def_import ( 0,yyvsp[-3].id, 0,yyvsp[-1].id, 0, yyvsp[0].id); }
    break;

  case 28:
#line 98 "defparse.y"
    { def_import ( 0,yyvsp[-3].id, 0, 0,yyvsp[-1].number, yyvsp[0].id); }
    break;

  case 31:
#line 107 "defparse.y"
    { def_section (yyvsp[-1].id,yyvsp[0].number);}
    break;

  case 36:
#line 119 "defparse.y"
    { yyval.number=yyvsp[0].number;}
    break;

  case 37:
#line 120 "defparse.y"
    { yyval.number=-1;}
    break;

  case 38:
#line 124 "defparse.y"
    { yyval.number = 1; }
    break;

  case 39:
#line 125 "defparse.y"
    { yyval.number = 2; }
    break;

  case 40:
#line 126 "defparse.y"
    { yyval.number = 4; }
    break;

  case 41:
#line 127 "defparse.y"
    { yyval.number = 8; }
    break;

  case 42:
#line 128 "defparse.y"
    { yyval.number = 0; }
    break;

  case 43:
#line 129 "defparse.y"
    { yyval.number = 0; }
    break;

  case 44:
#line 130 "defparse.y"
    { yyval.number = 0; }
    break;

  case 45:
#line 134 "defparse.y"
    {yyval.number=1;}
    break;

  case 46:
#line 135 "defparse.y"
    {yyval.number=0;}
    break;

  case 47:
#line 139 "defparse.y"
    {yyval.number=1;}
    break;

  case 48:
#line 140 "defparse.y"
    {yyval.number=0;}
    break;

  case 49:
#line 144 "defparse.y"
    { yyval.number = 1; }
    break;

  case 50:
#line 145 "defparse.y"
    { yyval.number = 0; }
    break;

  case 51:
#line 149 "defparse.y"
    { yyval.number = 1; }
    break;

  case 52:
#line 150 "defparse.y"
    { yyval.number = 0; }
    break;

  case 53:
#line 153 "defparse.y"
    { yyval.id =yyvsp[0].id; }
    break;

  case 54:
#line 155 "defparse.y"
    { 
	    char *name = xmalloc (strlen (yyvsp[-2].id) + 1 + strlen (yyvsp[0].id) + 1);
	    sprintf (name, "%s.%s", yyvsp[-2].id, yyvsp[0].id);
	    yyval.id = name;
	  }
    break;

  case 55:
#line 160 "defparse.y"
    { yyval.id=""; }
    break;

  case 56:
#line 164 "defparse.y"
    { yyval.number=yyvsp[0].number;}
    break;

  case 57:
#line 165 "defparse.y"
    { yyval.number=-1;}
    break;

  case 58:
#line 169 "defparse.y"
    { yyval.id = yyvsp[0].id; }
    break;

  case 59:
#line 170 "defparse.y"
    { yyval.id = 0; }
    break;

  case 60:
#line 174 "defparse.y"
    { yyval.id = yyvsp[0].id; }
    break;

  case 61:
#line 176 "defparse.y"
    { 
	    char *name = xmalloc (strlen (yyvsp[-2].id) + 1 + strlen (yyvsp[0].id) + 1);
	    sprintf (name, "%s.%s", yyvsp[-2].id, yyvsp[0].id);
	    yyval.id = name;
	  }
    break;

  case 62:
#line 181 "defparse.y"
    { yyval.id =  0; }
    break;

  case 63:
#line 184 "defparse.y"
    { yyval.number= yyvsp[0].number;}
    break;

  case 64:
#line 185 "defparse.y"
    { yyval.number=-1;}
    break;


    }

/* Line 1000 of yacc.c.  */
#line 1421 "defparse.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}



