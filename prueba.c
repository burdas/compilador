#include "TablaDeCuadruplas.h"

int main(){

    TablaDeCuadruplas* tabla = nuevaTablaDeCuadruplas();

    gen(tabla, "Suma", 1, 2, 3);
    gen(tabla, "Suma", 2, 4, 8);
    gen(tabla, "Suma", 3, 6, 9);

    printf("-->%d\n",tabla->primero->siguiente->operando1);
    return 0;
}