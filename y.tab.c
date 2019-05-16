/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "compiler_hw2.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

/* Symbol table function - you can add new function if needed. */
void yyerror(char*);
int lookup_symbol(char*);
void create_symbol();
void insert_symbol(char*, char*, char*, int);
void dump_symbol();

struct symbolTableStruct {
    char name[64];
    char entryType[16];
    char dataType[16];
    int scopeLevel;
    int formalParameters[10];
};

struct symbolTableStruct symbolTable[30];
int currentIndex;


    

#line 98 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINT = 258,
    SEMICOLON = 259,
    ADD = 260,
    SUB = 261,
    MUL = 262,
    DIV = 263,
    MOD = 264,
    INC = 265,
    DEC = 266,
    MT = 267,
    LT = 268,
    MTE = 269,
    LTE = 270,
    EQ = 271,
    NE = 272,
    ASGN = 273,
    ADDASGN = 274,
    SUBASGN = 275,
    MULASGN = 276,
    DIVASGN = 277,
    MODASGN = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    LB = 282,
    RB = 283,
    LCB = 284,
    RCB = 285,
    LSB = 286,
    RSB = 287,
    COMMA = 288,
    IF = 289,
    ELSE = 290,
    FOR = 291,
    WHILE = 292,
    I_CONST = 293,
    F_CONST = 294,
    S_CONST = 295,
    INT = 296,
    FLOAT = 297,
    BOOL = 298,
    STRING = 299,
    VOID = 300,
    TR = 301,
    FA = 302,
    RET = 303,
    ID = 304
  };
#endif
/* Tokens.  */
#define PRINT 258
#define SEMICOLON 259
#define ADD 260
#define SUB 261
#define MUL 262
#define DIV 263
#define MOD 264
#define INC 265
#define DEC 266
#define MT 267
#define LT 268
#define MTE 269
#define LTE 270
#define EQ 271
#define NE 272
#define ASGN 273
#define ADDASGN 274
#define SUBASGN 275
#define MULASGN 276
#define DIVASGN 277
#define MODASGN 278
#define AND 279
#define OR 280
#define NOT 281
#define LB 282
#define RB 283
#define LCB 284
#define RCB 285
#define LSB 286
#define RSB 287
#define COMMA 288
#define IF 289
#define ELSE 290
#define FOR 291
#define WHILE 292
#define I_CONST 293
#define F_CONST 294
#define S_CONST 295
#define INT 296
#define FLOAT 297
#define BOOL 298
#define STRING 299
#define VOID 300
#define TR 301
#define FA 302
#define RET 303
#define ID 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    double f_val;
    char* string;
    int b_val;
    int v_val;

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   539

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,    50,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,     2,
       2,     2,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,    51,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    78,    82,    83,    84,    85,    86,
      91,    92,    93,    94,    95,    96,   100,   101,   105,   106,
     107,   108,   112,   113,   114,   115,   116,   117,   121,   125,
     126,   127,   128,   132,   133,   134,   138,   142,   143,   144,
     145,   146,   150,   151,   152,   156,   157,   161,   162,   166,
     167,   171,   172,   176,   177,   181,   182,   186,   187,   191,
     192,   193,   194,   195,   196,   200,   201,   205,   206,   210,
     211,   215,   216,   217,   218,   219,   223,   224,   228,   229,
     233,   234,   235,   236,   237,   241,   242,   246,   247,   251,
     252,   256,   257,   258,   259,   260,   261,   262,   266,   267,
     271,   272,   276,   277,   281,   282,   286,   287,   291,   292,
     293,   294,   295,   299,   300,   304,   308,   309,   313,   314,
     318,   319,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SEMICOLON", "ADD", "SUB",
  "MUL", "DIV", "MOD", "INC", "DEC", "MT", "LT", "MTE", "LTE", "EQ", "NE",
  "ASGN", "ADDASGN", "SUBASGN", "MULASGN", "DIVASGN", "MODASGN", "AND",
  "OR", "NOT", "LB", "RB", "LCB", "RCB", "LSB", "RSB", "COMMA", "IF",
  "ELSE", "FOR", "WHILE", "I_CONST", "F_CONST", "S_CONST", "INT", "FLOAT",
  "BOOL", "STRING", "VOID", "TR", "FA", "RET", "ID", "'&'", "'~'", "'!'",
  "'^'", "'|'", "'?'", "':'", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "declaration_specifiers", "type", "init_declarator_list",
  "init_declarator", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "print_statement", "function_statement", "program",
  "external_declaration", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      38,   126,    33,    94,   124,    63,    58
};
# endif

