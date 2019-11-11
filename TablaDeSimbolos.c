/* Aqui definiremos las funciones de la tabla de simbolos*/
#include "TablaDeSimbolos.h"
#include <string.h>

Simbolo* nuevoSimbolo(char* identificador_nuevo, char* tipo_nuevo){
    Simbolo* nuevoSimb = (Simbolo*)malloc(sizeof(Simbolo));
    nuevoSimb->identificador = identificador_nuevo;
    nuevoSimb->tipo = tipo_nuevo;
    nuevoSimb->siguiente = NULL;
    nuevoSimb->indice = -1;
    return nuevoSimb;
}

TablaDeSimbolos* nuevaTablaDeSimbolos(){
    TablaDeSimbolos* tabla = (TablaDeSimbolos*)malloc(sizeof(TablaDeSimbolos));
    tabla->primero = NULL;
    return tabla;
}

void insertarSimbolo (TablaDeSimbolos* tabla, Simbolo* simboloAIntroducir){
    if (tabla->primero == NULL)
    {
        tabla->num_simbolos = 1;
        tabla->primero = simboloAIntroducir;
    } else {
        Simbolo* indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
			indice = indice->siguiente;
        }
        indice->siguiente = simboloAIntroducir;
        tabla->num_simbolos++;
    }
    simboloAIntroducir->indice = tabla->num_simbolos;
}

void mostrarTabla(TablaDeSimbolos* tabla){
    printf("/------------------------------------------------------\\\n");
    printf("|                    Tabla de Simbolos                 |\n");
    printf("+--------+------------------------+--------------------+\n");
    printf("| indice |     Identificador      |       Tipo         |\n");
    printf("+--------+------------------------+--------------------+\n");
    if (tabla->primero == NULL)
    {
        printf("|                 La tabla esta vacia                  |\n");
    } else {
        Simbolo* indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
            printf("|%8d|%24s|%20s|\n", indice->indice,indice->identificador, indice->tipo);
			indice = indice->siguiente;
        }
        printf("|%8d|%24s|%20s|\n", indice->indice,indice->identificador, indice->tipo);
        
    }
    printf("\\------------------------------------------------------/\n");
    return;
}