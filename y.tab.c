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
extern int error;


/* Symbol table function - you can add new function if needed. */
void yyerror(char*);
int lookup_symbol(char*, int);
void create_symbol(int);
void insert_symbol(char*, char*, char*, int, int, char*);
void dump_symbol(int);

char name[64];
char entryType[16];
char dataType[16];
extern int scopeLevel;


struct symbolTableStruct {
    char name[64];
    char entryType[16];
    char dataType[16];
    int scopeLevel;
    char formalParameters[64];
};

struct symbolTableStruct symbolTable[30];
int currentIndex;
int formalPIndex;
char errorMessage[64];


    

#line 108 "y.tab.c" /* yacc.c:339  */

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
    ADDASGN = 273,
    SUBASGN = 274,
    MULASGN = 275,
    DIVASGN = 276,
    MODASGN = 277,
    AND = 278,
    OR = 279,
    NOT = 280,
    LB = 281,
    RB = 282,
    LCB = 283,
    RCB = 284,
    LSB = 285,
    RSB = 286,
    COMMA = 287,
    IF = 288,
    ELSE = 289,
    FOR = 290,
    WHILE = 291,
    C_COMMENT = 292,
    CPP_COMMENT = 293,
    I_CONST = 294,
    F_CONST = 295,
    S_CONST = 296,
    INT = 297,
    FLOAT = 298,
    BOOL = 299,
    STRING = 300,
    VOID = 301,
    TR = 302,
    FA = 303,
    RET = 304,
    ID = 305,
    ASGN = 306
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
#define ADDASGN 273
#define SUBASGN 274
#define MULASGN 275
#define DIVASGN 276
#define MODASGN 277
#define AND 278
#define OR 279
#define NOT 280
#define LB 281
#define RB 282
#define LCB 283
#define RCB 284
#define LSB 285
#define RSB 286
#define COMMA 287
#define IF 288
#define ELSE 289
#define FOR 290
#define WHILE 291
#define C_COMMENT 292
#define CPP_COMMENT 293
#define I_CONST 294
#define F_CONST 295
#define S_CONST 296
#define INT 297
#define FLOAT 298
#define BOOL 299
#define STRING 300
#define VOID 301
#define TR 302
#define FA 303
#define RET 304
#define ID 305
#define ASGN 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    double f_val;
    char* string;
    int b_val;
    int v_val;