#define YYPACT_NINF -131

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-131)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     164,  -131,  -131,  -131,  -131,  -131,  -131,     6,   164,     4,
    -131,  -131,  -131,   -15,  -131,     7,  -131,    -2,  -131,  -131,
    -131,     1,  -131,   -15,   487,   155,   130,  -131,  -131,  -131,
      -1,  -131,  -131,  -131,   487,   487,   487,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,    25,    56,
     487,  -131,    79,    64,  -131,   136,   122,   -30,   -21,    43,
      20,   -18,  -131,  -131,  -131,  -131,   -15,   -10,  -131,    -9,
      76,  -131,  -131,    80,    86,    88,   298,   131,  -131,    17,
    -131,     6,  -131,  -131,   184,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,    26,  -131,  -131,   361,   487,  -131,
    -131,  -131,  -131,  -131,  -131,   487,  -131,  -131,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   134,  -131,   164,  -131,    11,
      44,   487,   249,   487,  -131,    18,   376,  -131,   487,  -131,
    -131,  -131,  -131,    29,  -131,   110,  -131,  -131,  -131,  -131,
      79,    79,  -131,  -131,  -131,  -131,   136,   136,   122,   -30,
     -21,    43,    20,   -25,  -131,  -131,   137,    39,   313,   313,
      52,  -131,    49,    66,  -131,  -131,   487,  -131,   487,   180,
     234,   424,   439,   234,  -131,   181,  -131,  -131,  -131,   157,
     234,    72,   234,    78,  -131,  -131,   234,  -131,   234,  -131,
     234,  -131,  -131,  -131
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    71,    72,    74,    73,    75,   121,     0,    70,     0,
     118,   120,    67,     0,    80,     0,    76,    79,    69,     1,
     119,     0,    68,     0,     0,     0,     0,   122,    81,    77,
      79,    24,    25,    23,     0,     0,     0,     5,     6,     7,
       8,     9,     2,    22,    26,    27,    10,     3,    18,    28,
       0,    29,    33,    36,    37,    42,    45,    47,    49,    51,
      53,    55,    57,    78,    83,    89,    88,     0,    85,     0,
       0,   104,    98,     0,     0,     0,     0,     2,    65,     0,
     102,     0,   103,    91,     0,   100,    92,    93,    94,    95,
      96,    97,    19,    20,     0,    14,    15,     0,     0,    59,
      63,    64,    60,    61,    62,     0,    28,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    82,     0,    84,     0,
       0,     0,     0,     0,   113,     0,     0,   105,     0,    99,
     101,     4,    12,     0,    16,     0,    58,    30,    31,    32,
      34,    35,    39,    38,    41,    40,    43,    44,    46,    48,
      50,    52,    54,     0,    86,    90,     0,     0,     0,     0,
       0,   114,     0,     0,    66,    13,     0,    11,     0,     0,
       0,     0,     0,     0,   117,     0,    17,    56,   115,   107,
       0,     0,     0,     0,   108,   116,     0,   111,     0,   109,
       0,   106,   112,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,    63,  -131,  -131,  -131,     8,  -131,   -44,    33,  -131,
      40,    45,    82,    83,    81,    90,    87,  -131,    37,   -24,
    -131,   -35,   -23,     5,  -131,  -131,   193,     2,  -131,    92,
    -131,   -88,   200,  -131,   158,  -130,  -131,  -131,  -131,  -131,
    -131,  -131,   237,  -131
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,   143,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    78,
     105,    79,     6,    81,     8,    15,    16,    30,    67,    68,
      69,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,     9,    10,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,    94,   169,    80,    19,     7,   107,   123,   138,    17,
      12,    22,    13,    18,     7,    21,    24,    24,   126,   128,
     119,   137,   171,   127,   129,    25,    25,    26,    25,    28,
      66,   178,   120,    13,    14,    95,    96,   124,   181,   182,
      23,   135,    92,    93,   122,     1,     2,     3,     4,     5,
     138,   138,    97,   184,   141,    14,    98,   175,   106,   138,
     165,    80,   176,   145,   147,   148,   149,   180,   125,   111,
     112,    36,   138,   144,    99,   100,   101,   102,   103,   104,
     183,   146,    37,    38,    39,   138,   108,   109,   110,   163,
      40,    41,   189,    42,   185,   194,   167,   121,   170,   138,
     198,   173,   197,   130,   199,   138,   200,   131,   201,   168,
     202,   138,   203,   132,   174,   133,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,    66,    70,    71,    31,    32,    33,   117,   118,
      34,    35,   177,   138,   150,   151,   191,   193,   113,   114,
     115,   116,   186,   152,   153,   154,   155,    36,   136,    26,
      72,    25,   156,   157,    73,   179,    74,    75,    37,    38,
      39,     1,     2,     3,     4,     5,    40,    41,    76,    77,
      43,    44,    45,    64,   188,   195,   106,    70,    71,    31,
      32,    33,   196,   166,    34,    35,     1,     2,     3,     4,
       5,   158,   160,   159,    65,     1,     2,     3,     4,     5,
     162,    36,   161,    26,   139,   187,    29,    27,    73,   164,
      74,    75,    37,    38,    39,     1,     2,     3,     4,     5,
      40,    41,    76,    77,    43,    44,    45,    70,    71,    31,
      32,    33,   140,     0,    34,    35,    20,     0,     0,     0,
       0,     0,     0,    71,    31,    32,    33,     0,     0,    34,
      35,    36,     0,    26,     0,     0,     0,     0,    73,     0,
      74,    75,    37,    38,    39,     0,    36,     0,     0,     0,
      40,    41,    76,    77,    43,    44,    45,    37,    38,    39,
       1,     2,     3,     4,     5,    40,    41,     0,    42,    43,
      44,    45,   134,    31,    32,    33,     0,     0,    34,    35,
       0,     0,     0,     0,     0,     0,     0,    71,    31,    32,
      33,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      36,     0,     0,     0,    40,    41,     0,    42,    43,    44,
      45,    37,    38,    39,     0,     0,     0,     0,     0,    40,
      41,     0,    42,    43,    44,    45,    31,    32,    33,     0,
       0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,     0,     0,    34,    35,    36,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,     0,    36,   172,     0,     0,    40,    41,     0,
      42,    43,    44,    45,    37,    38,    39,     0,     0,     0,
       0,     0,    40,    41,     0,    42,    43,    44,    45,    31,
      32,    33,     0,     0,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,     0,     0,    34,
      35,    36,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    36,   192,     0,     0,
      40,    41,     0,    42,    43,    44,    45,    37,    38,    39,
       0,     0,     0,     0,     0,    40,    41,     0,    42,    43,
      44,    45,    31,    32,    33,     0,     0,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,     0,     0,
       0,     0,     0,    40,    41,     0,    42,    43,    44,    45
};

