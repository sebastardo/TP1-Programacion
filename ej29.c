#include "prototipos.h"

int sumatoria_sobre_diagonal(int matriz [][TAM])
{
    /*
    {{1,1,1,x},
     {1,1,x,x},
     {1,x,x,x},
     {x,x,x,x}};
    */
    int suma=0;
    for(int i=0;i<TAM; i++)
    {
        for(int j=i+1;j<TAM;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;
}

int sumatoria_sobre_diagonal_incluida(int matriz [][TAM])
{
    /*
    {{1,1,1,1},
     {1,1,1,x},
     {1,1,x,x},
     {1,x,x,x}};
    */
    int suma=0;
    for(int i=0;i<TAM; i++)
    {
        for(int j=i;j<TAM;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;
}


int sumatoria_bajo_diagonal(int matriz [][TAM])
{
    /*
    {{x,x,x,x},
     {x,x,x,1},
     {x,x,1,1},
     {x,1,1,1}};
    */
    int suma=0;
    for(int i=0;i<TAM; i++)
    {
        for(int j=0;j<i;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;
}


int sumatoria_bajo_diagonal_incluida(int matriz [][TAM])
{
    /*
    {{x,x,x,1},
     {x,x,1,1},
     {x,1,1,1},
     {1,1,1,1}};
    */
    int suma=0;
    for(int i=0;i<TAM; i++)
    {
        for(int j=0;j<=i;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;

}



int sumatoria_sobre_diagonal_secundaria(int matriz [][TAM])
{
/*
    {{1,1,1,1},
     {1,1,1,x},
     {1,1,x,x},
     {1,x,x,x}};
    */
    int suma = 0;
    int max = TAM-1;

    for(int i=0;i<TAM-1; i++)
    {

        for(int j=0;j<max;j++)
        {
            suma+=matriz[i][j];
        }
        max--;

    }
    return suma;
}


int sumatoria_sobre_diagonal_secundaria_incluida(int matriz [][TAM])
{
    /*
    {{1,1,1,x},
     {1,1,x,x},
     {1,x,x,x},
     {x,x,x,x}};
    */
    int suma = 0;
    int max = TAM;

    for(int i=0;i<TAM; i++)
    {
        for(int j=0;j<max;j++)
        {
            suma+=matriz[i][j];
        }
        max--;

    }
    return suma;
}


int sumatoria_bajo_diagonal_secundaria(int matriz [][TAM])
{
    /*
    {{x,x,x,x},
     {x,x,x,1},
     {x,x,1,1},
     {x,1,1,1}};
    */
    int suma = 0;
    for(int i =1; i<TAM; i++)
    {
        for (int j=TAM-i;j<TAM;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;
}

int sumatoria_bajo_diagonal_secundaria_incluida(int matriz [][TAM])
{
    /*
    {{x,x,x,1},
     {x,x,1,1},
     {x,1,1,1},
     {1,1,1,1}};
    */

    int suma = 0;
    for(int i=0; i<TAM; i++)
    {
        for (int j=(TAM-1)-i;j<TAM;j++)
        {
            suma+=matriz[i][j];
        }
    }
    return suma;
}

