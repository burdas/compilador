/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "gramatica.y"

  #include <math.h>
  #include <stdio.h>
  int yylex (void);
  void yyerror (char const *);

#line 77 "gramatica.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_GRAMATICA_TAB_H_INCLUDED
# define YY_YY_GRAMATICA_TAB_H_INCLUDED
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
    tk_menos_unario = 296,
    tk_parentesis_apertura = 297,
    tk_parentesis_cierre = 298,
    tk_literal_numerico = 299,
    tk_verdadero = 300,
    tk_falso = 301,
    tk_continuar = 302,
    tk_asignacion = 303,
    tk_si = 304,
    tk_fsi = 305,
    tk_entonces = 306,
    tk_sino = 307,
    tk_mientras = 308,
    tk_fmientras = 309,
    tk_hacer = 310,
    tk_para = 311,
    tk_fpara = 312,
    tk_hasta = 313,
    tk_accion = 314,
    tk_faccion = 315,
    tk_funcion = 316,
    tk_ffuncion = 317,
    tk_dev = 318,
    tk_subrango = 319
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

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

#define YYUNDEFTOK  2
#define YYMAXUTOK   319

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    76,    79,    82,    83,    84,    87,    88,
      89,    92,    95,    96,    97,    97,    98,   101,   104,   107,
     110,   111,   114,   115,   116,   117,   118,   119,   122,   123,
     126,   127,   130,   131,   134,   135,   136,   139,   140,   141,
     144,   145,   146,   149,   152,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   174,   175,   176,   177,   180,   181,   184,   185,
     186,   187,   188,   191,   194,   197,   198,   201,   202,   205,
     208,   211,   214,   217,   220,   223,   224,   227,   228,   229,
     232,   235,   238,   239
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
  "tk_operador_relacional", "tk_NOT", "tk_menos_unario",
  "tk_parentesis_apertura", "tk_parentesis_cierre", "tk_literal_numerico",
  "tk_verdadero", "tk_falso", "tk_continuar", "tk_asignacion", "tk_si",
  "tk_fsi", "tk_entonces", "tk_sino", "tk_mientras", "tk_fmientras",
  "tk_hacer", "tk_para", "tk_fpara", "tk_hasta", "tk_accion", "tk_faccion",
  "tk_funcion", "tk_ffuncion", "tk_dev", "tk_subrango", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "$@1", "declaracion_tipo",
  "declaracion_cte", "declaracion_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var", "lista_id",
  "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "operando",
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
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -40

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    18,    34,    35,  -113,    43,    40,    45,    32,    -4,
      43,    43,    51,    52,    54,    63,    13,    90,    91,    20,
      32,    32,    32,    97,    98,     0,    -4,    -4,  -113,  -113,
     126,    99,    77,   100,    80,    95,   101,   110,  -113,    86,
    -113,   165,   165,   115,     2,  -113,   124,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,    89,    32,    92,    32,
      13,    13,   130,   103,  -113,  -113,  -113,     4,   135,   121,
     126,  -113,  -113,   165,   165,   165,  -113,  -113,  -113,   138,
      81,   306,    10,  -113,  -113,   141,  -113,   143,   148,   158,
    -113,   165,   106,   233,   199,   109,   150,   165,  -113,   165,
      20,  -113,   -10,   104,    13,    96,  -113,  -113,  -113,  -113,
     165,   142,   144,    66,  -113,  -113,  -113,   284,    40,    66,
     165,   165,   165,   165,   165,   165,   165,   165,   165,    45,
    -113,  -113,     9,   160,   297,   120,    20,    20,   165,  -113,
      10,   275,   306,  -113,   143,   143,   143,   131,   162,  -113,
     132,   165,   134,   126,  -113,   114,  -113,  -113,  -113,    88,
      88,    88,    88,   140,   140,   140,   140,  -113,  -113,    13,
      13,   165,  -113,   128,   133,   190,  -113,   166,   167,   169,
     179,   -10,   129,   181,  -113,   183,    66,  -113,  -113,  -113,
     165,   145,  -113,   165,   126,   126,   126,  -113,  -113,   126,
    -113,   135,   174,   254,  -113,   224,  -113,  -113,  -113,   186,
    -113,   188,    20,    20,  -113,   126,   128,   149,  -113,  -113,
    -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    21,    33,    16,    10,
       7,     7,     0,     0,     0,     0,    36,     0,     0,     0,
      16,    16,    16,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    38,     0,     0,     0,     4,    62,
      68,     0,     0,     0,     0,    11,    67,    69,    70,    71,
      78,    77,    72,    12,    13,    14,     0,    16,     0,    16,
      36,    36,     0,    40,    42,     8,     9,    62,    31,     0,
       0,    27,    29,     0,     0,     0,    54,    59,    60,     0,
       0,    28,    53,    45,    17,     0,    18,    39,     0,     0,
       2,     0,    62,     0,     0,     0,     0,     0,    65,     0,
       0,    15,    86,     0,    36,     0,    43,    44,     3,    41,
       0,     0,     0,     0,    26,    55,    58,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      37,    19,    62,     0,    93,     0,     0,     0,     0,    62,
      63,     0,    73,    66,    39,    39,    39,     0,     0,    81,
       0,     0,     0,     0,    22,     0,    52,    20,    25,    46,
      47,    56,    57,    48,    49,    50,    51,    61,    32,    36,
      36,     0,    90,    76,     0,     0,    64,     0,     0,     0,
       0,    86,     0,     0,    91,     0,     0,    34,    35,    92,
       0,     0,    79,     0,     0,     0,     0,    83,    85,     0,
      82,    31,     0,     0,    74,     0,    87,    88,    89,     0,
      30,     0,     0,     0,    84,     0,    76,     0,    23,    75,
      80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,  -113,    82,    69,     1,    58,  -113,    16,
      37,  -113,    83,   -59,  -112,    -2,   111,   -48,   -81,  -113,
    -113,   176,   -38,   -19,   -98,  -113,  -113,  -113,    25,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,    61,  -113,  -113,  -113,
    -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,   101,    20,
      21,    22,    13,    79,    80,   112,    15,    35,    36,    62,
      63,    64,    81,    82,    45,    46,    47,    48,   191,    49,
      50,    51,    26,    27,    57,    59,   147,   148,    52,    83,
     135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   155,   143,    93,    94,   152,   130,   158,    96,   -24,
     -24,   114,   106,   107,   169,     1,    96,    34,   144,   145,
     146,    10,     3,    97,    39,    98,    10,    10,    60,    61,
     133,    97,   -39,    98,     4,   115,   116,   117,   173,   174,
       5,     6,    11,     7,    12,    16,   110,    11,    11,    14,
      99,   110,     6,   134,     7,    23,   150,    24,   103,   141,
     105,   142,    31,   177,   178,   179,   189,    40,    30,    41,
      92,    32,   134,    42,   202,    33,    43,   140,    53,    54,
      55,    44,   159,   160,   161,   162,   163,   164,   165,   166,
     167,    72,    28,    29,   185,    65,    66,    37,    73,    38,
     175,    56,    58,    85,    84,    86,    74,    87,    75,    88,
      76,    77,    78,   183,   216,   217,    90,    44,    44,    95,
      89,   187,   188,   124,   125,   126,   127,   128,    91,   100,
      67,   102,    61,   134,   104,   206,   207,   208,   108,   111,
     209,    68,   113,   118,    69,   119,   129,    34,   110,    70,
      71,    72,   203,   131,   139,   205,   218,   138,    73,   151,
     154,   153,   132,   172,   149,   170,    74,   181,    75,    92,
      76,    77,    78,    68,   180,   182,    69,   184,   186,   128,
     190,    70,    71,    72,   197,   194,   195,   192,   196,   201,
      73,   214,   199,    44,    44,   204,   211,    73,    74,   210,
      75,   157,    76,    77,    78,    74,   220,    75,   215,    76,
      77,    78,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   109,
     168,   219,   198,   200,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,   137,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,   136,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,   176,     0,     0,
       0,     0,     0,     0,     0,   212,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   171,     0,     0,   156,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   120,   121,   122,
     123,   124,   125,   126,   127,   128
};

