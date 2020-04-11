#include "prototipos.h"

void cociente_resto(int A, int B)
{
    int resultado[2];
    if(B==0)
    {
        printf("No se pude dividir por 0");
    }
    else
    {
        printf("Resultado: %d\n",A/B);
        printf("Resto: %d\n",A%B);
    }
}
