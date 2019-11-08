/* Scanner de ProAlg (Pseudocódigo)*/

/* Autores:             Marcos Burdaspar y Iñigo García */
/* 						Grupo 12						*/
/* Versión Flex:        2.6.4                           */

%{
#include <math.h>
#include "gramatica.tab.h"
%}

CIFRA                   [0-9]
LETRA                   [A-Za-z]
ESPACIO                 " "
SALTODELINEA            "\n"
TABULACION              "\t"
LETRA_O_CIFRA           {LETRA}|{CIFRA}
IDENTIFICADOR           {LETRA}{LETRA_O_CIFRA}*
REF						?i:(ref)
/*Literales de entero, real, booleano, caracter, cadena */
LITERAL_ENTERO          -?{CIFRA}+((e|E){CIFRA}+)?
LITERAL_REAL            -?{CIFRA}+(\.{CIFRA}+)?((e|E){CIFRA}+)?
VERDADERO				?i:(verdadeo)
FALSO					?i:(falso)
LITERAL_CARACTER        \"{LETRA_O_CIFRA}\"
LITERAL_CADENA          '(\\.|[^'\\])*'|\/'.*
COMENTARIO              \{[^}]*\}

/* Operadores*/
OPERADOR_RELACIONAL             ">"|"<"|"="|"<="|">="|"!="
OPERADOR_SUMA                   "+"
OPERADOR_RESTA                  "-"
OPERADOR_MULTIPLICACION         "*"
OPERADOR_DIVISION_REAL          "/"
OPERADOR_DIVISION_ENTERA        ?i:(div)
OPERADOR_MODULO                 ?i:(mod)
OPERADOR_AND					?i:(y)
OPERADOR_OR						?i:(o)
OPERADOR_NOT					?i:(no)

ASIGNACION              ":="
COMPOSICION_SECUENCIAL  ";"
SEPARADOR               ","
SUBRANGO                ".."
DEFINICION_TIPO         ":"
INICIO_ARRAY            "["
FIN_ARRAY               "]"
PARENTESIS_APERTURA     "("
PARENTESIS_CIERRE       ")"
DE                      ?i:(de)

PREC                    \{Prec[^}]*\}
POST                    \{Post[^}]*\}

TIPO_DE_DATOS           ?i:(booleano|caracter|cadena|entero|real)
TABLA                   ?i:(tabla)

/* Principio y final del programa */
ALGORITMO               ?i:(algoritmo)
FALGORITMO              ?i:(falgoritmo)

/* E/S */
ENTRADA                 ?i:(ent)
SALIDA                  ?i:(sal)
ENTRADA_SALIDA          ?i:(e\/s)

/* Sentencia condicional */
SI                      ?i:(si)
ENTONCES                "->"
SINO                    "[]"
FSI                     ?i:(fsi)

/* Sentencias iterativas */
MIENTRAS                ?i:(mientras)
FMIENTRAS               ?i:(fmientras)

PARA                    ?i:(para)
FPARA                   ?i:(fpara)

HACER                   ?i:(hacer)
HASTA                   ?i:(hasta)
CONTINUAR               ?i:(continuar)

/* Funciones y acciones */
FUNCION                 ?i:(funcion)
FFUNCION                ?i:(ffuncion)

ACCION                  ?i:(accion)
FACCION                 ?i:(faccion)

DEVOLUCION              ?i:(dev)

/* DECLARACIONES */
/* Constantes */
CONST                   ?i:(const)
FCONST                  ?i:(fconst)

/* Variables */
VAR                     ?i:(var)
FVAR                    ?i:(fvar)

/* Tuplas */
TUPLA                   ?i:(tupla)
FTUPLA                  ?i:(ftupla)

/* Tipos */
CTIPO                   ?i:(tipo)
CFTIPO                  ?i:(ftipo)
%%

{TIPO_DE_DATOS} {
            printf("Tipo de datos: %s\n", yytext);
			return tk_tipo_base;
}

{LITERAL_ENTERO} {
            printf("Literal entero: %s (%d)\n", yytext, atoi(yytext));
			return tk_literal_numerico;
}

{LITERAL_REAL} {
            printf("Literal real: %s (%d)\n", yytext, atof(yytext));
			return tk_literal_numerico;
}

{LITERAL_CARACTER} {
            printf("Literal caracter: %s (%c)\n", yytext, yytext[1]);
			return tk_literal_caracter;
}

{LITERAL_CADENA} {
            printf("Literal cadena: %s\n", yytext);
}

{VERDADERO} {
            printf("Verdadero: %s\n", yytext);
			return tk_verdadero;
}

{FALSO} {
            printf("Falso: %s\n", yytext);
			return tk_falso;
}

{OPERADOR_SUMA} {
            printf("Operador suma: %s\n", yytext);
			return tk_suma;
}

{OPERADOR_RESTA} {
            printf("Operador resta: %s\n", yytext);
			return tk_resta;
}

{OPERADOR_MULTIPLICACION} {
            printf("Operador multiplicacion: %s\n", yytext);
			return tk_multiplicacion;
}

{OPERADOR_DIVISION_ENTERA} {
            printf("Operador division entera: %s\n", yytext);
			return tk_div;
}

{OPERADOR_DIVISION_REAL} {
            printf("Operador division real: %s\n", yytext);
			return tk_division;
}

{OPERADOR_MODULO} {
            printf("Operador modulo: %s\n", yytext);
			return tk_modulo;
}

{OPERADOR_RELACIONAL} {
            printf("Operador relacional: %s\n", yytext);
			return tk_operador_relacional;
}

