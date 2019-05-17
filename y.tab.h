/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    C_COMMENT = 293,
    CPP_COMMENT = 294,
    I_CONST = 295,
    F_CONST = 296,
    S_CONST = 297,
    INT = 298,
    FLOAT = 299,
    BOOL = 300,
    STRING = 301,
    VOID = 302,
    TR = 303,
    FA = 304,
    RET = 305,
    ID = 306
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
#define C_COMMENT 293
#define CPP_COMMENT 294
#define I_CONST 295
#define F_CONST 296
#define S_CONST 297
#define INT 298
#define FLOAT 299
#define BOOL 300
#define STRING 301
#define VOID 302
#define TR 303
#define FA 304
#define RET 305
#define ID 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 46 "compiler_hw2.y" /* yacc.c:1909  */

    int i_val;
    double f_val;
    char* string;
    int b_val;
    int v_val;

#line 164 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
