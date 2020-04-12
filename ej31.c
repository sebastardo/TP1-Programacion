#include "prototipos.h"

enum BOOL es_diagonal(int matriz[][TAM])
{
    enum BOOL no_cero=FALSE;
    for(int i = 0; i<TAM;i++)
    {
        for(int j = 0;j<TAM;j++)
        {
            if(i==j)
            {
                if(matriz[i][j]!=0)
                    no_cero = TRUE;
            }
            else
            {
                if(matriz[i][j]!=0)
                    return FALSE;
            }
        }
    }
    if(no_cero)
        return TRUE;
    return FALSE;
}