#line 258 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 275 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,     2,    52,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,     2,
       2,     2,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,    53,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    96,    97,   101,   102,   103,   104,   105,
     110,   111,   112,   113,   114,   115,   119,   120,   124,   125,
     126,   127,   131,   132,   133,   134,   135,   136,   140,   144,
     145,   146,   147,   151,   152,   153,   157,   161,   162,   163,
     164,   165,   169,   170,   171,   175,   176,   180,   181,   185,
     186,   190,   191,   195,   196,   200,   201,   205,   206,   210,
     211,   212,   213,   214,   215,   219,   220,   225,   230,   238,
     239,   243,   244,   245,   246,   247,   252,   257,   258,   259,
     264,   265,   269,   275,   279,   280,   281,   282,   283,   284,
     285,   289,   290,   296,   297,   301,   302,   306,   307,   311,
     312,   316,   317,   318,   319,   320,   324,   325,   329,   333,
     337,   345,   356,   357,   361,   362,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SEMICOLON", "ADD", "SUB",
  "MUL", "DIV", "MOD", "INC", "DEC", "MT", "LT", "MTE", "LTE", "EQ", "NE",
  "ADDASGN", "SUBASGN", "MULASGN", "DIVASGN", "MODASGN", "AND", "OR",
  "NOT", "LB", "RB", "LCB", "RCB", "LSB", "RSB", "COMMA", "IF", "ELSE",
  "FOR", "WHILE", "C_COMMENT", "CPP_COMMENT", "I_CONST", "F_CONST",
  "S_CONST", "INT", "FLOAT", "BOOL", "STRING", "VOID", "TR", "FA", "RET",
  "ID", "ASGN", "'&'", "'~'", "'!'", "'^'", "'|'", "'?'", "':'", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "declaration_specifiers", "type",
  "declarator", "parameter_list", "parameter_declaration", "statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "print_statement", "function_statement_semicolon",
  "function_statement", "program", "external_declaration",
  "function_definition", YY_NULLPTR
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
     305,   306,    38,   126,    33,    94,   124,    63,    58
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,  -121,  -121,  -121,  -121,  -121,  -121,    -4,    40,    47,
    -121,  -121,    19,     0,    69,  -121,  -121,  -121,  -121,     1,
    -121,   493,   151,   127,  -121,  -121,  -121,  -121,  -121,   493,
     493,   493,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   131,    -1,   493,  -121,     5,    59,  -121,
     186,    56,   -46,   -45,   -33,     3,   -13,  -121,    51,  -121,
      54,    -2,  -121,   110,  -121,  -121,   117,   126,   128,    27,
     132,  -121,     4,  -121,   109,  -121,  -121,   181,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   102,  -121,  -121,    22,  -121,
    -121,   357,   493,  -121,  -121,  -121,  -121,  -121,  -121,   493,
    -121,  -121,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,  -121,
    -121,  -121,    40,    61,   493,   284,   493,  -121,    20,   375,
    -121,   493,     0,  -121,  -121,  -121,  -121,  -121,    31,  -121,
     116,  -121,  -121,  -121,  -121,     5,     5,  -121,  -121,  -121,
    -121,   186,   186,    56,   -46,   -45,   -33,     3,   -23,  -121,
      21,    44,   307,   307,    71,  -121,  -121,    80,  -121,  -121,
     493,  -121,   493,   178,   233,   425,   443,   233,  -121,  -121,
    -121,  -121,   155,   233,   108,   233,   112,  -121,   233,  -121,
     233,  -121,   233,  -121,  -121,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    71,    72,    74,    73,    75,   115,     0,    70,     0,
     112,   114,     0,    76,     0,    69,     1,   113,    76,     0,
      67,     0,     0,     0,   116,    77,    24,    25,    23,     0,
       0,     0,     5,     6,     7,     8,     9,     2,    22,    26,
      27,    10,     3,    18,    28,     0,    29,    33,    36,    37,
      42,    45,    47,    49,    51,    53,    55,    57,     0,    79,
      83,     0,    80,     0,    97,    91,     0,     0,     0,     0,
       2,    65,     0,    95,     0,    96,    84,     0,    93,    85,
      86,    87,    88,    89,    90,     0,    19,    20,     0,    14,
      15,     0,     0,    63,    64,    60,    61,    62,    59,     0,
      28,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      82,    78,     0,     0,     0,     0,     0,   106,     0,     0,
      98,     0,     0,    92,    94,   109,     4,    12,     0,    16,
       0,    58,    30,    31,    32,    34,    35,    39,    38,    41,
      40,    43,    44,    46,    48,    50,    52,    54,     0,    81,
       0,     0,     0,     0,     0,   107,   111,     0,    66,    13,
       0,    11,     0,     0,     0,     0,     0,     0,   110,    17,
      56,   108,   100,     0,     0,     0,     0,   101,     0,   104,
       0,   102,     0,    99,   105,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,    67,  -121,  -121,  -121,    11,  -121,   -43,    45,  -121,
      95,    53,    93,    94,    96,    97,    98,  -121,    46,   -21,
    -121,   -30,   -20,     7,  -121,   200,  -121,   119,    68,   205,
    -121,   169,  -120,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
     223,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,   138,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    71,
      99,    72,     6,    74,     8,    14,    61,    62,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     9,
      10,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,    88,   101,    73,    20,   163,   113,     7,   130,   131,
     114,   117,   102,   103,   104,    15,     7,    93,    94,    95,
      96,    97,    12,   115,   165,   121,   116,    22,    25,    60,
     122,   127,    26,    27,    28,   172,   131,    29,    30,   128,
      86,    87,   175,   176,   118,    12,    13,    16,   173,   136,
      98,    21,   131,    31,   131,   119,   100,    73,   169,   142,
     143,   144,   140,   170,   105,   106,    32,    33,    34,    18,
     139,   174,   111,   112,    35,    36,   131,    37,   141,    38,
      39,    40,     1,     2,     3,     4,     5,    31,   158,     1,
       2,     3,     4,     5,   161,    22,   164,    23,   177,   167,
      32,    33,    34,   131,   120,   162,   135,   178,    35,    36,
     168,    37,   131,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,    60,
      63,    64,    26,    27,    28,   190,   123,    29,    30,   192,
     131,    89,    90,   124,   131,   184,   186,   171,   131,   179,
     145,   146,   125,    31,   126,    23,    65,    91,   129,   132,
      66,    92,    67,    68,   151,   152,    32,    33,    34,     1,
       2,     3,     4,     5,    35,    36,    69,    70,    59,    38,
      39,    40,   181,   100,    63,    64,    26,    27,    28,   188,
     160,    29,    30,     1,     2,     3,     4,     5,   107,   108,
     109,   110,   147,   148,   149,   150,   153,    31,   154,    23,
     133,   155,    19,   156,    66,   157,    67,    68,   180,    24,
      32,    33,    34,     1,     2,     3,     4,     5,    35,    36,
      69,    70,    17,    38,    39,    40,    63,    64,    26,    27,
      28,   159,   182,    29,    30,   187,   134,     0,     0,     0,
       0,   189,     0,   191,     0,     0,   193,     0,   194,    31,
     195,    23,     0,     0,     0,     0,    66,     0,    67,    68,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,    69,    70,     0,    38,    39,    40,    64,    26,
      27,    28,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    64,    26,    27,    28,     0,     0,    29,    30,     0,
       0,     0,     0,    32,    33,    34,     1,     2,     3,     4,
       5,    35,    36,    31,    37,     0,    38,    39,    40,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,    26,    27,    28,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    31,   137,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,    31,   166,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
      26,    27,    28,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    31,   183,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    31,
     185,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,    26,    27,
      28,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
      21,    31,    45,    23,     4,   125,    52,     0,     4,    32,
      55,    24,     7,     8,     9,     8,     9,    18,    19,    20,
      21,    22,    26,    56,     4,    27,    23,    26,    27,    22,
      32,     4,     5,     6,     7,    58,    32,    10,    11,    69,
      29,    30,   162,   163,    57,    26,    50,     0,    27,    27,
      51,    51,    32,    26,    32,     4,    45,    77,    27,   102,
     103,   104,    92,    32,     5,     6,    39,    40,    41,    50,
      91,    27,    16,    17,    47,    48,    32,    50,    99,    52,
      53,    54,    42,    43,    44,    45,    46,    26,   118,    42,
      43,    44,    45,    46,   124,    26,   126,    28,    27,   129,
      39,    40,    41,    32,    50,   125,     4,    27,    47,    48,
     131,    50,    32,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   122,
       3,     4,     5,     6,     7,    27,    26,    10,    11,    27,
      32,    10,    11,    26,    32,   175,   176,    31,    32,   170,
     105,   106,    26,    26,    26,    28,    29,    26,    26,    50,
      33,    30,    35,    36,   111,   112,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    27,    52,
      53,    54,     4,   172,     3,     4,     5,     6,     7,    34,
     123,    10,    11,    42,    43,    44,    45,    46,    12,    13,
      14,    15,   107,   108,   109,   110,   113,    26,   114,    28,
      29,   115,    12,   116,    33,   117,    35,    36,   172,    14,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     9,    52,    53,    54,     3,     4,     5,     6,
       7,   122,   174,    10,    11,   177,    77,    -1,    -1,    -1,
      -1,   183,    -1,   185,    -1,    -1,   188,    -1,   190,    26,
     192,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    52,    53,    54,     4,     5,
       6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,     4,     5,     6,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    26,    50,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    -1,    52,
      53,    54,     5,     6,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    26,    27,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    26,    27,    -1,    47,    48,    -1,    50,    -1,    52,
      53,    54,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    -1,    52,    53,    54,
       5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    26,    27,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    26,
      27,    -1,    47,    48,    -1,    50,    -1,    52,    53,    54,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    -1,    52,    53,    54,     5,     6,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    -1,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,    44,    45,    46,    81,    82,    83,    98,
      99,   100,    26,    50,    84,    82,     0,    99,    50,    84,
       4,    51,    26,    28,    88,    27,     5,     6,     7,    10,
      11,    26,    39,    40,    41,    47,    48,    50,    52,    53,
      54,    60,    61,    62,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    27,
      82,    85,    86,     3,     4,    29,    33,    35,    36,    49,
      50,    78,    80,    81,    82,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    64,    64,    80,    10,
      11,    26,    30,    18,    19,    20,    21,    22,    51,    79,
      64,    66,     7,     8,     9,     5,     6,    12,    13,    14,
      15,    16,    17,    52,    55,    56,    23,    24,    57,     4,
      50,    27,    32,    26,    26,    26,    26,     4,    80,    26,
       4,    32,    50,    29,    90,     4,    27,    27,    63,    78,
      80,    78,    66,    66,    66,    67,    67,    69,    69,    69,
      69,    70,    70,    71,    72,    73,    74,    75,    80,    86,
      60,    80,    81,    91,    80,     4,    27,    80,    78,    27,
      32,    31,    58,    27,    27,    91,    91,    27,    27,    78,
      77,     4,    87,    27,    80,    27,    80,    87,    34,    87,
      27,    87,    27,    87,    87,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    68,    69,    70,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    95,    96,
      97,    97,    98,    98,    99,    99,   100
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
       1,     1,     1,     1,     1,     1,     3,     3,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     2,     7,
       5,     5,     6,     7,     6,     7,     2,     3,     5,     2,
       4,     3,     1,     2,     1,     1,     3
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
#line 88 "compiler_hw2.y" /* yacc.c:1646  */
    {
    	if(lookup_symbol((yyvsp[0].string), -2) == 0) {
    		strcpy(errorMessage, "\0");
    		strcpy(errorMessage, "Undeclared variable ");
    		strcat(errorMessage, (yyvsp[0].string));
    		yyerror(errorMessage);
    		}
    	}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "compiler_hw2.y" /* yacc.c:1646  */
    {  // meet regular declaration
    	insert_symbol((yyvsp[-1].string), "variable", dataType, scopeLevel, 0, NULL);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
		}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 230 "compiler_hw2.y" /* yacc.c:1646  */
    {  // meet regular declaration
    	insert_symbol((yyvsp[-3].string), "variable", dataType, scopeLevel, 0, NULL);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
		}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 243 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(dataType, (yyvsp[0].string)); }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 244 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(dataType, (yyvsp[0].string)); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 245 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(dataType, (yyvsp[0].string)); }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 246 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(dataType, (yyvsp[0].string)); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 247 "compiler_hw2.y" /* yacc.c:1646  */
    { strcpy(dataType, (yyvsp[0].string)); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 252 "compiler_hw2.y" /* yacc.c:1646  */
    {
    	insert_symbol((yyvsp[0].string), "function", dataType, -3, 0, NULL);
    	strcpy(dataType, "\0");
    	formalPIndex = currentIndex;
    }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 269 "compiler_hw2.y" /* yacc.c:1646  */
    {
    	insert_symbol((yyvsp[0].string), "parameter", dataType, 1, 0, NULL);
    	insert_symbol(NULL, NULL, NULL, -1, 1, dataType);
    	strcpy(name, "\0");
    	strcpy(dataType, "\0");
    	}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 290 "compiler_hw2.y" /* yacc.c:1646  */
    {
	dump_symbol(scopeLevel+1);
	}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 337 "compiler_hw2.y" /* yacc.c:1646  */
    {
		if(lookup_symbol((yyvsp[-3].string), -3) == 0) {
			strcpy(errorMessage, "\0");
			strcpy(errorMessage, "Undeclared function ");
			strcat(errorMessage, (yyvsp[-3].string));
			yyerror(errorMessage);
			}
		}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 345 "compiler_hw2.y" /* yacc.c:1646  */
    {
		if(lookup_symbol((yyvsp[-2].string), -3) == 0) {
			strcpy(errorMessage, "\0");
			strcpy(errorMessage, "Undeclared function ");
			strcat(errorMessage, (yyvsp[-2].string));
			yyerror(errorMessage);
			}
		}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 361 "compiler_hw2.y" /* yacc.c:1646  */
    {  }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 367 "compiler_hw2.y" /* yacc.c:1646  */
    {
    	//dump_symbol(scopeLevel);
    	}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1705 "y.tab.c" /* yacc.c:1646  */
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
#line 373 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{   
	error = 0;
	yylineno = 1;
	printf("%d: ", yylineno);
	
	scopeLevel = 0;
	
	currentIndex = -1;
	formalPIndex = -1;
    create_symbol(0);

	int result;
	result = yyparse();
	if(!result) {
		dump_symbol(0);
		printf("\n\nTotal lines: %d \n", yylineno);
		}
    return 0;
}

