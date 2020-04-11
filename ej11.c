#include "prototipos.h"

int suma_numero_naturales_pares(int N)
{
    int total = 0;
    for (int i=0;i<=N;i++)
    {
        if(i%2==0)
            total+=i;
    }
    return total;
}
