#include "prototipos.h"

int palabra_a_numero(char *palabra)
{
    char *fin = palabra+largo_palabra(palabra)-1;
    int numero=0;
    int peso=1;

    while(fin!=palabra)
    {
        numero+=convertir(*fin) * peso;
        fin--;
        peso*=10;
    }
    numero+=convertir(*fin) * peso;
    return numero;
}


int convertir(char numero)
{
    char lista[10] = {"0123456789"};

    for(int i = 0; i<10; i++)
    {
        if(lista[i]==numero)
            return i;
    }
    return 0;
}
