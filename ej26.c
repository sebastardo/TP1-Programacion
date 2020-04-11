#include "prototipos.h"

void eliminar_todas_apariciones(int *v, int tam, int dato)
{
    int f = 0;
    int *fin = v+tam-1;
    int *aux = v;

    while(aux<=fin+1)
    {
        if(*v==dato)
        {
            aux++;
            *v=*aux;
        }
        else
        {
            v++;
            aux++;
            *v=*aux;
        }
    }

    v--;
    while(v<=fin)
    {
        *v=0;
        v++;
    }
}
