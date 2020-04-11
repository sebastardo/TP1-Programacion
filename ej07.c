#include "prototipos.h"


void pdn(int n)
{
    int total = 0;

    for(int i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            total+=i;
        }
    }

    if(total==n)
        printf("PERFECTO");
    if(total<n)
        printf("DEFICIENTE");
    if(total>n)
        printf("ABUNDANTE");
}
