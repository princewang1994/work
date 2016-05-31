/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    MAIN = 258,
    AUTO = 259,
    SHORT = 260,
    INT = 261,
    LONG = 262,
    FLOAT = 263,
    DOUBLE = 264,
    CHAR = 265,
    STRUCT = 266,
    UNION = 267,
    ENUM = 268,
    TYPEDEF = 269,
    CONST = 270,
    UNSIGNED = 271,
    SIGNED = 272,
    EXTERN = 273,
    REGISTER = 274,
    STATIC = 275,
    VOLATILE = 276,
    VOID = 277,
    IF = 278,
    ELSE = 279,
    SWITCH = 280,
    CASE = 281,
    FOR = 282,
    DO = 283,
    WHILE = 284,
    GOTO = 285,
    CONTINUE = 286,
    BREAK = 287,
    DEFAULT = 288,
    SIZEOF = 289,
    RETURN = 290,
    INLINE = 291,
    ARROW = 292,
    INC = 293,
    DEC = 294,
    LEFT_SHIFT = 295,
    RIGHT_SHIFT = 296,
    LE = 297,
    GE = 298,
    EQU = 299,
    NEQ = 300,
    AND = 301,
    OR = 302,
    PLUS_ASSIGN = 303,
    SUB_ASSIGN = 304,
    MUL_ASSIGN = 305,
    DIV_ASSIGN = 306,
    MOD_ASSIGN = 307,
    RIGHT_SHIFT_ASSIGN = 308,
    LEFT_SHIFT_ASSIGN = 309,
    AND_ASSIGN = 310,
    XOR_ASSIGN = 311,
    OR_ASSIGN = 312,
    PRECOMPILE = 313,
    STRING = 314,
    CONST_INT = 315,
    CONST_FLOAT = 316,
    NOTATION = 317,
    ID = 318,
    LINE = 319
  };
#endif
/* Tokens.  */
#define MAIN 258
#define AUTO 259
#define SHORT 260
#define INT 261
#define LONG 262
#define FLOAT 263
#define DOUBLE 264
#define CHAR 265
#define STRUCT 266
#define UNION 267
#define ENUM 268
#define TYPEDEF 269
#define CONST 270
#define UNSIGNED 271
#define SIGNED 272
#define EXTERN 273
#define REGISTER 274
#define STATIC 275
#define VOLATILE 276
#define VOID 277
#define IF 278
#define ELSE 279
#define SWITCH 280
#define CASE 281
#define FOR 282
#define DO 283
#define WHILE 284
#define GOTO 285
#define CONTINUE 286
#define BREAK 287
#define DEFAULT 288
#define SIZEOF 289
#define RETURN 290
#define INLINE 291
#define ARROW 292
#define INC 293
#define DEC 294
#define LEFT_SHIFT 295
#define RIGHT_SHIFT 296
#define LE 297
#define GE 298
#define EQU 299
#define NEQ 300
#define AND 301
#define OR 302
#define PLUS_ASSIGN 303
#define SUB_ASSIGN 304
#define MUL_ASSIGN 305
#define DIV_ASSIGN 306
#define MOD_ASSIGN 307
#define RIGHT_SHIFT_ASSIGN 308
#define LEFT_SHIFT_ASSIGN 309
#define AND_ASSIGN 310
#define XOR_ASSIGN 311
#define OR_ASSIGN 312
#define PRECOMPILE 313
#define STRING 314
#define CONST_INT 315
#define CONST_FLOAT 316
#define NOTATION 317
#define ID 318
#define LINE 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
