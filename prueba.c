#include "TablaDeCuadruplas.h"

int main(){

    TablaDeCuadruplas* tabla = nuevaTablaDeCuadruplas();

    Cuadrupla* simbolo1 = nuevaCuadrupla("Suma", 1, 2, 3);
    Cuadrupla* simbolo2 = nuevaCuadrupla("Suma", 2, 4, 8);
    Cuadrupla* simbolo3 = nuevaCuadrupla("Suma", 3, 6, 9);

    gen(tabla, simbolo1);
    gen(tabla, simbolo2);
    gen(tabla, simbolo3);

    printf("-->%d\n",tabla->primero->siguiente->operando1);
    return 0;
}