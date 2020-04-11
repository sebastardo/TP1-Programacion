#include "prototipos.h"


enum BOOL es_primo(int A)
{
    for(int i = 2;i<A;i++)
    {
        if(A%i==0)
            return FALSE;
    }
    return TRUE;
}
