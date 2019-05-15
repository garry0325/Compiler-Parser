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
    ID = 259,
    SEMICOLON = 260,
    ADD = 261,
    SUB = 262,
    MUL = 263,
    DIV = 264,
    MOD = 265,
    INC = 266,
    DEC = 267,
    MT = 268,
    LT = 269,
    MTE = 270,
    LTE = 271,
    EQ = 272,
    NE = 273,
    ASGN = 274,
    ADDASGN = 275,
    SUBASGN = 276,
    MULASGN = 277,
    DIVASGN = 278,
    MODASGN = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    LB = 283,
    RB = 284,
    LCB = 285,
    RCB = 286,
    LSB = 287,
    RSB = 288,
    COMMA = 289,
    IF = 290,
    ELSE = 291,
    FOR = 292,
    WHILE = 293,
    I_CONST = 294,
    F_CONST = 295,
    INT = 296,
    FLOAT = 297,
    BOOL = 298,
    STRING = 299,
    VOID = 300,
    TR = 301,
    FA = 302,
    RET = 303
  };
#endif
/* Tokens.  */
#define PRINT 258
#define ID 259
#define SEMICOLON 260
#define ADD 261
#define SUB 262
#define MUL 263
#define DIV 264
#define MOD 265
#define INC 266
#define DEC 267
#define MT 268
#define LT 269
#define MTE 270
#define LTE 271
#define EQ 272
#define NE 273
#define ASGN 274
#define ADDASGN 275
#define SUBASGN 276
#define MULASGN 277
#define DIVASGN 278
#define MODASGN 279
#define AND 280
#define OR 281
#define NOT 282
#define LB 283
#define RB 284
#define LCB 285
#define RCB 286
#define LSB 287
#define RSB 288
#define COMMA 289
#define IF 290
#define ELSE 291
#define FOR 292
#define WHILE 293
#define I_CONST 294
#define F_CONST 295
#define INT 296
#define FLOAT 297
#define BOOL 298
#define STRING 299
#define VOID 300
#define TR 301
#define FA 302
#define RET 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "compiler_hw2.y" /* yacc.c:1909  */

    int i_val;
    double f_val;
    char* string;
    int b_val;
    int v_val;

#line 158 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
