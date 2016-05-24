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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    LEFT = 291,
    RIGHT = 292,
    LEFT_E = 293,
    RIGHT_E = 294,
    ARROW = 295,
    DOT = 296,
    MARK = 297,
    TILDE = 298,
    INC = 299,
    DEC = 300,
    SUB = 301,
    STAR = 302,
    BIT_AND = 303,
    SLASH = 304,
    PERCENT = 305,
    PLUS = 306,
    LEFT_SHIFT = 307,
    RIGHT_SHIFT = 308,
    LT = 309,
    LE = 310,
    GT = 311,
    GE = 312,
    EQU = 313,
    NEQ = 314,
    HAT = 315,
    BIT_OR = 316,
    AND = 317,
    OR = 318,
    QES = 319,
    ASSIGN = 320,
    PLUS_ASSIGN = 321,
    SUB_ASSIGN = 322,
    MUL_ASSGIN = 323,
    DIV_ASSIGN = 324,
    MOD_ASSIGN = 325,
    RIGHT_SHIFT_ASSIGN = 326,
    LEFT_SHIFT_ASSIGN = 327,
    AND_ASSIGN = 328,
    XOR_ASSIGN = 329,
    OR_ASSGIN = 330,
    COMMA = 331,
    SEMICOLON = 332,
    COLON = 333,
    LEFT_BRACE = 334,
    RIGHT_BRACE = 335,
    PRECOMPILE = 336,
    STRING = 337,
    CONST_INT = 338,
    CONST_FLOAT = 339,
    NOTATION = 340,
    ID = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
