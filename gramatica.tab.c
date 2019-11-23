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
#line 1 "gramatica.y"

  #include <stdio.h>
  #include "TablaDeSimbolos.h"
  #include "TablaDeCuadruplas.h"
  #include <string.h>
  int yylex (void);
  void yyerror (char const *);

  TablaDeSimbolos* tabla_simbolos;
  TablaDeCuadruplas* tabla_cuadruplas;

  typedef struct ListaStrings{
        char* string;
        struct ListaStrings* siguiente;
  }ListaStrings;

  typedef struct Expresion{
          int place;
          char* code;
          char* tipo;
  }Expresion;

#line 93 "gramatica.tab.c"

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
    tk_precondicion = 260,
    tk_postcondicion = 261,
    tk_punto_coma = 262,
    tk_punto = 263,
    tk_falgoritmo = 264,
    tk_tipo = 265,
    tk_ftipo = 266,
    tk_const = 267,
    tk_fconst = 268,
    tk_var = 269,
    tk_fvar = 270,
    tk_tupla = 271,
    tk_ftupla = 272,
    tk_igual = 273,
    tk_tabla = 274,
    tk_dospuntos = 275,
    tk_de = 276,
    tk_corchete_abierto = 277,
    tk_corchete_cerrado = 278,
    tk_ref = 279,
    tk_tipo_base = 280,
    tk_literal_caracter = 281,
    tk_literal = 282,
    tk_coma = 283,
    tk_ent = 284,
    tk_sal = 285,
    tk_ent_sal = 286,
    tk_suma = 287,
    tk_resta = 288,
    tk_AND = 289,
    tk_OR = 290,
    tk_multiplicacion = 291,
    tk_division = 292,
    tk_modulo = 293,
    tk_div = 294,
    tk_operador_relacional = 295,
    tk_NOT = 296,
    tk_menos_unario = 297,
    tk_parentesis_apertura = 298,
    tk_parentesis_cierre = 299,
    tk_literal_numerico = 300,
    tk_verdadero = 301,
    tk_falso = 302,
    tk_continuar = 303,
    tk_asignacion = 304,
    tk_si = 305,
    tk_fsi = 306,
    tk_entonces = 307,
    tk_sino = 308,
    tk_mientras = 309,
    tk_fmientras = 310,
    tk_hacer = 311,
    tk_para = 312,
    tk_fpara = 313,
    tk_hasta = 314,
    tk_accion = 315,
    tk_faccion = 316,
    tk_funcion = 317,
    tk_ffuncion = 318,
    tk_dev = 319,
    tk_subrango = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "gramatica.y"

        int uEntero;
	char* uString;
        struct ListaStrings* uListaStrings;
        struct Expresion* uExpresion;

#line 209 "gramatica.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
#define YYLAST   302

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

