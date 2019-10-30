/* Scanner de ProAlg (Pseudocódigo)*/

/* Autores:             Marcos Burdaspar y Iñigo García */
/* Versión Flex:        2.6.4                           */

%{
#include <math.h>
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
LITERAL_BOOLEANO        ?i:(verdadero|falso)
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
OPERADOR_LOGICO                 ?i:(y|o|no)

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
}

{LITERAL_ENTERO} {
            printf("Literal entero: %s (%d)\n", yytext, atoi(yytext));
}

{LITERAL_REAL} {
            printf("Literal real: %s (%d)\n", yytext, atof(yytext));
}

{LITERAL_CARACTER} {
            printf("Literal caracter: %s (%c)\n", yytext, yytext[1]);
}

{LITERAL_CADENA} {
            printf("Literal cadena: %s\n", yytext);
}

{LITERAL_BOOLEANO} {
            printf("Literal booleano: %s\n", yytext);
}

{OPERADOR_SUMA} {
            printf("Operador suma: %s\n", yytext);
}

{OPERADOR_RESTA} {
            printf("Operador resta: %s\n", yytext);
}

{OPERADOR_MULTIPLICACION} {
            printf("Operador multiplicacion: %s\n", yytext);
}

{OPERADOR_DIVISION_ENTERA} {
            printf("Operador division entera: %s\n", yytext);
}

{OPERADOR_DIVISION_REAL} {
            printf("Operador division real: %s\n", yytext);
}

{OPERADOR_MODULO} {
            printf("Operador modulo: %s\n", yytext);
}

{OPERADOR_RELACIONAL} {
            printf("Operador relacional: %s\n", yytext);
}

{OPERADOR_LOGICO} {
            printf("Operador logico: %s\n", yytext);
}

{PREC}	{
	printf ("Precondición: %s \n", yytext);
}

{POST}	{
	printf ("Postcondición: %s \n", yytext);
}

{COMENTARIO} {
            printf("Comentario: %s\n", yytext);
}

{ASIGNACION} {
            printf("Asignacion: %s\n", yytext);
}

{COMPOSICION_SECUENCIAL} {
            printf("Composición secuencial: %s\n", yytext);
}

{SEPARADOR} {
            printf("Separador: %s\n", yytext);
}

{SUBRANGO} {
            printf("Subrango: %s\n", yytext);
}

{DEFINICION_TIPO} {
            printf("Definicion de tipo: %s\n", yytext);
}

{INICIO_ARRAY} {
            printf("Principio de array: %s\n", yytext);
}

{FIN_ARRAY} {
            printf("Fin de array: %s\n", yytext);
}

{PARENTESIS_APERTURA} {
            printf("Parentesis de apertura: %s\n", yytext);
}

{PARENTESIS_CIERRE} {
            printf("Parentesis de cierre: %s\n", yytext);
}


{DE}	{
	printf("De: %s\n", yytext);
}

{CONST}  {
	printf("Principio declaración constantes: %s\n", yytext);
}

{FCONST}  {
	printf("Final declaración constantes: %s\n", yytext);
}

{CTIPO}  {
	printf("Principio declaración tipo: %s\n", yytext);
}

{CFTIPO}  {
	printf("Final declaración tipo: %s\n", yytext);
}

{TUPLA}  {
	printf("Principio declaración tupla: %s\n", yytext);
}

{FTUPLA}  {
	printf("Final declaración tupla: %s\n", yytext);
}

{VAR}  {
	printf("Principio declaración variables: %s\n", yytext);
}

{FVAR}  {
	printf("Final declaración variables: %s\n", yytext);
}

{DEVOLUCION}  {
	printf("Devolver (return): %s\n", yytext);
}

{ENTRADA}  {
	printf("Variable de entrada: %s\n", yytext);
}

{SALIDA}  {
	printf("Variable de salida: %s\n", yytext);
}

{ENTRADA_SALIDA}  {
	printf("Variable de entrada y salida: %s\n", yytext);
}

{REF}  {
	printf("Variable puntero: %s\n", yytext);
}

{TABLA}  {
	printf("Tabla: %s\n", yytext);
}

{ALGORITMO}  {
	printf("Principio del programa: %s\n", yytext);
}

{FALGORITMO}  {
	printf("Final del programa: %s\n", yytext);
}

{SI}  {
	printf("Principio de Si: %s\n", yytext);
}

{FSI}  {
	printf("Final de Si: %s\n", yytext);
}

{SINO}	{
	printf("Sino: %s\n", yytext);
}

{ENTONCES}	{
	printf("Entonces: %s\n", yytext);
}

{MIENTRAS}  {
	printf("Principio de Mientras: %s\n", yytext);
}

{FMIENTRAS}  {
	printf("Final de Mientras: %s\n", yytext);
}

{PARA}  {
	printf("Principio de Para: %s\n", yytext);
}

{FPARA}  {
	printf("Final de Para: %s\n", yytext);
}

{HASTA}  {
	printf("Hasta: %s\n", yytext);
}

{CONTINUAR}  {
	printf("Continuar: %s\n", yytext);
}

{HACER}  {
	printf("Hacer: %s\n", yytext);
}

{ACCION}  {
	printf("Principio de Acción: %s\n", yytext);
}

{FACCION}  {
	printf("Final de Acción: %s\n", yytext);
}

{FUNCION}  {
	printf("Principio de Función: %s\n", yytext);
}

{FFUNCION}  {
	printf("Final de Función: %s\n", yytext);
}

{IDENTIFICADOR}	{
	printf( "Identificador: %s\n", yytext );
}

[ \t\n]+          /* Eliminar los espacios en blanco */

.           printf( "Token desconocido: %s\n", yytext );

%%

int main( int argc, char **argv )
    {
    ++argv, --argc;  
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );

    yylex();
    }