void yyerror(char *s)
{
    printf("\n\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n");
    error = 1;
}

void create_symbol(int head) {
	for(int i=head; i<30; i++) {
		strcpy(symbolTable[i].name, "\0");
		strcpy(symbolTable[i].entryType, "\0");
		strcpy(symbolTable[i].dataType, "\0");
		symbolTable[i].scopeLevel = -1;
		strcpy(symbolTable[i].formalParameters, "\0");
		}
}

void insert_symbol(char *insertName, char *insertEntryType, char *insertDataType, int insertScopeLevel, int addFunctionParameter, char *parameter) {
	if(addFunctionParameter) {
		if(strlen(symbolTable[formalPIndex].formalParameters) == 0) {
			strcpy(symbolTable[formalPIndex].formalParameters, parameter);
			}
		else {
			strcat(symbolTable[formalPIndex].formalParameters, ", ");
			strcat(symbolTable[formalPIndex].formalParameters, parameter);
			}
		}
	else {
		int result = lookup_symbol(insertName, insertScopeLevel);
		if(result == 0) {
			currentIndex = currentIndex + 1;
			strcpy(symbolTable[currentIndex].name, insertName);
			strcpy(symbolTable[currentIndex].entryType, insertEntryType);
			strcpy(symbolTable[currentIndex].dataType, insertDataType);
			if(insertScopeLevel == -3) insertScopeLevel = 0;
			symbolTable[currentIndex].scopeLevel = insertScopeLevel;
			}
		else if(result == 1) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Redeclared variable ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 2) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Redeclared function ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 3) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Variable declared with name ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		else if(result == 4) {
			strcpy(errorMessage, "\0");
			strcat(errorMessage, "Function declared with name ");
			strcat(errorMessage, insertName);
			yyerror(errorMessage);
			}
		}
}

