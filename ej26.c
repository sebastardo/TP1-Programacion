#include "prototipos.h"

void eliminar_todas_apariciones(int *v, int tam, int dato)
{
    int f = 0;
    int *fin = v+tam;
    int *aux = v;

    while(aux<=fin)
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
