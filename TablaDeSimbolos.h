/*
 * Fichero en el que se declara la tabla de simbolos 
 */
#ifndef MBIG_TS_H
    #define MBIG_TS_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    typedef struct Simbolo{
        int indice;                     // Entero que identifica el símbolo
        char* identificador;            // Cadena de caracteres que identifica el símbolo
        char* tipo;                     // Cadena de caracteres que identifica el tipo de dato del símbolo
        short entrada_salida;           // 0 - Ninguna | 1 - entrada | 2 - salida | 3 - ambas
        struct Simbolo* siguiente;      // Puntero que apunta al siguiente simbolo o NULL
    } Simbolo;

    typedef struct TablaDeSimbolos{
        struct Simbolo* primero;        // Primer símbolo de la tabla
        int num_simbolos;               // Número de simbolos de la tabla
    } TablaDeSimbolos;

    Simbolo* nuevoSimbolo(char* identificador, char* tipo, short entrada_salida);
    void insertarSimbolo (TablaDeSimbolos* tabla, Simbolo* simboloAIntroducir);
    void mostrarTablaDeSimbolos(TablaDeSimbolos* tabla);
    TablaDeSimbolos* nuevaTablaDeSimbolos();
    int buscarSimbolo(char* identificadorABuscar, TablaDeSimbolos* tabla);
    Simbolo* newTemp(TablaDeSimbolos* tabla, char* tipoDatos);
    char* consultarTipo(TablaDeSimbolos* tabla,int indiceBuscar);
    void cambiarEntradaSalida(TablaDeSimbolos* tabla, char* identificador, short entrada_salida_cambiar);
    int* obtenerOutput(TablaDeSimbolos* tabla);
#endif
