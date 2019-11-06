/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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