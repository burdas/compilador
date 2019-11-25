/*
 * Fichero en el que se declara la tabla de cuadruplas
 */
#ifndef MBIG_TC_H
    #define MBIG_TC_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    typedef struct Cuadrupla{
        int indice;
        char* operador;
        int operando1;
        int operando2;
        int resultado;
        struct Cuadrupla* siguiente;
    } Cuadrupla;

    typedef struct TablaDeCuadruplas{
        struct Cuadrupla* primero;
        int num_cuadruplas;
    } TablaDeCuadruplas;

    Cuadrupla* nuevaCuadrupla(char* operador, int operando1, int operando2, int resultado);
    TablaDeCuadruplas* nuevaTablaDeCuadruplas();
    void gen(TablaDeCuadruplas* tabla, char* operador, int operando1, int operando2, int resultado);
    void mostrarTablaDeCuadruplas(TablaDeCuadruplas* tabla);
    Cuadrupla* buscarCuadrupla(TablaDeCuadruplas* tabla, int id);
#endif
