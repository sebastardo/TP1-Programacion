#include "prototipos.h"


float e_a_la_x(int x, float tolerancia)
{
    float e = 1;
    float potencia = 1;
    float divisor = 1;

    float termino = pow(x,potencia)/divisor;

    while(termino > tolerancia)
    {
        e += termino;
        potencia += 1;
        divisor *= potencia;
        termino = pow(x,potencia)/divisor;
        //printf("%f\n",termino);
    }

    return e;
}
