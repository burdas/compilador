/* Aqui definiremos las funciones de la tabla de cuadruplas */
#include "TablaDeCuadruplas.h"

Cuadrupla* nuevaCuadrupla(char* operador, int operando1, int operando2, int resultado){
    Cuadrupla* nueva = (Cuadrupla*)malloc(sizeof(Cuadrupla));
    nueva->indice = -1;
    nueva->operador = operador;
    nueva->operando1 = operando1;
    nueva->operando2 = operando2;
    nueva->resultado = resultado;
    nueva->siguiente = NULL;
    return nueva;
}

TablaDeCuadruplas* nuevaTablaDeCuadruplas(){
    TablaDeCuadruplas* nueva = (TablaDeCuadruplas*)malloc(sizeof(TablaDeCuadruplas));
    nueva->primero = NULL;
    nueva->num_cuadruplas = 0;
}

void gen(TablaDeCuadruplas* tabla, char* operador, int operando1, int operando2, int resultado){
    Cuadrupla* cuadrupla = nuevaCuadrupla(operador, operando1, operando2, resultado);
    if (tabla->primero == NULL)
    {
        tabla->primero = cuadrupla;
        tabla->num_cuadruplas++;
    } else {
        Cuadrupla* indice = tabla->primero;
        while(indice->siguiente != NULL){
            indice = indice->siguiente;
        }
        indice->siguiente = cuadrupla;
        tabla->num_cuadruplas++;
    }
    cuadrupla->indice = tabla->num_cuadruplas;
}

void mostrarTablaDeCuadruplas(TablaDeCuadruplas* tabla){
    printf("/---------------------------------------------------------------------\\\n");
    printf("|                         Tabla de Cuadruplas                         |\n");
    printf("+--------+------------------------+-----------+-----------+-----------+\n");
    printf("| Indice |        Operador        | Operando1 | Operando2 | Resultado |\n");
    printf("+--------+------------------------+-----------+-----------+-----------+\n");
    if (tabla->primero == NULL)
    {
        printf("|                      La tabla esta vacia                      |\n");
    } else {
        Cuadrupla* indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
            printf("|%8d|%24s|%11d|%11d|%11d|\n", indice->indice, indice->operador , indice->operando1, indice->operando2, indice->resultado);
			indice = indice->siguiente;
        }
        printf("|%8d|%24s|%11d|%11d|%11d|\n", indice->indice, indice->operador , indice->operando1, indice->operando2, indice->resultado);
        
    }
    printf("\\---------------------------------------------------------------------/\n");
    return;
}