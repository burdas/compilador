/*
 * Fichero en el que se encuentra la tabla de simbolos 
 */
#ifndef MBIG_TS_H
    #define MBIG_TS_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
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
    int buscarSimbolo(char* identificadorABuscar, TablaDeSimbolos* tabla);
    Simbolo* newTemp(TablaDeSimbolos* tabla, char* tipoDatos);
#endif