#define YYUNDEFTOK  2
#define YYMAXUTOK   320

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   102,   105,   108,   109,   110,   113,   114,
     115,   118,   121,   122,   123,   124,   127,   130,   133,   136,
     137,   140,   144,   148,   152,   156,   157,   163,   164,   167,
     168,   171,   172,   175,   190,   193,   205,   211,   214,   215,
     216,   219,   222,   225,   226,   254,   255,   256,   257,   258,
     259,   260,   266,   267,   268,   269,   270,   271,   272,   273,
     276,   280,   281,   282,   285,   286,   289,   290,   291,   292,
     293,   296,   299,   302,   303,   306,   307,   310,   313,   316,
     319,   322,   325,   328,   329,   332,   333,   334,   337,   340,
     343,   344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tk_algoritmo", "tk_identificador",
  "tk_precondicion", "tk_postcondicion", "tk_punto_coma", "tk_punto",
  "tk_falgoritmo", "tk_tipo", "tk_ftipo", "tk_const", "tk_fconst",
  "tk_var", "tk_fvar", "tk_tupla", "tk_ftupla", "tk_igual", "tk_tabla",
  "tk_dospuntos", "tk_de", "tk_corchete_abierto", "tk_corchete_cerrado",
  "tk_ref", "tk_tipo_base", "tk_literal_caracter", "tk_literal", "tk_coma",
  "tk_ent", "tk_sal", "tk_ent_sal", "tk_suma", "tk_resta", "tk_AND",
  "tk_OR", "tk_multiplicacion", "tk_division", "tk_modulo", "tk_div",
  "tk_operador_relacional", "tk_NOT", "tk_menos_unario",
  "tk_parentesis_apertura", "tk_parentesis_cierre", "tk_literal_numerico",
  "tk_verdadero", "tk_falso", "tk_continuar", "tk_asignacion", "tk_si",
  "tk_fsi", "tk_entonces", "tk_sino", "tk_mientras", "tk_fmientras",
  "tk_hacer", "tk_para", "tk_fpara", "tk_hasta", "tk_accion", "tk_faccion",
  "tk_funcion", "tk_ffuncion", "tk_dev", "tk_subrango", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
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
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -38

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,    14,    55,   102,  -109,    34,    66,   109,    63,   -10,
      34,    34,   100,   108,   103,   107,     7,   113,   117,    15,
      63,    63,    63,   120,   123,    -1,   -10,   -10,  -109,  -109,
     121,   122,   101,   128,   110,   124,   129,  -109,  -109,    98,
    -109,   130,   130,   138,     2,  -109,   136,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,   112,    63,   114,    63,
       7,     7,   139,   126,  -109,  -109,  -109,     6,   149,   137,
     121,  -109,  -109,   130,   130,   130,  -109,  -109,  -109,   143,
      93,   253,     8,  -109,  -109,   153,  -109,   157,   162,   121,
     130,   127,   192,   158,   116,   168,   130,  -109,   130,    15,
       4,   147,     7,   148,  -109,  -109,  -109,  -109,   130,   154,
     170,    21,  -109,  -109,  -109,   231,    66,    21,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   109,  -109,  -109,
     203,   244,   169,    15,    15,   130,  -109,     8,   222,   253,
    -109,   157,   157,   157,   171,   204,  -109,   172,   130,   173,
     121,  -109,   155,  -109,  -109,  -109,    57,    57,    57,    57,
     178,   178,   178,   178,  -109,  -109,     7,   130,  -109,   166,
     187,    67,  -109,   202,   223,   226,   214,     4,   183,   146,
    -109,   240,    21,  -109,  -109,   130,   198,  -109,   130,   121,
     121,   121,  -109,  -109,   121,  -109,   149,   227,   201,  -109,
     167,  -109,  -109,  -109,   245,  -109,   230,    15,    15,  -109,
     121,   166,   215,  -109,  -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    34,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    36,     0,     0,     2,     4,    60,
      66,     0,     0,     0,     0,    11,    65,    67,    68,    69,
      76,    75,    70,    12,    13,    14,     0,    15,     0,    15,
      34,    34,     0,    38,    40,     8,     9,    60,    30,     0,
       0,    26,    28,     0,     0,     0,    52,    57,    58,     0,
       0,    27,    51,    43,    16,     0,    17,    37,     0,     0,
       0,    60,     0,     0,     0,     0,     0,    63,     0,     0,
      84,     0,    34,     0,    41,    42,     3,    39,     0,     0,
       0,     0,    25,    53,    56,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    35,    18,
       0,    91,     0,     0,     0,     0,    60,    61,     0,    71,
      64,    37,    37,    37,     0,     0,    79,     0,     0,     0,
       0,    21,     0,    50,    19,    24,    44,    45,    54,    55,
      46,    47,    48,    49,    59,    31,    34,     0,    88,    74,
       0,     0,    62,     0,     0,     0,     0,    84,     0,     0,
      89,     0,     0,    33,    90,     0,     0,    77,     0,     0,
       0,     0,    81,    83,     0,    80,    30,     0,     0,    72,
       0,    85,    86,    87,     0,    29,     0,     0,     0,    82,
       0,    74,     0,    22,    73,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,    68,    64,    51,    19,    10,    12,
    -109,   179,   -58,  -108,    78,   174,   -54,   -85,  -109,  -109,
     233,   -37,   -19,   -91,  -109,  -109,  -109,    83,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,   125,  -109,  -109,  -109,  -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    79,    80,   110,    15,    35,    36,    62,    63,
      64,    81,    82,    45,    46,    47,    48,   186,    49,    50,
      51,    26,    27,    57,    59,   144,   145,    52,    83,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   149,   128,   152,    92,    93,   104,   105,   140,   155,
      95,    34,   112,   -23,   -23,    10,    95,    11,     3,    39,
      10,    10,    11,    11,    96,    91,    97,   -37,    60,    61,
      96,   130,    97,   141,   142,   143,   113,   114,   115,    53,
      54,    55,   169,   170,     6,     1,     7,    72,   147,   108,
      23,    98,    24,   131,    73,     4,   173,   174,   175,   138,
     184,   139,    74,    40,    75,    41,    76,    77,    78,    42,
      12,   131,    43,     6,   197,     7,   137,    16,    28,    29,
      44,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      65,    66,   181,   122,   123,   124,   125,   126,   171,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   101,     5,
     103,   179,   183,    14,    44,    44,   211,   212,    30,    31,
      33,    32,    37,    38,    56,    67,   188,    58,    85,    84,
     131,   201,   202,   203,    91,    86,   204,    68,    87,    88,
      69,    90,    94,    99,   106,    70,    71,    72,   198,    89,
     116,   200,   213,   109,    73,   100,    61,   102,   117,   111,
     127,    34,    74,    73,    75,   135,    76,    77,    78,   129,
     108,    74,   136,    75,   150,    76,    77,    78,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   151,    44,    44,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   146,   195,
     166,   177,   148,   168,   134,   176,   178,   180,   126,   185,
     182,   192,   189,   208,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   187,   190,   133,   172,   191,   194,   196,   199,
     206,   210,   209,   207,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   167,   215,   205,   153,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   214,   154,   107,     0,     0,     0,
       0,   165,   193
};

