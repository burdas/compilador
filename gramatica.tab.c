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
#line 3 "gramatica.y" /* yacc.c:339  */

  #include <math.h>
  #include <stdio.h>
  int yylex (void);
  void yyerror (char const *);

#line 73 "gramatica.tab.c" /* yacc.c:339  */

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
    tk_algoritmo = 258,
    tk_identificador = 259,
    tk_punto_coma = 260,
    tk_punto = 261,
    tk_falgoritmo = 262,
    tk_comentario = 263,
    tk_tipo = 264,
    tk_ftipo = 265,
    tk_const = 266,
    tk_fconst = 267,
    tk_var = 268,
    tk_fvar = 269,
    tk_tupla = 270,
    tk_ftupla = 271,
    tk_igual = 272,
    tk_tabla = 273,
    tk_dospuntos = 274,
    tk_de = 275,
    tk_corchete_abierto = 276,
    tk_corchete_cerrado = 277,
    tk_ref = 278,
    tk_tipo_base = 279,
    tk_literal_caracter = 280,
    tk_literal = 281,
    tk_coma = 282,
    tk_ent = 283,
    tk_sal = 284,
    tk_ent_sal = 285,
    tk_suma = 286,
    tk_resta = 287,
    tk_AND = 288,
    tk_OR = 289,
    tk_multiplicacion = 290,
    tk_division = 291,
    tk_modulo = 292,
    tk_div = 293,
    tk_operador_relacional = 294,
    tk_NOT = 295,
    tk_parentesis_apertura = 296,
    tk_parentesis_cierre = 297,
    tk_literal_numerico = 298,
    tk_verdadero = 299,
    tk_falso = 300,
    tk_continuar = 301,
    tk_asignacion = 302,
    tk_si = 303,
    tk_fsi = 304,
    tk_entonces = 305,
    tk_sino = 306,
    tk_mientras = 307,
    tk_fmientras = 308,
    tk_hacer = 309,
    tk_para = 310,
    tk_fpara = 311,
    tk_hasta = 312,
    tk_accion = 313,
    tk_faccion = 314,
    tk_funcion = 315,
    tk_ffuncion = 316,
    tk_dev = 317
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



/* Copy the second part of user declarations.  */

