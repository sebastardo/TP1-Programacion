#include "prototipos.h"

void multiplicacion_matrices(int m1[][TAM], int m2[][TAM], int matriz_resultado[][TAM])
{
    for(int a = 0; a<TAM; a++)
    {
        for(int b = 0; b<TAM; b++)
        {
            //matriz_1[a][] //no hace falta nada mas
            //matriz_2[][b] //hace falta conseguir la columna
            matriz_resultado[a][b] = calculo_vectores(m1, a, m2, b);

        }
    }
}


int calculo_vectores(int m1[][TAM], int fila, int m2[][TAM], int columna)
{
    int x = 0;
    for(int i=0; i <TAM; i++)
    {
        x+=m1[fila][i] * m2[i][columna];
    }
    return x;
}