static const yytype_int16 yycheck[] =
{
      19,   113,   100,    41,    42,   110,    87,   119,     6,     5,
       6,    70,    60,    61,     5,     3,     6,     4,    28,    29,
      30,     5,     4,    21,     4,    23,    10,    11,    28,    29,
      89,    21,    19,    23,     0,    73,    74,    75,   136,   137,
       5,     9,     5,    11,     4,    13,    42,    10,    11,     4,
      48,    42,     9,    91,    11,    59,   104,    61,    57,    97,
      59,    99,    10,   144,   145,   146,   171,    47,    17,    49,
       4,    17,   110,    53,   186,    12,    56,    96,    20,    21,
      22,   100,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    25,    10,    11,   153,    26,    27,     7,    32,     8,
     138,     4,     4,    26,     5,     5,    40,    27,    42,    14,
      44,    45,    46,   151,   212,   213,     6,   136,   137,     4,
      19,   169,   170,    35,    36,    37,    38,    39,    42,     5,
       4,    42,    29,   171,    42,   194,   195,   196,     8,     4,
     199,    15,    21,     5,    18,    64,     5,     4,    42,    23,
      24,    25,   190,     5,     4,   193,   215,    48,    32,    63,
      16,    19,     4,    43,    60,     5,    40,     5,    42,     4,
      44,    45,    46,    15,    43,    43,    18,    43,    64,    39,
      52,    23,    24,    25,     5,    19,    19,    54,    19,     6,
      32,     5,    63,   212,   213,    50,    22,    32,    40,   201,
      42,   118,    44,    45,    46,    40,    57,    42,    20,    44,
      45,    46,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    63,
     129,   216,   181,    62,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    55,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    51,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    43,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    31,    32,    33,
      34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    66,     4,     0,     5,     9,    11,    67,    69,
      74,    75,     4,    77,     4,    81,    13,    68,    71,    72,
      74,    75,    76,    59,    61,    70,    97,    98,    69,    69,
      17,    10,    17,    12,     4,    82,    83,     7,     8,     4,
      47,    49,    53,    56,    88,    89,    90,    91,    92,    94,
      95,    96,   103,    72,    72,    72,     4,    99,     4,   100,
      28,    29,    84,    85,    86,    70,    70,     4,    15,    18,
      23,    24,    25,    32,    40,    42,    44,    45,    46,    78,
      79,    87,    88,   104,     5,    26,     5,    27,    14,    19,
       6,    42,     4,    87,    87,     4,     6,    21,    23,    48,
       5,    73,    42,    71,    42,    71,    82,    82,     8,    86,
      42,     4,    80,    21,    78,    87,    87,    87,     5,    64,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     5,
      83,     5,     4,    78,    87,   105,    51,    55,    48,     4,
      88,    87,    87,    89,    28,    29,    30,   101,   102,    60,
      82,    63,   105,    19,    16,    79,    43,    77,    79,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    81,     5,
       5,    27,    43,    89,    89,    87,    22,    83,    83,    83,
      43,     5,    43,    87,    43,    78,    64,    82,    82,   105,
      52,    93,    54,    58,    19,    19,    19,     5,   101,    63,
      62,     6,    79,    87,    50,    87,    78,    78,    78,    78,
      80,    22,    51,    55,     5,    20,    89,    89,    78,    93,
      57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    69,    69,    69,    70,    70,
      70,    71,    72,    72,    73,    72,    72,    74,    75,    76,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    83,    83,    83,
      84,    84,    84,    85,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    91,    92,    93,    93,    94,    94,    95,
      96,    97,    98,    99,   100,   101,   101,   102,   102,   102,
     103,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     0,     3,     0,     4,     4,     4,
       5,     0,     3,     8,     1,     3,     2,     1,     1,     1,
       5,     0,     5,     0,     5,     5,     0,     3,     1,     0,
       1,     2,     1,     2,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     3,     3,     2,     1,
       1,     3,     1,     3,     4,     2,     3,     1,     1,     1,
       1,     1,     1,     3,     6,     5,     0,     1,     1,     5,
       9,     4,     6,     5,     7,     3,     0,     4,     4,     4,
       4,     4,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 73 "gramatica.y"
    { printf("Regla desc_algoritmo");}
#line 1465 "gramatica.tab.c"
    break;

  case 3:
#line 76 "gramatica.y"
    { printf("Regla cabecera_alg"); }
#line 1471 "gramatica.tab.c"
    break;

  case 4:
#line 79 "gramatica.y"
    { printf("Regla bloque_alg"); }
#line 1477 "gramatica.tab.c"
    break;

  case 5:
#line 82 "gramatica.y"
    { printf("Regla decl_globales ( -> tipo )"); }
#line 1483 "gramatica.tab.c"
    break;

  case 6:
#line 83 "gramatica.y"
    { printf("Regla decl_globales ( -> cte )"); }
#line 1489 "gramatica.tab.c"
    break;

  case 7:
#line 84 "gramatica.y"
    { printf("Regla decl_globales ( -> epsilon )"); }
#line 1495 "gramatica.tab.c"
    break;

  case 8:
#line 87 "gramatica.y"
    { printf("Regla decl_a_f ( -> accion)"); }
#line 1501 "gramatica.tab.c"
    break;

  case 9:
#line 88 "gramatica.y"
    { printf("Regla decl_a_f ( -> funcion)"); }
#line 1507 "gramatica.tab.c"
    break;

  case 10:
#line 89 "gramatica.y"
    { printf("Regla decl_a_f ( -> epsilon)"); }
#line 1513 "gramatica.tab.c"
    break;

  case 11:
#line 92 "gramatica.y"
    { printf("Regla bloque"); }
#line 1519 "gramatica.tab.c"
    break;

  case 12:
#line 95 "gramatica.y"
    { printf("Regla delaraciones ( -> tipo )"); }
#line 1525 "gramatica.tab.c"
    break;

  case 13:
#line 96 "gramatica.y"
    { printf("Regla delaraciones ( -> cte )"); }
#line 1531 "gramatica.tab.c"
    break;

  case 14:
#line 97 "gramatica.y"
    {}
#line 1537 "gramatica.tab.c"
    break;

  case 15:
#line 97 "gramatica.y"
    { printf("Regla delaraciones ( -> var )"); }
#line 1543 "gramatica.tab.c"
    break;

  case 16:
#line 98 "gramatica.y"
    { printf("Regla delaraciones ( -> epsilon )"); }
#line 1549 "gramatica.tab.c"
    break;

  case 17:
#line 101 "gramatica.y"
    { printf("Regla declaracion_tipo"); }
#line 1555 "gramatica.tab.c"
    break;

  case 18:
#line 104 "gramatica.y"
    { printf("Regla declaracion_cte"); }
#line 1561 "gramatica.tab.c"
    break;

  case 19:
#line 107 "gramatica.y"
    { printf("Regla declaracion_var"); }
#line 1567 "gramatica.tab.c"
    break;

  case 20:
#line 110 "gramatica.y"
    { printf("Regla lista_d_tipo"); }
#line 1573 "gramatica.tab.c"
    break;

  case 22:
#line 114 "gramatica.y"
    { printf("Regla d_tipo ( -> tupla )"); }
#line 1579 "gramatica.tab.c"
    break;

  case 23:
#line 115 "gramatica.y"
    { printf("Regla d_tipo ( -> tabla )"); }
#line 1585 "gramatica.tab.c"
    break;

  case 24:
#line 116 "gramatica.y"
    { printf("Regla d_tipo ( -> ideidentificador )"); }
#line 1591 "gramatica.tab.c"
    break;

  case 25:
#line 117 "gramatica.y"
    { printf("Regla d_tipo ( -> expresion )"); }
#line 1597 "gramatica.tab.c"
    break;

  case 26:
#line 118 "gramatica.y"
    { printf("Regla d_tipo ( -> ref )"); }
#line 1603 "gramatica.tab.c"
    break;

  case 27:
#line 119 "gramatica.y"
    { printf("Regla d_tipo ( -> tipo_base )"); }
#line 1609 "gramatica.tab.c"
    break;

  case 28:
#line 122 "gramatica.y"
    { printf("Regla expresion_t ( -> expresion )"); }
#line 1615 "gramatica.tab.c"
    break;

  case 29:
#line 123 "gramatica.y"
    { printf("Regla expresion_t ( -> literal caracter )"); }
#line 1621 "gramatica.tab.c"
    break;

  case 30:
#line 126 "gramatica.y"
    { printf("Regla lista_campos ( -> identificador )"); }
#line 1627 "gramatica.tab.c"
    break;

  case 31:
#line 127 "gramatica.y"
    { printf("Regla lista_campos ( -> epsilon )"); }
#line 1633 "gramatica.tab.c"
    break;

  case 32:
#line 130 "gramatica.y"
    { printf("Regla lista_d_cte ( -> identificador )"); }
#line 1639 "gramatica.tab.c"
    break;

  case 33:
#line 131 "gramatica.y"
    { printf("Regla lista_d_cte ( -> epsilon )"); }
#line 1645 "gramatica.tab.c"
    break;

  case 34:
#line 134 "gramatica.y"
    { printf("Regla lista_d_var ( -> identificador )"); }
#line 1651 "gramatica.tab.c"
    break;

  case 35:
#line 135 "gramatica.y"
    { printf("Regla lista_d_var ( -> d_tipo )"); }
#line 1657 "gramatica.tab.c"
    break;

  case 36:
#line 136 "gramatica.y"
    { printf("Regla lista_d_var ( -> epsilon )"); }
#line 1663 "gramatica.tab.c"
    break;

  case 37:
#line 139 "gramatica.y"
    { printf("Regla lista_id ( -> identificador , lista )"); }
#line 1669 "gramatica.tab.c"
    break;

  case 38:
#line 140 "gramatica.y"
    { printf("Regla lista_id ( -> identificador)"); }
#line 1675 "gramatica.tab.c"
    break;

  case 39:
#line 141 "gramatica.y"
    { printf("Regla lista_id ( -> epsilon )"); }
#line 1681 "gramatica.tab.c"
    break;

  case 40:
#line 144 "gramatica.y"
    { printf("Regla decl_ent_sal ( -> ent )"); }
#line 1687 "gramatica.tab.c"
    break;

  case 41:
#line 145 "gramatica.y"
    { printf("Regla decl_ent_sal ( -> ent sal )"); }
#line 1693 "gramatica.tab.c"
    break;

  case 42:
#line 146 "gramatica.y"
    { printf("Regla decl_ent_sal ( -> sal )"); }
#line 1699 "gramatica.tab.c"
    break;

  case 43:
#line 149 "gramatica.y"
    { printf("Regla decl_ent"); }
#line 1705 "gramatica.tab.c"
    break;

  case 44:
#line 152 "gramatica.y"
    { printf("Regla decl_sal"); }
#line 1711 "gramatica.tab.c"
    break;

  case 45:
#line 155 "gramatica.y"
    { printf("Regla expresion (-> funcion_ll)"); }
#line 1717 "gramatica.tab.c"
    break;

  case 46:
#line 156 "gramatica.y"
    { printf("Regla expresion (-> suma)"); }
#line 1723 "gramatica.tab.c"
    break;

  case 47:
#line 157 "gramatica.y"
    { printf("Regla expresion (-> resta)"); }
#line 1729 "gramatica.tab.c"
    break;

  case 48:
#line 158 "gramatica.y"
    { printf("Regla expresion (-> multiplicacion)"); }
#line 1735 "gramatica.tab.c"
    break;

  case 49:
#line 159 "gramatica.y"
    { printf("Regla expresion (-> division)"); }
#line 1741 "gramatica.tab.c"
    break;

  case 50:
#line 160 "gramatica.y"
    { printf("Regla expresion (-> modulo)"); }
#line 1747 "gramatica.tab.c"
    break;

  case 51:
#line 161 "gramatica.y"
    { printf("Regla expresion (-> div)"); }
#line 1753 "gramatica.tab.c"
    break;

  case 52:
#line 162 "gramatica.y"
    { printf("Regla expresion (-> parentesis)"); }
#line 1759 "gramatica.tab.c"
    break;

  case 53:
#line 163 "gramatica.y"
    { printf("Regla expresion (-> operando)"); }
#line 1765 "gramatica.tab.c"
    break;

  case 54:
#line 164 "gramatica.y"
    { printf("Regla expresion (-> literal numerico)"); }
#line 1771 "gramatica.tab.c"
    break;

  case 55:
#line 165 "gramatica.y"
    { printf("Regla expresion (-> menos unario)"); }
#line 1777 "gramatica.tab.c"
    break;

  case 56:
#line 166 "gramatica.y"
    { printf("Regla expresion (-> and)"); }
#line 1783 "gramatica.tab.c"
    break;

  case 57:
#line 167 "gramatica.y"
    { printf("Regla expresion (-> or)"); }
#line 1789 "gramatica.tab.c"
    break;

  case 58:
#line 168 "gramatica.y"
    { printf("Regla expresion (-> not)"); }
#line 1795 "gramatica.tab.c"
    break;

  case 59:
#line 169 "gramatica.y"
    { printf("Regla expresion (-> verdadero)"); }
#line 1801 "gramatica.tab.c"
    break;

  case 60:
#line 170 "gramatica.y"
    { printf("Regla expresion (-> falso)"); }
#line 1807 "gramatica.tab.c"
    break;

  case 61:
#line 171 "gramatica.y"
    { printf("Regla expresion (-> operador relacional)"); }
#line 1813 "gramatica.tab.c"
    break;

  case 62:
#line 174 "gramatica.y"
    { printf("Regla operando (-> identificador)"); }
#line 1819 "gramatica.tab.c"
    break;

  case 63:
#line 175 "gramatica.y"
    { printf("Regla operando (-> punto)"); }
#line 1825 "gramatica.tab.c"
    break;

  case 64:
#line 176 "gramatica.y"
    { printf("Regla operando (-> corchetes)"); }
#line 1831 "gramatica.tab.c"
    break;

  case 65:
#line 177 "gramatica.y"
    { printf("Regla operando (-> ref)"); }
#line 1837 "gramatica.tab.c"
    break;

  case 66:
#line 180 "gramatica.y"
    { printf("Regla instrucciones (-> punto y coma)"); }
#line 1843 "gramatica.tab.c"
    break;

  case 67:
#line 181 "gramatica.y"
    { printf("Regla instrucciones (-> instruccion)"); }
#line 1849 "gramatica.tab.c"
    break;

  case 68:
#line 184 "gramatica.y"
    { printf("Regla instruccion (-> continuar)"); }
#line 1855 "gramatica.tab.c"
    break;

  case 69:
#line 185 "gramatica.y"
    { printf("Regla instruccion (-> asignacion)"); }
#line 1861 "gramatica.tab.c"
    break;

  case 70:
#line 186 "gramatica.y"
    { printf("Regla instruccion (-> alternativa)"); }
#line 1867 "gramatica.tab.c"
    break;

  case 71:
#line 187 "gramatica.y"
    { printf("Regla instruccion (-> iteracion)"); }
#line 1873 "gramatica.tab.c"
    break;

  case 72:
#line 188 "gramatica.y"
    { printf("Regla instruccion (-> accion_ll)"); }
#line 1879 "gramatica.tab.c"
    break;

  case 73:
#line 191 "gramatica.y"
    { printf("Regla asignacion"); }
#line 1885 "gramatica.tab.c"
    break;

  case 74:
#line 194 "gramatica.y"
    { printf("Regla alternativa"); }
#line 1891 "gramatica.tab.c"
    break;

  case 75:
#line 197 "gramatica.y"
    { printf("Regla lista_opciones (-> sino)"); }
#line 1897 "gramatica.tab.c"
    break;

  case 76:
#line 198 "gramatica.y"
    { printf("Regla alternativa (-> epsilon)"); }
#line 1903 "gramatica.tab.c"
    break;

  case 77:
#line 201 "gramatica.y"
    { printf("Regla iteracion (-> cota fija)"); }
#line 1909 "gramatica.tab.c"
    break;

  case 78:
#line 202 "gramatica.y"
    { printf("Regla iteracion (-> cota expresion)"); }
#line 1915 "gramatica.tab.c"
    break;

  case 79:
#line 205 "gramatica.y"
    { printf("Regla it_cota_exp"); }
#line 1921 "gramatica.tab.c"
    break;

  case 80:
#line 208 "gramatica.y"
    { printf("Regla it_cota_fija"); }
#line 1927 "gramatica.tab.c"
    break;

  case 81:
#line 211 "gramatica.y"
    { printf("Regla accion_d"); }
#line 1933 "gramatica.tab.c"
    break;

  case 82:
#line 214 "gramatica.y"
    { printf("Regla funcion_d"); }
#line 1939 "gramatica.tab.c"
    break;

  case 83:
#line 217 "gramatica.y"
    { printf("Regla a_cabecera"); }
#line 1945 "gramatica.tab.c"
    break;

  case 84:
#line 220 "gramatica.y"
    { printf("Regla f_cabecera"); }
#line 1951 "gramatica.tab.c"
    break;

  case 85:
#line 223 "gramatica.y"
    { printf("Regla d_par_form (-> punto y coma)"); }
#line 1957 "gramatica.tab.c"
    break;

  case 86:
#line 224 "gramatica.y"
    { printf("Regla d_par_form (-> epsilon)"); }
#line 1963 "gramatica.tab.c"
    break;

  case 87:
#line 227 "gramatica.y"
    { printf("Regla d_p_form (-> ent)"); }
#line 1969 "gramatica.tab.c"
    break;

  case 88:
#line 228 "gramatica.y"
    { printf("Regla d_p_form (-> sal)"); }
#line 1975 "gramatica.tab.c"
    break;

  case 89:
#line 229 "gramatica.y"
    { printf("Regla d_p_form (-> ent_sal)"); }
#line 1981 "gramatica.tab.c"
    break;

  case 90:
#line 232 "gramatica.y"
    { printf("Regla accion_ll"); }
#line 1987 "gramatica.tab.c"
    break;

  case 91:
#line 235 "gramatica.y"
    { printf("Regla funcion_ll"); }
#line 1993 "gramatica.tab.c"
    break;

  case 92:
#line 238 "gramatica.y"
    { printf("Regla l_ll (-> coma)"); }
#line 1999 "gramatica.tab.c"
    break;

  case 93:
#line 239 "gramatica.y"
    { printf("Regla l_ll (-> expresion)"); }
#line 2005 "gramatica.tab.c"
    break;


#line 2009 "gramatica.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 242 "gramatica.y"

void yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

