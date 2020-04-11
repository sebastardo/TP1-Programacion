#include "prototipos.h"

int multiplicacion(int numA, int numB)
{
    if(numA == 0 || numB == 0)
        return 0;

    int resultado = 0;

    for(int i = 0; i<numB; i++)
    {
        resultado += numA;
    }

    return resultado;
}
