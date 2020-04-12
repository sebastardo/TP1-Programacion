#include "prototipos.h"

void trasponer_in_situ(int matriz[][TAM])
{
    int aux;
    for(int i = 0; i<TAM;i++)
    {
        for(int j =0;j<i;j++)
        {
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}
