#include "TablaDeCuadruplas.h"
#include "TablaDeSimbolos.h"
#include <string.h>

int main(){
    /*
    TablaDeCuadruplas* tablaCuadruplas = nuevaTablaDeCuadruplas();
    TablaDeSimbolos* TablaDeSimbolos = nuevaTablaDeSimbolos();

    Simbolo* simb1 = nuevoSimbolo("simb1", "caca");
    Simbolo* simb2 = nuevoSimbolo("simb2", "supertipo");
    Simbolo* simb3 = nuevoSimbolo("simb3", "caca");

    insertarSimbolo(TablaDeSimbolos, simb1);
    insertarSimbolo(TablaDeSimbolos, simb2);
    insertarSimbolo(TablaDeSimbolos, simb3);

    gen(tablaCuadruplas, "Suma", 1, 2, 3);
    gen(tablaCuadruplas, "Suma", 2, 4, 8);
    gen(tablaCuadruplas, "Suma", 3, 6, 9);

    mostrarTablaDeSimbolos(TablaDeSimbolos);

    printf("-->%d\n",tablaCuadruplas->primero->siguiente->operando1);
    printf("-->%d\n",buscarSimbolo("simb2", TablaDeSimbolos));
    printf("-->%s\n", consultarTipo(TablaDeSimbolos, 2));
    printf("-->%d\n", buscarCuadrupla(tablaCuadruplas, 3)->resultado);
    */

    int* a = (int*) malloc (sizeof(int));
    *a = 55;
    printf("Valor: %d", a[0]);
    return 0;
}