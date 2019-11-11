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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
