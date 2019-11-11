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

    mostrarTabla(tabla);

    return 0;
}