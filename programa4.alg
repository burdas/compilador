{Programa para buscar un numero en una tabla m elementos que se sabe que esta en ella}
algoritmo buscaNumero;
    ent n: entero;
    ent tabla: tabla de entero[1..M];
    sal posicion: entero;
{Prec: n = N AND 0 <= i AND i <= M AND tabla[i] = N}
    var
        i: entero;
    fvar
    i:= 0;
    mientras tabla[i] != n hacer
        i := i+1
    fmientras;
    posicion = i
{Post: n = N AND posicion = i}
falgoritmo