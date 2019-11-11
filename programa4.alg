{Programa para buscar un numero en una tabla m elementos que se sabe que esta en ella}
algoritmo buscaNumero;
    ent n: entero; array: tabla[1..M] de entero;
    sal posicion: entero;
{Prec: n = N AND 0 <= i AND i <= M AND tabla[i] = N}
    var
        i: entero;
    fvar;
    i:= 0;
    mientras array[i] != n hacer
        i := i+1
    fmientras;
    posicion := i
{Post: n = N AND posicion = i}
falgoritmo