static const yytype_int16 yycheck[] =
{
      24,    36,   132,    26,     0,     0,    50,    25,    33,     7,
       4,     4,    27,     8,     9,    13,    18,    18,    28,    28,
      50,     4,     4,    33,    33,    27,    27,    29,    27,    28,
      25,    56,    53,    27,    49,    10,    11,    55,   168,   169,
      33,    76,    34,    35,    24,    41,    42,    43,    44,    45,
      33,    33,    27,     4,    28,    49,    31,    28,    50,    33,
      49,    84,    33,    98,   108,   109,   110,    28,    66,     5,
       6,    27,    33,    97,    18,    19,    20,    21,    22,    23,
      28,   105,    38,    39,    40,    33,     7,     8,     9,   124,
      46,    47,   180,    49,    28,   183,   131,    54,   133,    33,
      28,   136,   190,    27,   192,    33,    28,    27,   196,   132,
     198,    33,   200,    27,   138,    27,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   127,     3,     4,     5,     6,     7,    16,    17,
      10,    11,    32,    33,   111,   112,   181,   182,    12,    13,
      14,    15,   176,   113,   114,   115,   116,    27,    27,    29,
      30,    27,   117,   118,    34,    28,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    28,     4,     4,   178,     3,     4,     5,
       6,     7,    35,   130,    10,    11,    41,    42,    43,    44,
      45,   119,   121,   120,    49,    41,    42,    43,    44,    45,
     123,    27,   122,    29,    30,   178,    23,    17,    34,   127,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     3,     4,     5,
       6,     7,    84,    -1,    10,    11,     9,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,    10,
      11,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    40,    -1,    27,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,     4,     5,     6,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    10,    11,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      27,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    52,     5,     6,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    10,    11,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    27,    28,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    52,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    52,     5,
       6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    10,
      11,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    -1,    27,    28,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    52,     5,     6,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,    43,    44,    45,    79,    80,    81,    98,
      99,   100,     4,    27,    49,    82,    83,    84,    80,     0,
      99,    84,     4,    33,    18,    27,    29,    89,    28,    83,
      84,     5,     6,     7,    10,    11,    27,    38,    39,    40,
      46,    47,    49,    50,    51,    52,    58,    59,    60,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    28,    49,    80,    85,    86,    87,
       3,     4,    30,    34,    36,    37,    48,    49,    76,    78,
      79,    80,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    62,    62,    78,    10,    11,    27,    31,    18,
      19,    20,    21,    22,    23,    77,    62,    64,     7,     8,
       9,     5,     6,    12,    13,    14,    15,    16,    17,    50,
      53,    54,    24,    25,    55,    84,    28,    33,    28,    33,
      27,    27,    27,    27,     4,    78,    27,     4,    33,    30,
      91,    28,    28,    61,    76,    78,    76,    64,    64,    64,
      65,    65,    67,    67,    67,    67,    68,    68,    69,    70,
      71,    72,    73,    78,    86,    49,    58,    78,    79,    92,
      78,     4,    28,    78,    76,    28,    33,    32,    56,    28,
      28,    92,    92,    28,     4,    28,    76,    75,     4,    88,
      28,    78,    28,    78,    88,     4,    35,    88,    28,    88,
      28,    88,    88,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    65,
      65,    65,    65,    66,    66,    66,    67,    68,    68,    68,
      68,    68,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    95,    95,    96,    97,    97,    98,    98,
      99,    99,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     4,     2,     2,     1,     3,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     3,     4,     3,     4,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     2,     1,     1,     1,     2,     7,     5,     5,     6,
       7,     6,     7,     2,     3,     5,     5,     4,     1,     2,
       1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 76 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("ID %s in primary expression.\n", (yyvsp[0].string)); }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("INT %d.\n", (yyvsp[0].i_val)); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("FLOAT %f.\n", (yyvsp[0].f_val)); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("STRING %s.\n", (yyvsp[0].string)); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 205 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("declaration semi.\n"); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 206 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("declaration semicolon.\n"); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 210 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("type declaration_specifiers.\n"); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("type.\n"); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 215 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); printf("%s IS DETECTED.\n", (yyvsp[0].string)); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 216 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); printf("%s IS DETECTED.\n", (yyvsp[0].string)); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 217 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); printf("BOOL IS DETECTED.\n"); }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 218 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); printf("%s IS DETECTED.\n", (yyvsp[0].string)); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 219 "compiler_hw2.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); printf("%s IS DETECTED.\n", (yyvsp[0].string)); }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 223 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("init declarator list.\n"); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 224 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("init declarator list 2.\n"); }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 228 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("init_declarator.\n"); }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 229 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("init_declarator 2.\n"); }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 233 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("ID %s.\n", (yyvsp[0].string)); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 235 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("declarators in LB RB 1.\n"); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 237 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("declarators in LB RB 2.\n"); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 256 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("compound statement.\n"); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 257 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("expression statement.\n"); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 258 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("selection statement.\n"); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 259 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("iteration statement.\n"); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 260 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("jump statement.\n"); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 261 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("print statement.\n"); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 262 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("function statement.\n"); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 266 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("compound 1.\n"); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 267 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("compound 2.\n"); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 271 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("block item list 1.\n"); }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 272 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("block item list 2.\n"); }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 276 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("block_item 1.\n"); }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 277 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("block_item 2.\n"); }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 291 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("while statement.\n"); }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 299 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("return no argument.\n"); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 300 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("return with argument.\n"); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 313 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("hahaha\n"); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 314 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("hahaha2\n"); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 318 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("func definition.\n"); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 319 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("declaration.\n"); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 324 "compiler_hw2.y" /* yacc.c:1646  */
    { printf("function definition.\n"); }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1809 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 328 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{   
	yylineno = 0;

    create_symbol();

    yyparse();
	printf("\nTotal lines: %d \n",yylineno);

    return 0;
}

