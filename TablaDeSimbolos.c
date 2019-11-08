/* Aqui definiremos las funciones de la tabla de simbolos*/
#include "TablaDeSimbolos.h"
#include <string.h>

Simbolo* nuevoSimbolo(char* identificador_nuevo, char* tipo_nuevo){
    Simbolo* nuevoSimb = (Simbolo*)malloc(sizeof(Simbolo));
    nuevoSimb->identificador = identificador_nuevo;
    nuevoSimb->tipo = tipo_nuevo;
    nuevoSimb->siguiente = NULL;
    return nuevoSimb;
}

TablaDeSimbolos* nuevaTablaDeSimbolos(){
    TablaDeSimbolos* tabla = (TablaDeSimbolos*)malloc(sizeof(TablaDeSimbolos));
    tabla->primero = NULL;
    tabla->ultimo = NULL;
    return tabla;
}

void insertarSimbolo (TablaDeSimbolos* tabla, Simbolo* simboloAIntroducir){
    if (tabla->primero == NULL)
    {
        tabla->primero = simboloAIntroducir;
    } else {
        (tabla->ultimo)->siguiente = simboloAIntroducir;
    }
    tabla->ultimo = simboloAIntroducir;
}

void mostrarTabla(TablaDeSimbolos* tabla){
    printf("/-----------------------------------------------\\\n");
    printf("|               Tabla de Simbolos               |\n");
    printf("+-----------------------+-----------------------+\n");
    printf("|     Identificador     |          Tipo         |\n");
    printf("+-----------------------+-----------------------+\n");
    if (tabla->primero == NULL)
    {
        printf("|              La tabla esta vacia              |\n");
    } else {
        Simbolo* indice = tabla->primero;
        while (indice->siguiente != NULL)
        {
            printf("|%23s|%23s|\n", indice->identificador, indice->tipo);
			indice = indice->siguiente;
        }
        printf("|%23s|%23s|\n", indice->identificador, indice->tipo);
        
    }
    printf("\\-----------------------------------------------/\n");
    return;
}