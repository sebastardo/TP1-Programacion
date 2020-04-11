#include "prototipos.h"

void eliminar(int v[], int tam, int posicion)
{
    while(posicion<tam)
    {
        v[posicion]=v[posicion+1];
        posicion++;
    }
    v[posicion-1]=0;
}