void yyerror(char *s)
{
    printf("\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n\n");
}

void create_symbol() {
	currentIndex = -1;
	for(int i=0; i<30; i++) {
		strcpy(symbolTable[i].name, "\0");
		strcpy(symbolTable[i].entryType, "\0");
		strcpy(symbolTable[i].dataType, "\0");
		symbolTable[i].scopeLevel = -1;
		for(int j=0; j<10; j++) symbolTable[i].formalParameters[j] = -1;
		}
}

void insert_symbol(char *insertName, char *insertEntryType, char *insertDataType, int insertScopeLevel) {
	if(lookup_symbol(insertName) == 0) {
		currentIndex = currentIndex + 1;
		strcpy(symbolTable[currentIndex].name, insertName);
		strcpy(symbolTable[currentIndex].entryType, insertEntryType);
		strcpy(symbolTable[currentIndex].dataType, insertDataType);
		symbolTable[currentIndex].scopeLevel = insertScopeLevel;
		// formal parameters not finished yet
	}
	else {
		// semantic error 
	}
}

int lookup_symbol(char *lookupName) {
	int same = 0;
	for(int i=0; i<30; i++) {
		if(strcmp(symbolTable[i].name, lookupName) == 1) {
			same = 1;
			break;
			}
		}
	return same;
}

void dump_symbol() {
	if(currentIndex == -1) return;

    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");

	for(int i=0; i<=currentIndex; i++) {
		printf("%-10d%-10s%-12s%-10s%-10d", i, symbolTable[i].name, symbolTable[i].entryType, symbolTable[i].dataType, symbolTable[i].scopeLevel);
		int j=0;
		while(symbolTable[i].formalParameters[j] != 0 && j<10) {
			if(j != 0) printf(", ");
			if(symbolTable[i].formalParameters[j] == 1) printf("int");
			else if(symbolTable[i].formalParameters[j] == 2) printf("float");
			else if(symbolTable[i].formalParameters[j] == 3) printf("string");
			else if(symbolTable[i].formalParameters[j] == 4) printf("bool");
			else if(symbolTable[i].formalParameters[j] == 5) printf("void");
			j = j + 1;
			}
		}
	create_symbol();
}
