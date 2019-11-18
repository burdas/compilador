#include "TablaDeSimbolos.h"

int main(){

    TablaDeSimbolos* tabla = nuevaTablaDeSimbolos();

    mostrarTabla(tabla);

    Simbolo* simbolo1 = nuevoSimbolo("simbolo1", "Entero");
    Simbolo* simbolo2 = nuevoSimbolo("simbolo2", "Caracter");
    Simbolo* simbolo3 = nuevoSimbolo("simbolo3", "Real");

    insertarSimbolo(tabla, simbolo1);
    insertarSimbolo(tabla, simbolo2);
    insertarSimbolo(tabla, simbolo3);
    newTemp(tabla, "caca");
    newTemp(tabla, "inigo");

    mostrarTabla(tabla);

    printf("Esta en la tabla: %d\n", buscarSimbolo("varTemporal_5", tabla));

    printf("\n\n\n%d\n", tabla->num_simbolos);

    return 0;
}