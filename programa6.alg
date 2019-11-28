algoritmo prueba;
    ent n, m: entero;
    sal salida: entero;
{Prec: n=N AND m=M AND M >= 0 AND N >= 0}
    si n > m ->
	salida := n
    [] n <= m ->
    salida := m
    fsi
{Post: n = N AND m = M AND años = |M - N|}
falgoritmo
