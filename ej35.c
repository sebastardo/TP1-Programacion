#include "prototipos.h"

void trasponer(int matriz[][TAM], int mx[][TAM])
{
    for(int i = 0; i<TAM;i++)
    {
        for(int j =0;j<TAM;j++)
        {
            mx[i][j] = matriz[j][i];
            mx[j][i] = matriz[i][j];
        }
    }
}
