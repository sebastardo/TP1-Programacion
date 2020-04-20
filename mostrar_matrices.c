#include "prototipos.h"

void mostrar_matriz(int m[][TAM])
{
    for(int i = 0; i<TAM;i++)
    {
        for(int j = 0; j<TAM;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
