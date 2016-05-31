/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

extern int yylex();

extern FILE* yyin;

void yywrap()
{
    return ;
}

void main()
{
	yyin=fopen("test","r"); 
	if(yyparse()==0)
	{
		printf("success!\n");
	}	
	else
	{
		printf("failed!\n");
	}
}

int yyerror()
{
	return -1;
}



#line 100 "y.tab.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 279 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1608

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  418

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      65,    66,    74,    75,    72,    76,    69,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    84,    71,    77,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   109,   109,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   124,   124,
     126,   127,   128,   129,   130,   131,   134,   134,   134,   134,
     134,   134,   136,   137,   140,   141,   142,   143,   146,   147,
     148,   151,   152,   153,   156,   157,   158,   159,   160,   163,
     164,   165,   168,   169,   172,   173,   177,   178,   181,   182,
     185,   186,   189,   189,   191,   192,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   208,   209,   211,
     213,   214,   217,   218,   219,   220,   221,   222,   223,   224,
     227,   229,   230,   233,   234,   237,   238,   239,   240,   241,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   257,   258,   259,   262,   263,   266,   267,   270,   273,
     274,   275,   276,   279,   280,   283,   284,   285,   288,   289,
     290,   291,   292,   295,   296,   299,   300,   303,   304,   307,
     308,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   327,   328,   329,   330,   333,
     334,   337,   340,   341,   344,   345,   346,   349,   350,   353,
     354,   357,   358,   359,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   385,   386,   387,   390,   391,
     392,   395,   396,   399,   400,   403,   404,   405,   406,   407,
     408,   411,   412,   413,   416,   417,   420,   421,   424,   425,
     428,   429,   432,   433,   436,   437,   438,   441,   442,   443,
     444,   447,   448,   449,   450,   451,   454,   455,   458,   459,
     462,   463,   464,   465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "AUTO", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "CHAR", "STRUCT", "UNION", "ENUM", "TYPEDEF", "CONST",
  "UNSIGNED", "SIGNED", "EXTERN", "REGISTER", "STATIC", "VOLATILE", "VOID",
  "IF", "ELSE", "SWITCH", "CASE", "FOR", "DO", "WHILE", "GOTO", "CONTINUE",
  "BREAK", "DEFAULT", "SIZEOF", "RETURN", "INLINE", "ARROW", "INC", "DEC",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LE", "GE", "EQU", "NEQ", "AND", "OR",
  "PLUS_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "PRECOMPILE", "STRING", "CONST_INT", "CONST_FLOAT",
  "NOTATION", "ID", "LINE", "'('", "')'", "'['", "']'", "'.'", "'{'",
  "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "function_specifier", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "declaration_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
     123,   125,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     794,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     -18,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,   111,     7,  -215,    60,  1572,  1572,  1572,  -215,
      86,  -215,  1572,   827,    32,    73,   629,  -215,  -215,    -8,
      35,    69,  -215,  -215,     7,  -215,   -22,  -215,   545,  -215,
    -215,  -215,    21,   667,  -215,   424,  -215,    60,  -215,   827,
    1180,   874,    32,  -215,  -215,    35,    70,   -48,  -215,  -215,
    -215,  -215,   111,  -215,  1325,  -215,   827,   667,   667,   394,
    -215,    95,   667,    87,    99,  1441,   103,   844,   122,   142,
     124,   133,   145,  1469,  1217,  1497,  1497,  -215,  -215,  -215,
     155,   647,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,    46,   325,  1441,  -215,   109,    -2,   161,     6,
     175,   172,   164,   187,   213,    -5,  -215,  -215,   -12,  -215,
    -215,  -215,  -215,   509,  -215,  -215,  -215,  -215,  -215,   176,
    -215,  -215,  -215,  -215,    98,   212,   214,  -215,   -46,  1105,
    -215,  -215,   219,   220,   923,   153,  1441,  -215,    56,  -215,
     179,  -215,  -215,  -215,   595,  -215,  -215,  -215,  1441,    14,
    -215,   203,  -215,  1441,  1441,  -215,  -215,   205,  1224,   265,
    1441,   209,  -215,  -215,   844,   647,  -215,  -215,    28,   647,
    -215,  -215,   844,   101,    65,   232,   236,  -215,  -215,  1353,
    1441,   239,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  1441,  -215,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  -215,  -215,  -215,   722,   951,
    -215,    57,  -215,   119,  -215,  1572,  -215,   244,   240,  1105,
    -215,  -215,  1441,  -215,   242,   243,  -215,    74,  -215,  -215,
    -215,  1441,   249,  -215,   157,    25,  -215,  -215,  -215,    95,
    -215,  1441,   105,   125,   844,  1224,   250,   129,  -215,  -215,
     248,  -215,   252,  -215,  -215,   755,   143,  -215,  1383,  -215,
    -215,   130,  -215,   -21,  -215,  -215,  -215,  -215,  -215,   109,
     109,    -2,    -2,   161,   161,   161,   161,     6,     6,   175,
     172,   164,   187,   213,   -29,  -215,  -215,   253,   254,  1105,
    -215,   256,   258,  1000,   119,  1213,  1028,  -215,  -215,  -215,
     260,   261,  -215,  -215,  -215,   263,  -215,  -215,  1269,  1325,
    -215,  -215,  -215,   844,   844,  -215,  1411,  1441,   844,   251,
     251,   179,  -215,  -215,  1441,  -215,  1441,  -215,  -215,   266,
    1105,  -215,  -215,  1441,  -215,   268,  -215,   267,  1105,  -215,
     271,   272,  1077,  -215,  -215,  -215,  -215,  -215,  -215,   298,
    -215,   844,   132,   134,  -215,   190,  -215,  -215,  -215,   273,
     274,  -215,  -215,   275,  1105,  -215,  -215,  1441,  -215,   276,
     844,  -215,   844,   259,  -215,  1297,  -215,  -215,  -215,   280,
     282,  -215,  -215,  -215,  -215,  -215,  -215,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   102,   103,   104,   105,   106,   101,   114,   115,
       0,    95,   137,   108,   107,    96,    99,    97,   138,   100,
      90,   141,     0,   155,   239,     0,    88,    82,    84,   109,
       0,   110,    86,     0,   140,     0,     0,   236,   238,   132,
       0,     0,   159,   157,   156,    80,     0,    91,    93,    89,
      83,    85,   113,     0,    87,     0,   220,     0,   243,     0,
       0,     0,   139,     1,   237,     0,   135,     0,   133,   142,
     160,   158,     0,    81,     0,   241,     0,     0,   120,     0,
     116,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     6,     7,
       2,     0,   214,    26,    27,    28,    29,    30,    31,   222,
       8,     3,    20,    32,     0,    34,    38,    41,    44,    49,
      52,    54,    56,    58,    60,    62,    64,    77,     0,   218,
     219,   205,   206,     0,   216,   207,   208,   209,   210,    93,
     221,   242,   167,   154,   166,     0,   161,   162,     0,     0,
       2,   151,    27,     0,     0,     0,     0,   128,     0,    92,
       0,   195,    94,   240,     0,   119,   112,   117,     0,     0,
     123,   125,   121,     0,     0,    32,    79,     0,     0,     0,
       0,     0,   232,   233,     0,     0,    24,   234,     0,     0,
      21,    22,     0,     0,   169,     0,     0,    13,    15,     0,
       0,     0,    70,    71,    67,    68,    69,    73,    72,    74,
      75,    76,    66,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   215,   217,     0,     0,
     164,   171,   165,   172,   152,     0,   153,     0,     0,     0,
     150,   143,     0,   145,    27,     0,   130,     0,   136,   129,
     134,     0,     0,   198,     0,     0,   201,   111,   126,     0,
     118,     0,     0,     0,     0,     0,     0,     0,   231,   213,
       0,   235,     0,   211,     5,     0,   171,   170,     0,    12,
      10,     0,    18,     0,    11,    65,    35,    36,    37,    39,
      40,    43,    42,    47,    48,    45,    46,    50,    51,    53,
      55,    57,    59,    61,     0,    78,   194,     0,     0,     0,
     182,    27,     0,     0,   173,     0,     0,   163,   168,   147,
       0,     0,   149,   144,   131,     0,   204,   196,     0,     0,
     202,   124,   127,     0,     0,   212,     0,     0,     0,    25,
       0,     0,    33,    14,     0,     9,     0,   193,   174,     0,
       0,   190,   180,     0,   181,     0,   192,     0,     0,   178,
      27,     0,     0,   146,   148,   203,   197,   199,   200,   224,
     226,     0,     0,     0,   227,     0,    19,    63,   186,     0,
       0,   179,   191,     0,     0,   189,   177,     0,   176,     0,
       0,   229,     0,     0,    16,     0,   185,   188,   184,     0,
       0,   175,   225,   230,   228,    17,   183,   187
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,  -215,   137,  -215,  -110,    64,    55,
      12,    58,   123,   141,   154,   152,   140,  -215,   -79,   -59,
    -215,   -30,  -143,    20,     5,  -215,  -215,   313,  -215,   -43,
    -215,  -215,   309,   -61,   -38,  -215,   118,  -215,   323,  -149,
     -23,   -11,   -32,   -15,   -45,   -53,  -215,   144,  -215,    22,
    -125,  -214,   -73,    39,  -215,   126,   -75,  -215,    34,  -215,
     262,   344,  -161,  -215,  -215,  -215,  -215,   357,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   112,   291,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     213,   128,   177,    24,    57,    26,    46,    47,    27,    28,
      29,    30,    79,    80,    81,   169,   170,    31,    67,    68,
      32,    33,    34,    35,    44,   317,   146,   147,   148,   195,
     318,   243,   263,   264,   265,   266,   130,   131,   132,   133,
     134,    59,   135,   136,   137,   138,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      42,   162,   153,    62,   214,    25,   176,   145,    43,   260,
      78,    41,   179,   258,    48,   161,   154,   275,   167,   242,
     246,    70,    12,   157,   158,   268,   247,   324,    18,    71,
      82,    49,    50,    51,    78,    78,    78,    54,    42,    78,
     165,    25,   232,   234,   172,    39,   139,   355,   222,   223,
      72,   234,    40,    56,    82,    82,    82,   356,    78,    82,
     234,   139,    65,   194,   188,   144,    73,    58,    56,   287,
     171,   193,   324,   218,   219,   129,   235,   176,    82,   140,
     233,    23,    75,   196,   197,   198,   269,   224,   225,   176,
     248,    77,   261,   141,   262,   255,   140,    60,    66,    61,
     234,   161,   270,   167,   249,   296,   297,   298,   260,   279,
     163,   199,   339,   200,   346,   201,   281,   283,   335,    66,
      21,    78,   238,    21,   239,    22,    42,   259,   342,   241,
     285,    70,   239,   240,    23,    69,    21,    66,    22,    23,
     292,    82,    78,   272,   273,   334,    78,   194,    45,    52,
     277,   194,   173,   129,   295,   193,    53,   156,    21,   193,
      22,    21,    82,   238,   174,   239,    82,   284,   178,    23,
     293,   343,    23,   234,    21,   315,    22,   234,   352,   286,
     322,   168,   176,   215,   325,    23,   326,   180,   216,   217,
     330,   344,   176,   331,   323,   348,   353,   234,   402,   345,
     403,   234,   354,   314,   234,   181,   234,   280,   285,    62,
     239,   282,   182,    93,   220,   221,    42,    95,    96,   226,
     227,   183,   175,   241,   256,   257,    70,    41,   337,   338,
     186,   184,   190,   191,   303,   304,   305,   306,    97,    98,
      99,   192,   150,   144,   101,   228,   261,   229,   262,   160,
     144,   175,   103,   104,   105,   106,   107,   108,   171,   231,
     359,   404,   405,    74,   365,   377,   378,   371,   379,   380,
     286,   230,   367,   384,   360,   301,   302,   387,   244,   161,
     161,   372,   299,   300,   307,   308,   245,   250,   251,   271,
     144,   274,   161,   175,   276,   386,    42,   278,   288,   289,
      70,   389,   294,    42,   390,   175,   401,   328,   329,   393,
     332,   333,   336,   399,   349,   347,   382,   383,   350,   357,
     358,   351,   400,   394,   361,   412,   362,   413,   373,   374,
     144,   375,   377,   392,   388,   409,   391,    70,   410,   395,
     396,   406,   407,   408,   411,    42,   161,   414,   416,    70,
     417,   309,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     310,    70,   313,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   312,   311,   159,   164,   341,   155,   327,
     385,   340,    76,    64,     0,   237,     0,     0,   175,     2,
       3,     4,     5,     6,     7,     8,     9,    10,   175,    12,
      13,    14,   212,     0,     0,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    83,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      20,     0,    95,    96,     0,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    98,    99,     0,   100,     0,   101,
       0,     0,     0,   175,    55,   102,     0,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    83,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    20,     0,    95,    96,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    97,    98,
      99,     0,   100,     0,   101,     0,     0,     0,     0,    55,
     236,    20,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
      12,    13,    14,     0,     0,    55,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,     0,    74,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,    12,    13,    14,    20,   267,     0,    18,    19,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    93,    12,    13,    14,    95,    96,     0,    18,    19,
       0,     0,    21,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,    97,    98,    99,     0,
     150,     0,   101,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,    21,     0,   238,   316,   239,
       0,    20,     0,     0,     0,     0,    23,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
     285,   316,   239,     0,     0,     0,     0,     0,     0,    23,
      20,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
       0,     0,     0,    20,     0,     0,     0,    83,    23,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,    95,    96,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,   149,    18,     0,    55,     0,     0,
       0,     0,     0,    97,    98,    99,     0,   100,    93,   101,
       0,     0,    95,    96,    55,     0,     0,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,    97,    98,    99,     0,   150,    12,   101,
       0,     0,   151,   252,    18,     0,     0,   103,   152,   105,
     106,   107,   108,     0,     0,     0,     0,    93,     0,     0,
       0,    95,    96,     0,     0,     0,    12,     0,     0,     0,
       0,   319,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,    99,    93,   150,     0,   101,    95,
      96,   253,     0,     0,     0,     0,   103,   254,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,     0,   150,    12,   101,     0,     0,   320,
     363,    18,     0,     0,   103,   321,   105,   106,   107,   108,
       0,     0,     0,     0,    93,     0,     0,     0,    95,    96,
       0,     0,     0,    12,     0,     0,     0,     0,   368,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      98,    99,    93,   150,     0,   101,    95,    96,   364,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    98,    99,
       0,   150,    12,   101,     0,     0,   369,   397,    18,     0,
       0,   103,   370,   105,   106,   107,   108,     0,     0,     0,
       0,    93,     0,     0,     0,    95,    96,     0,     0,     0,
      12,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,    99,    93,
     150,     0,   101,    95,    96,   398,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,    99,     0,   150,     0,
     101,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,   143,     0,     0,    20,
       0,    93,     0,     0,     0,    95,    96,     0,    93,     0,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,    99,   366,
     150,     0,   101,    97,    98,    99,     0,   150,     0,   101,
     103,   104,   105,   106,   107,   108,     0,   103,   104,   105,
     106,   107,   108,    93,     0,   187,     0,    95,    96,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
      99,    93,   150,     0,   101,    95,    96,     0,     0,   160,
     376,     0,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,    99,    93,
     150,     0,   101,    95,    96,     0,     0,   160,   415,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,    99,    93,   150,     0,
     101,    95,    96,     0,     0,   160,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,    99,     0,   150,    93,   101,   290,
       0,    95,    96,     0,     0,     0,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,    99,    93,   150,     0,   101,    95,
      96,     0,     0,   351,     0,     0,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,     0,   150,    93,   101,   381,     0,    95,
      96,     0,     0,     0,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,    93,   150,     0,   101,    95,    96,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
      99,    93,   150,     0,   185,    95,    96,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,    99,     0,
     150,     0,   189,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
      23,    74,    61,    35,   114,     0,    85,    60,    23,   158,
      53,    22,    87,   156,    25,    74,    61,   178,    79,   144,
      66,    44,    15,    71,    72,   168,    72,   241,    21,    44,
      53,    26,    27,    28,    77,    78,    79,    32,    61,    82,
      78,    36,    47,    72,    82,    63,    57,    68,    42,    43,
      72,    72,    70,    33,    77,    78,    79,    86,   101,    82,
      72,    72,    70,   101,    94,    60,    88,    33,    48,   194,
      81,   101,   286,    75,    76,    55,    88,   156,   101,    59,
      85,    74,    48,    37,    38,    39,    72,    81,    82,   168,
     149,    70,    67,    59,    69,   154,    76,    65,    63,    67,
      72,   160,    88,   164,   149,   215,   216,   217,   257,   184,
      76,    65,    87,    67,   275,    69,    88,   192,   261,    63,
      63,   164,    65,    63,    67,    65,   149,    71,   271,   144,
      65,   154,    67,   144,    74,    66,    63,    63,    65,    74,
     199,   164,   185,   173,   174,    71,   189,   185,    88,    63,
     180,   189,    65,   133,   213,   185,    70,    87,    63,   189,
      65,    63,   185,    65,    65,    67,   189,    66,    65,    74,
     200,    66,    74,    72,    63,   234,    65,    72,   288,   194,
     239,    86,   261,    74,    65,    74,    67,    65,    79,    80,
     249,    66,   271,   252,   239,    66,    66,    72,    66,   274,
      66,    72,    72,   233,    72,    63,    72,   185,    65,   241,
      67,   189,    88,    34,    53,    54,   239,    38,    39,    44,
      45,    88,    85,   238,    71,    72,   249,   238,    71,    72,
      93,    86,    95,    96,   222,   223,   224,   225,    59,    60,
      61,    86,    63,   238,    65,    73,    67,    83,    69,    70,
     245,   114,    73,    74,    75,    76,    77,    78,   269,    46,
     319,    71,    72,    87,   323,   338,   339,   326,   343,   344,
     285,    84,   325,   348,   319,   220,   221,   356,    66,   338,
     339,   326,   218,   219,   226,   227,    72,    68,    68,    86,
     285,    86,   351,   156,    29,   354,   319,    88,    66,    63,
     323,   360,    63,   326,   363,   168,   381,    63,    68,   368,
      68,    68,    63,   372,    66,    65,   346,   347,    66,    66,
      66,    70,    24,   368,    68,   400,    68,   402,    68,    68,
     325,    68,   405,    66,    68,   394,    68,   360,   397,    68,
      68,    68,    68,    68,    68,   368,   405,    88,    68,   372,
      68,   228,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     229,   394,   232,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   231,   230,    72,    77,   269,    65,   245,
     351,   265,    48,    36,    -1,   133,    -1,    -1,   261,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   271,    15,
      16,    17,    87,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,
      -1,    -1,    -1,   356,    70,    71,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    59,    60,
      61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    70,
      71,    36,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    -1,    70,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,    -1,    87,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    36,    71,    -1,    21,    22,
      -1,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    34,    15,    16,    17,    38,    39,    -1,    21,    22,
      -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    36,    -1,    -1,    -1,    -1,    74,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      36,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    23,    74,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    34,    65,
      -1,    -1,    38,    39,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    59,    60,    61,    -1,    63,    15,    65,
      -1,    -1,    68,    20,    21,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    34,    63,    -1,    65,    38,
      39,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    63,    15,    65,    -1,    -1,    68,
      20,    21,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    34,    63,    -1,    65,    38,    39,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    15,    65,    -1,    -1,    68,    20,    21,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    34,
      63,    -1,    65,    38,    39,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    36,
      -1,    34,    -1,    -1,    -1,    38,    39,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    66,
      63,    -1,    65,    59,    60,    61,    -1,    63,    -1,    65,
      73,    74,    75,    76,    77,    78,    -1,    73,    74,    75,
      76,    77,    78,    34,    -1,    88,    -1,    38,    39,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    34,    63,    -1,    65,    38,    39,    -1,    -1,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    34,
      63,    -1,    65,    38,    39,    -1,    -1,    70,    71,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    34,    63,    -1,
      65,    38,    39,    -1,    -1,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    34,    65,    66,
      -1,    38,    39,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    34,    63,    -1,    65,    38,
      39,    -1,    -1,    70,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    63,    34,    65,    66,    -1,    38,
      39,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    34,    63,    -1,    65,    38,    39,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    34,    63,    -1,    65,    38,    39,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      36,    63,    65,    74,   112,   113,   114,   117,   118,   119,
     120,   126,   129,   130,   131,   132,   155,   156,   157,    63,
      70,   130,   129,   132,   133,    88,   115,   116,   130,   113,
     113,   113,    63,    70,   113,    70,   112,   113,   147,   150,
      65,    67,   131,     0,   156,    70,    63,   127,   128,    66,
     129,   132,    72,    88,    87,   147,   150,    70,   118,   121,
     122,   123,   129,    23,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    38,    39,    59,    60,    61,
      63,    65,    71,    73,    74,    75,    76,    77,    78,    88,
      90,    91,    92,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   110,   112,
     145,   146,   147,   148,   149,   151,   152,   153,   154,   130,
     112,   147,    63,    66,   113,   134,   135,   136,   137,    20,
      63,    68,    74,   108,   133,   127,    87,    71,    72,   116,
      70,   108,   141,   147,   121,   123,    71,   122,    86,   124,
     125,   130,   123,    65,    65,    94,   107,   111,    65,   145,
      65,    63,    88,    88,    86,    65,    94,    88,   110,    65,
      94,    94,    86,   110,   123,   138,    37,    38,    39,    65,
      67,    69,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    87,   109,    96,    74,    79,    80,    75,    76,
      53,    54,    42,    43,    81,    82,    44,    45,    73,    83,
      84,    46,    47,    85,    72,    88,    71,   149,    65,    67,
     130,   132,   139,   140,    66,    72,    66,    72,   108,   133,
      68,    68,    20,    68,    74,   108,    71,    72,   111,    71,
     128,    67,    69,   141,   142,   143,   144,    71,   111,    72,
      88,    86,   110,   110,    86,   151,    29,   110,    88,   145,
     138,    88,   138,   145,    66,    65,   132,   139,    66,    63,
      66,    93,   108,   110,    63,   108,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   105,   110,   108,    66,   134,   139,    20,
      68,    74,   108,   133,   140,    65,    67,   136,    63,    68,
     108,   108,    68,    68,    71,   111,    63,    71,    72,    87,
     144,   125,   111,    66,    66,   145,   151,    65,    66,    66,
      66,    70,    96,    66,    72,    68,    86,    66,    66,   108,
     133,    68,    68,    20,    68,   108,    66,   134,    20,    68,
      74,   108,   133,    68,    68,    68,    71,   141,   141,   145,
     145,    66,   110,   110,   145,   142,   108,   107,    68,   108,
     108,    68,    66,   108,   133,    68,    68,    20,    68,   108,
      24,   145,    66,    66,    71,    72,    68,    68,    68,   108,
     108,    68,   145,   145,    88,    71,    68,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      98,    99,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   119,   120,   120,   121,   121,   122,   123,
     123,   123,   123,   124,   124,   125,   125,   125,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   135,   135,   136,   136,   136,   137,   137,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   157
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     4,
       3,     3,     3,     2,     4,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       5,     6,     2,     1,     3,     1,     3,     1,     1,     2,
       1,     1,     3,     4,     5,     4,     6,     5,     6,     5,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     1,     1,     2,     3,     5,     4,     4,     3,     4,
       3,     3,     2,     6,     5,     5,     4,     6,     5,     4,
       3,     4,     3,     3,     2,     1,     3,     4,     1,     3,
       3,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     3,     2
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
      
#line 1916 "y.tab.c" /* yacc.c:1646  */
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
#line 467 "bison.y" /* yacc.c:1906  */

