/* Aqui definiremos las funciones de la tabla de simbolos*/
#include "TablaDeSimbolos.h"

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
    tabla->num_simbolos = 0;
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

Simbolo* newTemp(TablaDeSimbolos* tabla, char* tipoDatos){
    char* nombreSimbolo = (char*)malloc(50*sizeof(char));
    int idSimbolo = tabla->num_simbolos + 1;
    snprintf(nombreSimbolo, 50, "varTemporal_%d", idSimbolo);
    Simbolo* simboloTemporal = nuevoSimbolo(nombreSimbolo, tipoDatos);
    insertarSimbolo(tabla, simboloTemporal);
    return simboloTemporal;
}

int buscarSimbolo(char* identificadorABuscar, TablaDeSimbolos* tabla){
    // Devuleve el id del simbolo si este se encuentra en la tabla y -1 en caso contrario
    int estaEnLaTabla = -1;
    Simbolo* indice = tabla->primero;
    if (indice != NULL)
    {
        while (estaEnLaTabla == -1 && indice->siguiente != NULL)
        {
            if (strcmp(indice->identificador, identificadorABuscar) == 0)
            {
                estaEnLaTabla = indice->indice;
            }
            indice = indice->siguiente;
        }
        if (strcmp(indice->identificador, identificadorABuscar) == 0)
        {
            estaEnLaTabla = indice->indice;
        }
    }
    return estaEnLaTabla;
}

char* consultarTipo(TablaDeSimbolos* tabla,int indiceBuscar){
    char* salida = "NULL";
    Simbolo* indice = tabla->primero;
    if (indice != NULL)
    {
        while (indice->siguiente != NULL && indice->indice != indiceBuscar){
            indice = indice->siguiente;
        }
        if (indice->indice == indiceBuscar)
        {
            salida = strdup(indice->tipo);
        }
        
    }
    return salida;
}

void mostrarTablaDeSimbolos(TablaDeSimbolos* tabla){
    printf("/------------------------------------------------------\\\n");
    printf("|                   Tabla de Simbolos                  |\n");
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