#include "prototipos.h"

enum BOOL es_identidad(int matriz[][TAM])
{
    for(int i = 0; i<TAM;i++)
    {
        for(int j = 0;j<TAM;j++)
        {
            if(i==j)
            {   if(matriz[i][j]!=1)
                    return FALSE;
            }
            else
            {
                if(matriz[i][j]!=0)
                {
                    return FALSE;
                }
            }
        }
    }
    return TRUE;
}
