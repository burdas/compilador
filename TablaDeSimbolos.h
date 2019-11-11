/*
 * Fichero en el que se encuentra la tabla de simbolos 
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct Simbolo{
    int indice;
    char* identificador;
    char* tipo;
    struct Simbolo* siguiente;
} Simbolo;

typedef struct TablaDeSimbolos{
    struct Simbolo* primero;
    int num_simbolos;
} TablaDeSimbolos;

Simbolo* nuevoSimbolo(char* identificador, char* tipo);
void insertarSimbolo (TablaDeSimbolos* tabla, Simbolo* simboloAIntroducir);
void mostrarTabla(TablaDeSimbolos* tabla);
TablaDeSimbolos* nuevaTablaDeSimbolos();