int lookup_symbol(char *lookupName, int lookupScopeLevel) {
	int same = 0;
	if(lookupScopeLevel == -3) {	// function name looks for function or variable names
		for(int i=0; i<30; i++) {
			if(strcmp(symbolTable[i].name, lookupName) == 0) {
				if(strcmp(symbolTable[i].entryType, "function") == 0)
					same = 2;	// function name meets same function name
				else if(strcmp(symbolTable[i].entryType, "variable") == 0)
					same = 3;	// function name meets same variable name
				break;
				}
			}
		}
	else {	
		for(int i=0; i<30; i++) {
			if(strcmp(symbolTable[i].name, lookupName) == 0 && strcmp(symbolTable[i].entryType, "function") == 0 && lookupScopeLevel == 0) {
				same = 4;
				break;
				}
			if(strcmp(symbolTable[i].name, lookupName) == 0 && (symbolTable[i].scopeLevel == lookupScopeLevel || lookupScopeLevel == -2)) {
				same = 1;	// for redeclared variable name
				break;
				}
			}
		}
	return same;
}

void dump_symbol(int scope) {
	int startFrom=-1;
	for(int i=0; i<=currentIndex; i++) {
		if(symbolTable[i].scopeLevel == scope) {
			startFrom = i;
			break;
			}
		}
	if(startFrom == -1) return;

    printf("\n\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");

	for(int i=startFrom; symbolTable[i].scopeLevel == scope; i++) {
		printf("%-10d%-10s%-12s%-10s%-10d%-10s\n", i - startFrom, symbolTable[i].name, symbolTable[i].entryType, symbolTable[i].dataType, symbolTable[i].scopeLevel, symbolTable[i].formalParameters);
		currentIndex = currentIndex - 1;
		
		}
	create_symbol(startFrom);
}
