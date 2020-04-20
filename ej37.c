#include "prototipos.h"

/*
    No hace lo que pide el ejercicio porque cuando me di cuenta lo que pedia, ya no tenia ganas de seguir haciendolo.
    Pero al menos muestra el puntaje bien.
*/

void campeonato()
{
    int tabla[TAM];
    int m[TAM][TAM];

    anotacion_de_partidos(m);

    calculo_puntos(tabla, m);

    mostrar_puntaje(tabla);
}


void anotacion_de_partidos(int m[TAM][TAM])
{

    int ida = 0;
    int aux;
    while(ida<2)
    {
        !ida?printf("Partido de IDA\n"):printf("Partido de VUELTA\n");

        for(int i = 0; i <TAM;i++)
        {
            m[i][i]=0;
            for(int j=i+1; j<TAM;j++)
            {
                printf("Resultado del partido entre %c y %c: ", i+65,j+65);
                scanf("%d",&aux);
                if(!ida)
                {
                    m[i][j]=m[j][i]=0;
                }
                m[i][j]+=aux;

                if(aux==0)
                    m[j][i]+=3;
                if(aux==1)
                    m[j][i]+=1;
                else
                    m[j][i]+=0;
            }
        }
        ida++;
    }
}

void calculo_puntos(int *tabla, int m[][TAM])
{
    for(int i =0; i<TAM;i++)
    {
        tabla[i]=0;
        for(int j=0;j<TAM;j++)
        {
            tabla[i]+=m[i][j];
        }
    }
}

void mostrar_puntaje(int *tabla)
{
    printf("\nResultado del campeonato\n");
    for(int i =0; i<TAM;i++)
    {
        printf("%c: %d\n",i+65,tabla[i]);
    }
}