#line 184 "gramatica.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    74,    77,    80,    81,    82,    85,    86,
      87,    90,    93,    94,    95,    95,    96,    99,   102,   105,
     108,   109,   112,   113,   114,   115,   116,   117,   120,   121,
     124,   125,   128,   129,   132,   133,   134,   137,   138,   139,
     142,   143,   144,   147,   150,   153,   154,   155,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   170,   171,
     172,   173,   174,   175,   176,   177,   180,   181,   182,   183,
     186,   187,   190,   191,   192,   193,   194,   197,   200,   203,
     204,   207,   208,   211,   214,   217,   220,   223,   226,   229,
     230,   233,   234,   235,   238,   241,   244,   245
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tk_algoritmo", "tk_identificador",
  "tk_punto_coma", "tk_punto", "tk_falgoritmo", "tk_comentario", "tk_tipo",
  "tk_ftipo", "tk_const", "tk_fconst", "tk_var", "tk_fvar", "tk_tupla",
  "tk_ftupla", "tk_igual", "tk_tabla", "tk_dospuntos", "tk_de",
  "tk_corchete_abierto", "tk_corchete_cerrado", "tk_ref", "tk_tipo_base",
  "tk_literal_caracter", "tk_literal", "tk_coma", "tk_ent", "tk_sal",
  "tk_ent_sal", "tk_suma", "tk_resta", "tk_AND", "tk_OR",
  "tk_multiplicacion", "tk_division", "tk_modulo", "tk_div",
  "tk_operador_relacional", "tk_NOT", "tk_parentesis_apertura",
  "tk_parentesis_cierre", "tk_literal_numerico", "tk_verdadero",
  "tk_falso", "tk_continuar", "tk_asignacion", "tk_si", "tk_fsi",
  "tk_entonces", "tk_sino", "tk_mientras", "tk_fmientras", "tk_hacer",
  "tk_para", "tk_fpara", "tk_hasta", "tk_accion", "tk_faccion",
  "tk_funcion", "tk_ffuncion", "tk_dev", "$accept", "desc_algoritmo",
  "cabecera_alg", "bloque_alg", "decl_globales", "decl_a_f", "bloque",
  "declaraciones", "$@1", "declaracion_tipo", "declaracion_cte",
  "declaracion_var", "lista_d_tipo", "d_tipo", "expresion_t",
  "lista_campos", "lista_d_cte", "lista_d_var", "lista_id", "decl_ent_sal",
  "decl_ent", "decl_sal", "expresion", "exp_a", "exp_b", "operando",
  "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_exp", "it_cota_fija", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
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
     315,   316,   317
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -47

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    16,    17,    18,  -111,   110,    38,    53,   107,    72,
     110,   110,    60,    88,    65,   117,    14,   101,   130,    45,
     107,   107,   107,   143,   153,   135,    72,    72,  -111,  -111,
       7,   176,   157,   187,   159,   185,   189,   194,  -111,   173,
    -111,   166,   166,   211,    15,  -111,   215,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   180,   107,   183,   107,
      14,    14,   214,   196,  -111,  -111,  -111,    35,   222,   206,
       7,  -111,  -111,    24,   166,   166,  -111,  -111,  -111,   223,
     210,   191,   142,    30,     6,  -111,  -111,   226,  -111,   228,
     229,   144,  -111,   166,   192,    21,    27,   188,   232,   166,
    -111,   166,    45,  -111,   175,   178,    14,   177,  -111,  -111,
    -111,  -111,   166,   219,   224,   150,  -111,  -111,    24,   114,
       6,   191,   202,   181,    73,    38,   150,   166,    24,    24,
      24,    24,    24,    24,   166,   166,    53,  -111,  -111,     3,
     237,    51,   201,    45,    45,   166,     6,     4,   191,  -111,
     228,   228,   228,   203,   239,  -111,   204,   166,   205,     7,
    -111,   230,   181,  -111,  -111,  -111,  -111,  -111,   114,   114,
    -111,  -111,  -111,  -111,   202,   202,  -111,    14,    14,   166,
    -111,   197,   198,   -20,  -111,   231,   233,   234,   249,   175,
     193,    19,  -111,   250,   150,  -111,  -111,  -111,   166,   208,
    -111,   166,     7,     7,     7,  -111,  -111,     7,  -111,   222,
     236,    46,  -111,    50,  -111,  -111,  -111,   254,  -111,   240,
      45,    45,  -111,     7,   197,   207,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    21,    33,    16,    10,
       7,     7,     0,     0,     0,     0,    36,     0,     0,     0,
      16,    16,    16,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    38,     0,     0,     0,     4,    66,
      72,     0,     0,     0,     0,    11,    71,    73,    74,    75,
      82,    81,    76,    12,    13,    14,     0,    16,     0,    16,
      36,    36,     0,    40,    42,     8,     9,    66,    31,     0,
       0,    27,    29,     0,     0,     0,    56,    62,    63,     0,
       0,    28,    45,    46,    55,    47,    17,     0,    18,    39,
       0,     0,     2,     0,    66,     0,     0,     0,     0,     0,
      69,     0,     0,    15,    90,     0,    36,     0,    43,    44,
       3,    41,     0,     0,     0,     0,    26,    66,     0,    57,
      55,     0,    60,    45,    46,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    37,    19,    66,
       0,    97,     0,     0,     0,     0,    67,     0,    77,    70,
      39,    39,    39,     0,     0,    85,     0,     0,     0,     0,
      22,     0,     0,    54,    65,    20,    25,    64,    48,    49,
      50,    51,    52,    53,    58,    59,    32,    36,    36,     0,
      94,    80,     0,     0,    68,     0,     0,     0,     0,    90,
       0,     0,    95,     0,     0,    34,    35,    96,     0,     0,
      83,     0,     0,     0,     0,    87,    89,     0,    86,    31,
       0,     0,    78,     0,    91,    92,    93,     0,    30,     0,
       0,     0,    88,     0,    80,     0,    23,    79,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,  -111,   161,   170,    96,    81,  -111,   123,
     155,  -111,   136,   -67,  -110,    55,   126,   -51,   -82,  -111,
    -111,   209,   -40,    13,   -60,   -19,   -98,  -111,  -111,  -111,
      41,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    77,  -111,
    -111,  -111,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,   103,    20,
      21,    22,    13,    79,    80,   114,    15,    35,    36,    62,
      63,    64,    81,    82,    83,    84,    45,    46,    47,    48,
     199,    49,    50,    51,    26,    27,    57,    59,   153,   154,
      52,    85,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    95,    96,   116,   149,   161,   158,   137,   177,   108,
     109,    67,    98,     1,   122,   124,   166,     4,    34,   127,
       3,    98,    68,     5,   140,    69,   184,    99,   117,   100,
      70,    71,    72,   -39,   121,   121,    99,   201,   100,    73,
     -24,   -24,    12,   127,   112,   181,   182,    74,    75,    39,
      76,    77,    78,   141,   120,   156,    73,    14,   127,   147,
     127,   148,   101,   134,   135,   118,   127,    76,   185,   186,
     187,   143,   141,   197,   174,   175,   112,    30,   179,   146,
     208,   144,    32,    44,   210,   127,   119,   167,   123,   127,
     127,    40,   193,    41,   121,   121,   220,    42,    31,   120,
      43,    53,    54,    55,   221,   183,   134,   135,    37,   120,
     120,   120,   120,   120,   120,   164,     6,   191,     7,     6,
      16,     7,   224,   225,    44,    44,   195,   196,    10,    33,
      23,   162,    24,    10,    10,   214,   215,   216,    38,   141,
     217,   168,   169,   170,   171,   172,   173,    56,   139,   130,
     131,   132,   133,   105,    94,   107,   226,    58,   211,    68,
      11,   213,    69,    60,    61,    11,    11,    70,    71,    72,
      94,    28,    29,   128,   129,    72,    73,   130,   131,   132,
     133,    86,    73,    87,    74,    75,    89,    76,    77,    78,
      74,    75,    88,    76,    77,    78,    65,    66,    73,    90,
      92,    44,    44,   150,   151,   152,    74,    75,    91,    76,
      77,    78,   128,   129,    93,    97,   130,   131,   132,   133,
     102,   104,   110,   163,   106,    61,   113,   115,   125,   126,
     127,   136,    34,   112,   138,   145,   117,   155,   159,   157,
     160,   -46,   178,   180,   189,   188,   190,   192,   198,   194,
     202,   200,   203,   204,   205,   207,   209,   212,   219,   222,
     223,   165,   176,   228,   218,   227,   206,     0,     0,     0,
       0,     0,   111
};

