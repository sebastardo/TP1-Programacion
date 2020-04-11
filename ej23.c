#include "prototipos.h"

void insertar_ordenado(int vector[],int largo, int numero)
{
    int aux, aux1, aux2;
    int *n1, *n2;

    int flag = 0;
    int contador = 0;

    while(contador<largo)
    {
        if(flag)
        {
         aux2=vector[contador];
         vector[contador] = aux1;
         aux1=aux2;

        }
        if(!flag && vector[contador]>numero)
        {
            aux1=vector[contador];
            vector[contador] = numero;
            flag = 1;
        }
        contador++;
    }
}


void insertar_ordenado_punteros(int *vec, int tam, int numero_a_insertar)
{
    int *fin = vec+tam-1;
    while(vec<=fin)
    {
        if(numero_a_insertar<=*vec)
        {
            if(numero_a_insertar!=*vec)
                insertar_punt(vec,fin, numero_a_insertar);
            vec = fin;
        }
        vec++;
    }
}

void insertar_punt(int *vec,int *fin, int numero_a_insertar)
{
    int aux;

    while(vec<=fin)
    {
        aux = *vec;
        *vec=numero_a_insertar;
        numero_a_insertar=aux;

        vec++;
    }
}
