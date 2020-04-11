#include "prototipos.h"

void eliminar_primera_aparicion(int *v, int tam, int dato)
{
    int f = 0;
    int *fin = v+tam-1;
    int *aux = v;

    while(v<=fin)
    {
        if(!f && *v==dato)
        {
            aux++;
            f=1;
        }
        *v=*aux;
        v++;
        aux++;
    }
    if(f)
    {
        v--;
        *v=0;
    }

}
