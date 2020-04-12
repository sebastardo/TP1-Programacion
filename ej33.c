#include "prototipos.h"

enum BOOL es_simetrica(int matriz[][TAM])
{
    for(int i = 0; i<TAM;i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(matriz[i][j]!=matriz[j][i])
                return FALSE;
        }
    }
    return TRUE;
}