static const yytype_int16 yycheck[] =
{
      19,    41,    42,    70,   102,   115,   112,    89,     5,    60,
      61,     4,     6,     3,    74,    75,   126,     0,     4,    39,
       4,     6,    15,     5,    91,    18,    22,    21,     4,    23,
      23,    24,    25,    19,    74,    75,    21,    57,    23,    32,
       5,     6,     4,    39,    41,   143,   144,    40,    41,     4,
      43,    44,    45,    93,    73,   106,    32,     4,    39,    99,
      39,   101,    47,    33,    34,    41,    39,    43,   150,   151,
     152,    50,   112,   179,   134,   135,    41,    17,    27,    98,
      61,    54,    17,   102,   194,    39,    73,   127,    75,    39,
      39,    46,   159,    48,   134,   135,    50,    52,    10,   118,
      55,    20,    21,    22,    54,   145,    33,    34,     7,   128,
     129,   130,   131,   132,   133,    42,     9,   157,    11,     9,
      13,    11,   220,   221,   143,   144,   177,   178,     5,    12,
      58,   118,    60,    10,    11,   202,   203,   204,     8,   179,
     207,   128,   129,   130,   131,   132,   133,     4,     4,    35,
      36,    37,    38,    57,     4,    59,   223,     4,   198,    15,
       5,   201,    18,    28,    29,    10,    11,    23,    24,    25,
       4,    10,    11,    31,    32,    25,    32,    35,    36,    37,
      38,     5,    32,    26,    40,    41,    27,    43,    44,    45,
      40,    41,     5,    43,    44,    45,    26,    27,    32,    14,
       6,   220,   221,    28,    29,    30,    40,    41,    19,    43,
      44,    45,    31,    32,    41,     4,    35,    36,    37,    38,
       5,    41,     8,    42,    41,    29,     4,    21,     5,    19,
      39,     5,     4,    41,     5,    47,     4,    59,    19,    62,
      16,    39,     5,    42,     5,    42,    42,    42,    51,    19,
      19,    53,    19,    19,     5,    62,     6,    49,    22,     5,
      20,   125,   136,    56,   209,   224,   189,    -1,    -1,    -1,
      -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    64,     4,     0,     5,     9,    11,    65,    67,
      72,    73,     4,    75,     4,    79,    13,    66,    69,    70,
      72,    73,    74,    58,    60,    68,    97,    98,    67,    67,
      17,    10,    17,    12,     4,    80,    81,     7,     8,     4,
      46,    48,    52,    55,    88,    89,    90,    91,    92,    94,
      95,    96,   103,    70,    70,    70,     4,    99,     4,   100,
      28,    29,    82,    83,    84,    68,    68,     4,    15,    18,
      23,    24,    25,    32,    40,    41,    43,    44,    45,    76,
      77,    85,    86,    87,    88,   104,     5,    26,     5,    27,
      14,    19,     6,    41,     4,    85,    85,     4,     6,    21,
      23,    47,     5,    71,    41,    69,    41,    69,    80,    80,
       8,    84,    41,     4,    78,    21,    76,     4,    41,    86,
      88,    85,    87,    86,    87,     5,    19,    39,    31,    32,
      35,    36,    37,    38,    33,    34,     5,    81,     5,     4,
      76,    85,   105,    50,    54,    47,    88,    85,    85,    89,
      28,    29,    30,   101,   102,    59,    80,    62,   105,    19,
      16,    77,    86,    42,    42,    75,    77,    85,    86,    86,
      86,    86,    86,    86,    87,    87,    79,     5,     5,    27,
      42,    89,    89,    85,    22,    81,    81,    81,    42,     5,
      42,    85,    42,    76,    19,    80,    80,   105,    51,    93,
      53,    57,    19,    19,    19,     5,   101,    62,    61,     6,
      77,    85,    49,    85,    76,    76,    76,    76,    78,    22,
      50,    54,     5,    20,    89,    89,    76,    93,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    67,    68,    68,
      68,    69,    70,    70,    71,    70,    70,    72,    73,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    83,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    91,    92,    93,
      93,    94,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   102,   102,   102,   103,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     0,     3,     0,     4,     4,     4,
       5,     0,     3,     8,     1,     3,     2,     1,     1,     1,
       5,     0,     5,     0,     5,     5,     0,     3,     1,     0,
       1,     2,     1,     2,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     2,     3,     3,
       2,     1,     1,     1,     3,     3,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     5,     9,     4,     6,     5,     7,     3,
       0,     4,     4,     4,     4,     4,     3,     1
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
#line 71 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla desc_algoritmo") }
#line 1437 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla cabecera_alg") }
#line 1443 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla bloque_alg") }
#line 1449 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_globales ( -> tipo )") }
#line 1455 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_globales ( -> cte )") }
#line 1461 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_globales ( -> epsilon )") }
#line 1467 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_a_f ( -> accion)") }
#line 1473 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 86 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_a_f ( -> funcion)") }
#line 1479 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_a_f ( -> epsilon)") }
#line 1485 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla bloque") }
#line 1491 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla delaraciones ( -> tipo )") }
#line 1497 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla delaraciones ( -> cte )") }
#line 1503 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "gramatica.y" /* yacc.c:1646  */
    {}
#line 1509 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla delaraciones ( -> var )") }
#line 1515 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla delaraciones ( -> epsilon )") }
#line 1521 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla declaracion_tipo") }
#line 1527 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 102 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla declaracion_cte") }
#line 1533 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla declaracion_var") }
#line 1539 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_tipo") }
#line 1545 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> tupla )") }
#line 1551 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> tabla )") }
#line 1557 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> ideidentificador )") }
#line 1563 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> expresion )") }
#line 1569 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> ref )") }
#line 1575 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 117 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_tipo ( -> tipo_base )") }
#line 1581 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla expresion_t ( -> expresion )") }
#line 1587 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla expresion_t ( -> literal caracter )") }
#line 1593 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_campos ( -> identificador )") }
#line 1599 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_campos ( -> epsilon )") }
#line 1605 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_cte ( -> identificador )") }
#line 1611 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_cte ( -> epsilon )") }
#line 1617 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_var ( -> identificador )") }
#line 1623 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_var ( -> d_tipo )") }
#line 1629 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_d_var ( -> epsilon )") }
#line 1635 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_id ( -> identificador , lista )") }
#line 1641 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_id ( -> identificador)") }
#line 1647 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 139 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_id ( -> epsilon )") }
#line 1653 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_ent_sal ( -> ent )") }
#line 1659 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_ent_sal ( -> ent sal )") }
#line 1665 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_ent_sal ( -> sal )") }
#line 1671 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_ent") }
#line 1677 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla decl_sal") }
#line 1683 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla expresion (-> exp_a)") }
#line 1689 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 154 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla expresion (-> exp_b)") }
#line 1695 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 155 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla expresion (-> funcion_ll)") }
#line 1701 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 158 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> suma)") }
#line 1707 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 159 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> resta)") }
#line 1713 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 160 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> multiplicacion)") }
#line 1719 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 161 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> division)") }
#line 1725 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 162 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> modulo)") }
#line 1731 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 163 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> div)") }
#line 1737 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 164 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> parentesis)") }
#line 1743 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> operando)") }
#line 1749 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> literal numerico)") }
#line 1755 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_a (-> menos unario)") }
#line 1761 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 170 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> and)") }
#line 1767 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> or)") }
#line 1773 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> not)") }
#line 1779 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> operando)") }
#line 1785 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> verdadero)") }
#line 1791 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> falso)") }
#line 1797 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 176 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> operador relacional)") }
#line 1803 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla exp_b (-> parentesis)") }
#line 1809 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 180 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla operando (-> identificador)") }
#line 1815 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 181 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla operando (-> punto)") }
#line 1821 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 182 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla operando (-> corchetes)") }
#line 1827 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 183 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla operando (-> ref)") }
#line 1833 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 186 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instrucciones (-> punto y coma)") }
#line 1839 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 187 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instrucciones (-> instruccion)") }
#line 1845 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 190 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instruccion (-> continuar)") }
#line 1851 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 191 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instruccion (-> asignacion)") }
#line 1857 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 192 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instruccion (-> alternativa)") }
#line 1863 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 193 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instruccion (-> iteracion)") }
#line 1869 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla instruccion (-> accion_ll)") }
#line 1875 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 197 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla asignacion") }
#line 1881 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 200 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla alternativa") }
#line 1887 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 203 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla lista_opciones (-> sino)") }
#line 1893 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 204 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla alternativa (-> epsilon)") }
#line 1899 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 207 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla iteracion (-> cota fija)") }
#line 1905 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 208 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla iteracion (-> cota expresion)") }
#line 1911 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 211 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla it_cota_exp") }
#line 1917 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 214 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla it_cota_fija") }
#line 1923 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 217 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla accion_d") }
#line 1929 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 220 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla funcion_d") }
#line 1935 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 223 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla a_cabecera") }
#line 1941 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 226 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla f_cabecera") }
#line 1947 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 229 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_par_form (-> punto y coma)") }
#line 1953 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 230 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_par_form (-> epsilon)") }
#line 1959 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_p_form (-> ent)") }
#line 1965 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 234 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_p_form (-> sal)") }
#line 1971 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 235 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla d_p_form (-> ent_sal)") }
#line 1977 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 238 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla accion_ll") }
#line 1983 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 241 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla funcion_ll") }
#line 1989 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 244 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla l_ll (-> coma)") }
#line 1995 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 245 "gramatica.y" /* yacc.c:1646  */
    { printf("Regla l_ll (-> expresion)") }
#line 2001 "gramatica.tab.c" /* yacc.c:1646  */
    break;


#line 2005 "gramatica.tab.c" /* yacc.c:1646  */
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
#line 248 "gramatica.y" /* yacc.c:1906  */


/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input. */

#include <ctype.h>


int
yylex (void)
{
  int c = getchar ();
  /* Skip white space. */
  while (c == ' ' || c == '\t')
    c = getchar ();

  /* Process numbers. */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      scanf ("%lf", &yylval);
      return NUM;
    }

  /* Return end-of-input. */
  else if (c == EOF)
    return 0;
  /* Return a single char. */
  else
    return c;
}

int
main (void)
{
  return yyparse ();
}

#include <stdio.h>

/* Called by yyparse on error. */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

