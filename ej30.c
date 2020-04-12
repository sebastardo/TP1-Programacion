#include "prototipos.h"

int traza_principal(int matriz [][TAM])
{
    int suma = 0;
    for(int i =0; i<TAM;i++)
    {
        suma += matriz[i][i];
    }
    return suma;
}

int traza_secundaria(int matriz [][TAM])
{
    int suma = 0;
    int columna = TAM-1;
    for(int i =0; i<TAM;i++)
    {
        suma += matriz[i][columna];
        columna--;
    }
    return suma;
}