{OPERADOR_AND} {
            printf("Operador AND: %s\n", yytext);
			return tk_AND;
}

{OPERADOR_OR} {
            printf("Operador OR: %s\n", yytext);
			return tk_OR;
}

{OPERADOR_NOT} {
            printf("Operador NOT: %s\n", yytext);
			return tk_NOT;
}

{PREC}	{
			printf ("Precondición: %s \n", yytext);
}

{POST}	{
			printf ("Postcondición: %s \n", yytext);
}

{COMENTARIO} {
            printf("Comentario: %s\n", yytext);
			return tk_comentario;
}

{ASIGNACION} {
            printf("Asignacion: %s\n", yytext);
			return tk_asignacion;
}

{COMPOSICION_SECUENCIAL} {
            printf("Composición secuencial: %s\n", yytext);
			return tk_punto_coma;
}

{SEPARADOR} {
            printf("Separador: %s\n", yytext);
			return tk_coma;
}

{SUBRANGO} {
            printf("Subrango: %s\n", yytext);
			return tk_subrango;
}

{DEFINICION_TIPO} {
            printf("Definicion de tipo: %s\n", yytext);
			return tk_dospuntos;
}

{INICIO_ARRAY} {
            printf("Principio de array: %s\n", yytext);
			return tk_corchete_abierto;
}

{FIN_ARRAY} {
            printf("Fin de array: %s\n", yytext);
			return tk_corchete_cerrado;
}

{PARENTESIS_APERTURA} {
            printf("Parentesis de apertura: %s\n", yytext);
			return tk_parentesis_apertura;
}

{PARENTESIS_CIERRE} {
            printf("Parentesis de cierre: %s\n", yytext);
			return tk_parentesis_cierre;
}

{DE}	{
			printf("De: %s\n", yytext);
			return tk_de;
}

{CONST}  {
			printf("Principio declaración constantes: %s\n", yytext);
			return tk_const;
}

{FCONST}  {
			printf("Final declaración constantes: %s\n", yytext);
			return tk_fconst;
}

{CTIPO}  {
			printf("Principio declaración tipo: %s\n", yytext);
			return tk_tipo;
}

{CFTIPO}  {
			printf("Final declaración tipo: %s\n", yytext);
			return tk_ftipo;
}

{TUPLA}  {
			printf("Principio declaración tupla: %s\n", yytext);
			return tk_tupla;
}

{FTUPLA}  {
			printf("Final declaración tupla: %s\n", yytext);
			return tk_ftupla;
}

{VAR}  {
			printf("Principio declaración variables: %s\n", yytext);
			return tk_var;
}

{FVAR}  {
			printf("Final declaración variables: %s\n", yytext);
			return tk_fvar;
}

{DEVOLUCION}  {
			printf("Devolver (return): %s\n", yytext);
			return tk_dev;
}

{ENTRADA}  {
			printf("Variable de entrada: %s\n", yytext);
			return tk_ent;
}

{SALIDA}  {
			printf("Variable de salida: %s\n", yytext);
			return tk_sal;
}

{ENTRADA_SALIDA}  {
			printf("Variable de entrada y salida: %s\n", yytext);
			return tk_ent_sal;
}

{REF}  {
			printf("Variable puntero: %s\n", yytext);
			return tk_ref;
}

{TABLA}  {
			printf("Tabla: %s\n", yytext);
			return tk_tabla;
}

{ALGORITMO}  {
			printf("Principio del programa: %s\n", yytext);
			return tk_algoritmo;
}

{FALGORITMO}  {
			printf("Final del programa: %s\n", yytext);
			return tk_falgoritmo;
}

{SI}  {
			printf("Principio de Si: %s\n", yytext);
			return tk_si;
}

{FSI}  {
			printf("Final de Si: %s\n", yytext);
			return tk_fsi;
}

{SINO}	{
			printf("Sino: %s\n", yytext);
			return tk_sino;
}

{ENTONCES}	{
			printf("Entonces: %s\n", yytext);
			return tk_entonces;
}

{MIENTRAS}  {
			printf("Principio de Mientras: %s\n", yytext);
			return tk_mientras;
}

{FMIENTRAS}  {
			printf("Final de Mientras: %s\n", yytext);
			return tk_fmientras;
}

{PARA}  {
			printf("Principio de Para: %s\n", yytext);
			return tk_para;
}

{FPARA}  {
			printf("Final de Para: %s\n", yytext);
			return tk_fpara;
}

{HASTA}  {
			printf("Hasta: %s\n", yytext);
			return tk_hasta;
}

{CONTINUAR}  {
			printf("Continuar: %s\n", yytext);
			return tk_continuar;
}

{HACER}  {
			printf("Hacer: %s\n", yytext);
			return tk_hacer;
}

{ACCION}  {
			printf("Principio de Acción: %s\n", yytext);
			return tk_accion;
}

{FACCION}  {
			printf("Final de Acción: %s\n", yytext);
			return tk_faccion;
}

{FUNCION}  {
			printf("Principio de Función: %s\n", yytext);
			return tk_funcion;
}

{FFUNCION}  {
			printf("Final de Función: %s\n", yytext);
			return tk_ffuncion;
}

{IDENTIFICADOR}	{
			printf( "Identificador: %s\n", yytext );
			return tk_identificador;
}

[ \t\n]+          /* Eliminar los espacios en blanco */

.           printf( "Token desconocido: %s\n", yytext );

%%
/*
int main( int argc, char **argv )
    {
    ++argv, --argc;  
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );

    yylex();
    }
*/