static const yytype_int16 yycheck[] =
{
      19,   108,    87,   111,    41,    42,    60,    61,    99,   117,
       8,     4,    70,     7,     8,     5,     8,     5,     4,     4,
      10,    11,    10,    11,    22,     4,    24,    20,    29,    30,
      22,    89,    24,    29,    30,    31,    73,    74,    75,    20,
      21,    22,   133,   134,    10,     3,    12,    26,   102,    43,
      60,    49,    62,    90,    33,     0,   141,   142,   143,    96,
     167,    98,    41,    48,    43,    50,    45,    46,    47,    54,
       4,   108,    57,    10,   182,    12,    95,    14,    10,    11,
      99,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      26,    27,   150,    36,    37,    38,    39,    40,   135,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    57,     7,
      59,   148,   166,     4,   133,   134,   207,   208,    18,    11,
      13,    18,     9,     6,     4,     4,    59,     4,    27,     7,
     167,   189,   190,   191,     4,     7,   194,    16,    28,    15,
      19,    43,     4,     7,     5,    24,    25,    26,   185,    20,
       7,   188,   210,     4,    33,    43,    30,    43,    65,    22,
       7,     4,    41,    33,    43,    49,    45,    46,    47,     7,
      43,    41,     4,    43,    20,    45,    46,    47,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    17,   207,   208,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    61,    63,
       7,     7,    64,    44,    56,    44,    44,    44,    40,    53,
      65,     7,    20,    56,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    55,    20,    52,    23,    20,    64,     8,    51,
      23,    21,     7,    52,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    28,    58,   196,    44,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   211,   116,    63,    -1,    -1,    -1,
      -1,   127,   177
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,     4,     0,     7,    10,    12,    68,    70,
      74,    75,     4,    77,     4,    81,    14,    69,    72,    73,
      74,    75,    76,    60,    62,    71,    97,    98,    70,    70,
      18,    11,    18,    13,     4,    82,    83,     9,     6,     4,
      48,    50,    54,    57,    88,    89,    90,    91,    92,    94,
      95,    96,   103,    73,    73,    73,     4,    99,     4,   100,
      29,    30,    84,    85,    86,    71,    71,     4,    16,    19,
      24,    25,    26,    33,    41,    43,    45,    46,    47,    78,
      79,    87,    88,   104,     7,    27,     7,    28,    15,    20,
      43,     4,    87,    87,     4,     8,    22,    24,    49,     7,
      43,    72,    43,    72,    82,    82,     5,    86,    43,     4,
      80,    22,    78,    87,    87,    87,     7,    65,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     7,    83,     7,
      78,    87,   105,    52,    56,    49,     4,    88,    87,    87,
      89,    29,    30,    31,   101,   102,    61,    82,    64,   105,
      20,    17,    79,    44,    77,    79,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    81,     7,    28,    44,    89,
      89,    87,    23,    83,    83,    83,    44,     7,    44,    87,
      44,    78,    65,    82,   105,    53,    93,    55,    59,    20,
      20,    20,     7,   101,    64,    63,     8,    79,    87,    51,
      87,    78,    78,    78,    78,    80,    23,    52,    56,     7,
      21,    89,    89,    78,    93,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    69,    70,    70,    70,    71,    71,
      71,    72,    73,    73,    73,    73,    74,    75,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    84,    84,
      84,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    92,    93,    93,    94,    94,    95,    96,    97,
      98,    99,   100,   101,   101,   102,   102,   102,   103,   104,
     105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     0,     3,     1,     0,     1,     2,
       1,     2,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     3,     3,     2,     1,     1,     3,
       1,     3,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     6,     5,     0,     1,     1,     5,     9,     4,
       6,     5,     7,     3,     0,     4,     4,     4,     4,     4,
       3,     1
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
#line 99 "gramatica.y"
    { printf("\tRegla desc_algoritmo\n");}
#line 1482 "gramatica.tab.c"
    break;

  case 3:
#line 102 "gramatica.y"
    { printf("\tRegla cabecera_alg\n"); }
#line 1488 "gramatica.tab.c"
    break;

  case 4:
#line 105 "gramatica.y"
    { printf("\tRegla bloque_alg\n"); }
#line 1494 "gramatica.tab.c"
    break;

  case 5:
#line 108 "gramatica.y"
    { printf("\tRegla decl_globales ( -> tipo )\n"); }
#line 1500 "gramatica.tab.c"
    break;

  case 6:
#line 109 "gramatica.y"
    { printf("\tRegla decl_globales ( -> cte )\n"); }
#line 1506 "gramatica.tab.c"
    break;

  case 7:
#line 110 "gramatica.y"
    { printf("\tRegla decl_globales ( -> epsilon )\n"); }
#line 1512 "gramatica.tab.c"
    break;

  case 8:
#line 113 "gramatica.y"
    { printf("\tRegla decl_a_f ( -> accion)\n"); }
#line 1518 "gramatica.tab.c"
    break;

  case 9:
#line 114 "gramatica.y"
    { printf("\tRegla decl_a_f ( -> funcion)\n"); }
#line 1524 "gramatica.tab.c"
    break;

  case 10:
#line 115 "gramatica.y"
    { printf("\tRegla decl_a_f ( -> epsilon)\n"); }
#line 1530 "gramatica.tab.c"
    break;

  case 11:
#line 118 "gramatica.y"
    { printf("\tRegla bloque\n"); }
#line 1536 "gramatica.tab.c"
    break;

  case 12:
#line 121 "gramatica.y"
    { printf("\tRegla delaraciones ( -> tipo )\n"); }
#line 1542 "gramatica.tab.c"
    break;

  case 13:
#line 122 "gramatica.y"
    { printf("\tRegla delaraciones ( -> cte )\n"); }
#line 1548 "gramatica.tab.c"
    break;

  case 14:
#line 123 "gramatica.y"
    { printf("\tRegla delaraciones ( -> var )\n"); }
#line 1554 "gramatica.tab.c"
    break;

  case 15:
#line 124 "gramatica.y"
    { printf("\tRegla delaraciones ( -> epsilon )\n"); }
#line 1560 "gramatica.tab.c"
    break;

  case 16:
#line 127 "gramatica.y"
    { printf("\tRegla declaracion_tipo\n"); }
#line 1566 "gramatica.tab.c"
    break;

  case 17:
#line 130 "gramatica.y"
    { printf("\tRegla declaracion_cte\n"); }
#line 1572 "gramatica.tab.c"
    break;

  case 18:
#line 133 "gramatica.y"
    { printf("\tRegla declaracion_var\n"); }
#line 1578 "gramatica.tab.c"
    break;

  case 19:
#line 136 "gramatica.y"
    { printf("\tRegla lista_d_tipo\n"); }
#line 1584 "gramatica.tab.c"
    break;

  case 21:
#line 140 "gramatica.y"
    { 
                        printf("\tRegla d_tipo ( -> tupla )\n");
                        (yyval.uString) = "tupla"; 
                }
#line 1593 "gramatica.tab.c"
    break;

  case 22:
#line 144 "gramatica.y"
    {
                        printf("\tRegla d_tipo ( -> tabla )\n");
                        (yyval.uString) = "tabla"; 
                }
#line 1602 "gramatica.tab.c"
    break;

  case 23:
#line 148 "gramatica.y"
    {
                        printf("\tRegla d_tipo ( -> ideidentificador )\n");
                        (yyval.uString) = strdup((yyvsp[0].uString));
                }
#line 1611 "gramatica.tab.c"
    break;

  case 24:
#line 152 "gramatica.y"
    {
                        printf("\tRegla d_tipo ( -> expresion )\n");
                        (yyval.uString) = "expresion";
                }
#line 1620 "gramatica.tab.c"
    break;

  case 25:
#line 156 "gramatica.y"
    { printf("\tRegla d_tipo ( -> ref )\n"); }
#line 1626 "gramatica.tab.c"
    break;

  case 26:
#line 157 "gramatica.y"
    {
                        printf("\tRegla d_tipo ( -> tipo_base )\n");
                        (yyval.uString) = strdup((yyvsp[0].uString));
                }
#line 1635 "gramatica.tab.c"
    break;

  case 27:
#line 163 "gramatica.y"
    { printf("\tRegla expresion_t ( -> expresion )\n"); }
#line 1641 "gramatica.tab.c"
    break;

  case 28:
#line 164 "gramatica.y"
    { printf("\tRegla expresion_t ( -> literal caracter )\n"); }
#line 1647 "gramatica.tab.c"
    break;

  case 29:
#line 167 "gramatica.y"
    { printf("\tRegla lista_campos ( -> identificador )\n"); }
#line 1653 "gramatica.tab.c"
    break;

  case 30:
#line 168 "gramatica.y"
    { printf("\tRegla lista_campos ( -> epsilon )\n"); }
#line 1659 "gramatica.tab.c"
    break;

  case 31:
#line 171 "gramatica.y"
    { printf("\tRegla lista_d_cte ( -> identificador )\n"); }
#line 1665 "gramatica.tab.c"
    break;

  case 32:
#line 172 "gramatica.y"
    { printf("\tRegla lista_d_cte ( -> epsilon )\n"); }
#line 1671 "gramatica.tab.c"
    break;

  case 33:
#line 175 "gramatica.y"
    {
                        printf("\tRegla lista_d_var ( -> d_tipo )\n");
                        ListaStrings* listaIdentidicadores = (yyvsp[-4].uListaStrings);
                        while(listaIdentidicadores->siguiente != NULL){
                                if(buscarSimbolo(listaIdentidicadores->string, tabla_simbolos) == -1){
                                        Simbolo* simb = nuevoSimbolo(strdup(listaIdentidicadores->string), strdup((yyvsp[-2].uString)));
                                        insertarSimbolo(tabla_simbolos, simb);
                                }
                                listaIdentidicadores = listaIdentidicadores->siguiente;
                        }
                        if(buscarSimbolo(listaIdentidicadores->string, tabla_simbolos) == -1){
                                Simbolo* simb = nuevoSimbolo(strdup(listaIdentidicadores->string), strdup((yyvsp[-2].uString)));
                                insertarSimbolo(tabla_simbolos, simb);
                        }                
                }
#line 1691 "gramatica.tab.c"
    break;

  case 34:
#line 190 "gramatica.y"
    { printf("\tRegla lista_d_var ( -> epsilon )\n"); }
#line 1697 "gramatica.tab.c"
    break;

  case 35:
#line 193 "gramatica.y"
    {
                        printf("\tRegla lista_id ( -> identificador , lista )\n");
                        ListaStrings* indice = (yyvsp[0].uListaStrings);
                        ListaStrings* identificadorIntroducir = (ListaStrings*)malloc(sizeof(ListaStrings));
                        identificadorIntroducir->string = strdup((yyvsp[-2].uString));
                        identificadorIntroducir->siguiente = NULL;
                        while(indice->siguiente != NULL){
                                indice = indice->siguiente;
                        }
                        indice->siguiente = identificadorIntroducir;
                        (yyval.uListaStrings) = (yyvsp[0].uListaStrings);
                }
#line 1714 "gramatica.tab.c"
    break;

  case 36:
#line 205 "gramatica.y"
    {
                        printf("\tRegla lista_id ( -> identificador)\n");
                        (yyval.uListaStrings) = (ListaStrings*)malloc(sizeof(ListaStrings));
                        (yyval.uListaStrings)->string = strdup((yyvsp[0].uString));
                        (yyval.uListaStrings)->siguiente = NULL;
                }
#line 1725 "gramatica.tab.c"
    break;

  case 37:
#line 211 "gramatica.y"
    { printf("\tRegla lista_id ( -> epsilon )\n"); }
#line 1731 "gramatica.tab.c"
    break;

  case 38:
#line 214 "gramatica.y"
    { printf("\tRegla decl_ent_sal ( -> ent )\n"); }
#line 1737 "gramatica.tab.c"
    break;

  case 39:
#line 215 "gramatica.y"
    { printf("\tRegla decl_ent_sal ( -> ent sal )\n"); }
#line 1743 "gramatica.tab.c"
    break;

  case 40:
#line 216 "gramatica.y"
    { printf("\tRegla decl_ent_sal ( -> sal )\n"); }
#line 1749 "gramatica.tab.c"
    break;

  case 41:
#line 219 "gramatica.y"
    { printf("\tRegla decl_ent\n"); }
#line 1755 "gramatica.tab.c"
    break;

  case 42:
#line 222 "gramatica.y"
    { printf("\tRegla decl_sal\n"); }
#line 1761 "gramatica.tab.c"
    break;

  case 43:
#line 225 "gramatica.y"
    { printf("\tRegla expresion (-> funcion_ll)\n"); }
#line 1767 "gramatica.tab.c"
    break;

  case 44:
#line 226 "gramatica.y"
    {
                        printf("\tRegla expresion (-> suma)\n");
                        printf("\t\t-->Tipo1: %s Tipo2: %s\n", (yyvsp[-2].uExpresion)->tipo, (yyvsp[0].uExpresion)->tipo);
                        char* tipoExpresion1 = strdup((yyvsp[-2].uExpresion)->tipo);
                        char* tipoExpresion2 = strdup((yyvsp[0].uExpresion)->tipo);
                        if(strcmp(tipoExpresion1, "entero") == 0 &&strcmp(tipoExpresion2, "entero") == 0){
                                (yyval.uExpresion)->tipo = "entero";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                (yyval.uExpresion)->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_enteros",(yyvsp[-2].uExpresion)->place, (yyvsp[0].uExpresion)->place, (yyval.uExpresion)->place);
                        } else if(strcmp(tipoExpresion1, "entero") == 0 &&strcmp(tipoExpresion2, "real") == 0) {
                               (yyval.uExpresion)->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                (yyval.uExpresion)->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_real",(yyvsp[-2].uExpresion)->place, (yyvsp[0].uExpresion)->place, (yyval.uExpresion)->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 &&strcmp(tipoExpresion2, "entero") == 0) {
                               (yyval.uExpresion)->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                (yyval.uExpresion)->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_real",(yyvsp[-2].uExpresion)->place, (yyvsp[0].uExpresion)->place, (yyval.uExpresion)->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 &&strcmp(tipoExpresion2, "real") == 0) {
                               (yyval.uExpresion)->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                (yyval.uExpresion)->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_real",(yyvsp[-2].uExpresion)->place, (yyvsp[0].uExpresion)->place, (yyval.uExpresion)->place); 
                        }

                }
#line 1800 "gramatica.tab.c"
    break;

  case 45:
#line 254 "gramatica.y"
    { printf("\tRegla expresion (-> resta)\n"); }
#line 1806 "gramatica.tab.c"
    break;

  case 46:
#line 255 "gramatica.y"
    { printf("\tRegla expresion (-> multiplicacion)\n"); }
#line 1812 "gramatica.tab.c"
    break;

  case 47:
#line 256 "gramatica.y"
    { printf("\tRegla expresion (-> division)\n"); }
#line 1818 "gramatica.tab.c"
    break;

  case 48:
#line 257 "gramatica.y"
    { printf("\tRegla expresion (-> modulo)\n"); }
#line 1824 "gramatica.tab.c"
    break;

  case 49:
#line 258 "gramatica.y"
    { printf("\tRegla expresion (-> div)\n"); }
#line 1830 "gramatica.tab.c"
    break;

  case 50:
#line 259 "gramatica.y"
    { printf("\tRegla expresion (-> parentesis)\n"); }
#line 1836 "gramatica.tab.c"
    break;

  case 51:
#line 260 "gramatica.y"
    {
                        printf("\tRegla expresion (-> operando)\n");
                        (yyval.uExpresion) = (Expresion*)malloc(sizeof(Expresion));
                        (yyval.uExpresion)->place = (yyvsp[0].uEntero);
		        (yyval.uExpresion)->tipo = consultarTipo(tabla_simbolos, (yyvsp[0].uEntero));
                }
#line 1847 "gramatica.tab.c"
    break;

  case 52:
#line 266 "gramatica.y"
    { printf("\tRegla expresion (-> literal numerico)\n"); }
#line 1853 "gramatica.tab.c"
    break;

  case 53:
#line 267 "gramatica.y"
    { printf("\tRegla expresion (-> menos unario)\n"); }
#line 1859 "gramatica.tab.c"
    break;

  case 54:
#line 268 "gramatica.y"
    { printf("\tRegla expresion (-> and)\n"); }
#line 1865 "gramatica.tab.c"
    break;

  case 55:
#line 269 "gramatica.y"
    { printf("\tRegla expresion (-> or)\n"); }
#line 1871 "gramatica.tab.c"
    break;

  case 56:
#line 270 "gramatica.y"
    { printf("\tRegla expresion (-> not)\n"); }
#line 1877 "gramatica.tab.c"
    break;

  case 57:
#line 271 "gramatica.y"
    { printf("\tRegla expresion (-> verdadero)\n"); }
#line 1883 "gramatica.tab.c"
    break;

  case 58:
#line 272 "gramatica.y"
    { printf("\tRegla expresion (-> falso)\n"); }
#line 1889 "gramatica.tab.c"
    break;

  case 59:
#line 273 "gramatica.y"
    { printf("\tRegla expresion (-> operador relacional)\n"); }
#line 1895 "gramatica.tab.c"
    break;

  case 60:
#line 276 "gramatica.y"
    {
                        printf("\tRegla operando (-> identificador)\n");
                        (yyval.uEntero) = buscarSimbolo((yyvsp[0].uString), tabla_simbolos);
                }
#line 1904 "gramatica.tab.c"
    break;

  case 61:
#line 280 "gramatica.y"
    { printf("\tRegla operando (-> punto)\n"); }
#line 1910 "gramatica.tab.c"
    break;

  case 62:
#line 281 "gramatica.y"
    { printf("\tRegla operando (-> corchetes)\n"); }
#line 1916 "gramatica.tab.c"
    break;

  case 63:
#line 282 "gramatica.y"
    { printf("\tRegla operando (-> ref)\n"); }
#line 1922 "gramatica.tab.c"
    break;

  case 64:
#line 285 "gramatica.y"
    { printf("\tRegla instrucciones (-> punto y coma)\n"); }
#line 1928 "gramatica.tab.c"
    break;

  case 65:
#line 286 "gramatica.y"
    { printf("\tRegla instrucciones (-> instruccion)\n"); }
#line 1934 "gramatica.tab.c"
    break;

  case 66:
#line 289 "gramatica.y"
    { printf("\tRegla instruccion (-> continuar)\n"); }
#line 1940 "gramatica.tab.c"
    break;

  case 67:
#line 290 "gramatica.y"
    { printf("\tRegla instruccion (-> asignacion)\n"); }
#line 1946 "gramatica.tab.c"
    break;

  case 68:
#line 291 "gramatica.y"
    { printf("\tRegla instruccion (-> alternativa)\n"); }
#line 1952 "gramatica.tab.c"
    break;

  case 69:
#line 292 "gramatica.y"
    { printf("\tRegla instruccion (-> iteracion)\n"); }
#line 1958 "gramatica.tab.c"
    break;

  case 70:
#line 293 "gramatica.y"
    { printf("\tRegla instruccion (-> accion_ll)\n"); }
#line 1964 "gramatica.tab.c"
    break;

  case 71:
#line 296 "gramatica.y"
    { printf("\tRegla asignacion\n"); }
#line 1970 "gramatica.tab.c"
    break;

  case 72:
#line 299 "gramatica.y"
    { printf("\tRegla alternativa\n"); }
#line 1976 "gramatica.tab.c"
    break;

  case 73:
#line 302 "gramatica.y"
    { printf("\tRegla lista_opciones (-> sino)\n"); }
#line 1982 "gramatica.tab.c"
    break;

  case 74:
#line 303 "gramatica.y"
    { printf("\tRegla alternativa (-> epsilon)\n"); }
#line 1988 "gramatica.tab.c"
    break;

  case 75:
#line 306 "gramatica.y"
    { printf("\tRegla iteracion (-> cota fija)\n"); }
#line 1994 "gramatica.tab.c"
    break;

  case 76:
#line 307 "gramatica.y"
    { printf("\tRegla iteracion (-> cota expresion)\n"); }
#line 2000 "gramatica.tab.c"
    break;

  case 77:
#line 310 "gramatica.y"
    { printf("\tRegla it_cota_exp\n"); }
#line 2006 "gramatica.tab.c"
    break;

  case 78:
#line 313 "gramatica.y"
    { printf("\tRegla it_cota_fija\n"); }
#line 2012 "gramatica.tab.c"
    break;

  case 79:
#line 316 "gramatica.y"
    { printf("\tRegla accion_d\n"); }
#line 2018 "gramatica.tab.c"
    break;

  case 80:
#line 319 "gramatica.y"
    { printf("\tRegla funcion_d\n"); }
#line 2024 "gramatica.tab.c"
    break;

  case 81:
#line 322 "gramatica.y"
    { printf("\tRegla a_cabecera\n"); }
#line 2030 "gramatica.tab.c"
    break;

  case 82:
#line 325 "gramatica.y"
    { printf("\tRegla f_cabecera\n"); }
#line 2036 "gramatica.tab.c"
    break;

  case 83:
#line 328 "gramatica.y"
    { printf("\tRegla d_par_form (-> punto y coma)\n"); }
#line 2042 "gramatica.tab.c"
    break;

  case 84:
#line 329 "gramatica.y"
    { printf("\tRegla d_par_form (-> epsilon)\n"); }
#line 2048 "gramatica.tab.c"
    break;

  case 85:
#line 332 "gramatica.y"
    { printf("\tRegla d_p_form (-> ent)\n"); }
#line 2054 "gramatica.tab.c"
    break;

  case 86:
#line 333 "gramatica.y"
    { printf("\tRegla d_p_form (-> sal)\n"); }
#line 2060 "gramatica.tab.c"
    break;

  case 87:
#line 334 "gramatica.y"
    { printf("\tRegla d_p_form (-> ent_sal)\n"); }
#line 2066 "gramatica.tab.c"
    break;

  case 88:
#line 337 "gramatica.y"
    { printf("\tRegla accion_ll\n"); }
#line 2072 "gramatica.tab.c"
    break;

  case 89:
#line 340 "gramatica.y"
    { printf("\tRegla funcion_ll\n"); }
#line 2078 "gramatica.tab.c"
    break;

  case 90:
#line 343 "gramatica.y"
    { printf("\tRegla l_ll (-> coma)\n"); }
#line 2084 "gramatica.tab.c"
    break;

  case 91:
#line 344 "gramatica.y"
    { printf("\tRegla l_ll (-> expresion)\n"); }
#line 2090 "gramatica.tab.c"
    break;


#line 2094 "gramatica.tab.c"

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
#line 347 "gramatica.y"

int main(void)
{
        tabla_simbolos = nuevaTablaDeSimbolos();
        tabla_cuadruplas = nuevaTablaDeCuadruplas();
        yyparse();
        mostrarTablaDeSimbolos(tabla_simbolos);
        mostrarTablaDeCuadruplas(tabla_cuadruplas);
}
void yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

