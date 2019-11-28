/* Aqui definiremos las funciones de la tabla de cuadruplas */
#include "TablaDeCuadruplas.h"

Cuadrupla *nuevaCuadrupla(char *operador, int operando1, int operando2, int resultado)
{
    Cuadrupla *nueva = (Cuadrupla *)malloc(sizeof(Cuadrupla));
    nueva->indice = -1;
    nueva->operador = operador;
    nueva->operando1 = operando1;
    nueva->operando2 = operando2;
    nueva->resultado = resultado;
    nueva->siguiente = NULL;
    return nueva;
}

TablaDeCuadruplas *nuevaTablaDeCuadruplas()
{
    TablaDeCuadruplas *nueva = (TablaDeCuadruplas *)malloc(sizeof(TablaDeCuadruplas));
    nueva->primero = NULL;
    nueva->num_cuadruplas = 0;
}

void gen(TablaDeCuadruplas *tabla, char *operador, int operando1, int operando2, int resultado)
{
    Cuadrupla *cuadrupla = nuevaCuadrupla(operador, operando1, operando2, resultado);
    if (tabla->primero == NULL)
    {
        tabla->primero = cuadrupla;
        tabla->num_cuadruplas++;
    }
    else
    {
        Cuadrupla *indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
            indice = indice->siguiente;
        }
        indice->siguiente = cuadrupla;
        tabla->num_cuadruplas++;
    }
    cuadrupla->indice = tabla->num_cuadruplas;
}

Cuadrupla *buscarCuadrupla(TablaDeCuadruplas *tabla, int id)
{
    Cuadrupla *salida = NULL;
    if (tabla->primero != NULL)
    {
        Cuadrupla *indice = tabla->primero;
        while (indice->indice != id && indice->siguiente != NULL)
        {
            indice = indice->siguiente;
        }
        if (indice->indice == id)
        {
            salida = indice;
        }
    }
}

void mostrarTablaDeCuadruplas(TablaDeCuadruplas *tabla)
{
    char sOperando1[3];
    char sOperando2[3];
    char sResultado[3];
    printf("/---------------------------------------------------------------------\\\n");
    printf("|                         Tabla de Cuadruplas                         |\n");
    printf("+--------+------------------------+-----------+-----------+-----------+\n");
    printf("| Indice |        Operador        | Operando1 | Operando2 | Resultado |\n");
    printf("+--------+------------------------+-----------+-----------+-----------+\n");
    if (tabla->primero == NULL)
    {
        printf("|                      La tabla esta vacia                      |\n");
    }
    else
    {
        Cuadrupla *indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
            if (indice->operando1 < 0)
            {
                sprintf(sOperando1, "%s", "");
            }
            else
            {
                sprintf(sOperando1, "%d", indice->operando1);
            }
            if (indice->operando2 < 0)
            {
                sprintf(sOperando2, "%s", "");
            }
            else
            {
                sprintf(sOperando2, "%d", indice->operando2);
            }
            if (indice->resultado < 0)
            {
                sprintf(sResultado, "%s", "");
            }
            else
            {
                sprintf(sResultado, "%d", indice->resultado);
            }
            printf("|%8d|%24s|%11s|%11s|%11s|\n", indice->indice, indice->operador, sOperando1, sOperando2, sResultado);
            indice = indice->siguiente;
        }
        if (indice->operando1 < 0)
        {
            sprintf(sOperando1, "%s", "");
        }
        else
        {
            sprintf(sOperando1, "%d", indice->operando1);
        }
        if (indice->operando2 < 0)
        {
            sprintf(sOperando2, "%s", "");
        }
        else
        {
            sprintf(sOperando2, "%d", indice->operando2);
        }
        if (indice->resultado < 0)
        {
            sprintf(sResultado, "%s", "");
        }
        else
        {
            sprintf(sResultado, "%d", indice->resultado);
        }
        printf("|%8d|%24s|%11s|%11s|%11s|\n", indice->indice, indice->operador, sOperando1, sOperando2, sResultado);
    }
    printf("\\---------------------------------------------------------------------/\n");
    return;
}