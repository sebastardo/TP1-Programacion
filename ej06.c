#include "prototipos.h"

//TODO; nah
float seno(float numero, float TOL)
{
    float resultado;
    int calculador = 1;
    float calculo = numero;
    int flag = 1;

    while(calculo > TOL)
    {
        resultado = calculo;
        if(flag)
        {
            calculo -= (float)numero*calculador /  (float)factorial(calculador);
            flag = 0;
        }
        else
        {
            calculo += (float)numero*calculador /  (float)factorial(calculador);
            flag = 1;
        }
        calculador += 2;
    }

    return resultado;
}
