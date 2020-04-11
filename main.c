#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int main()
{
    //Ejericicio 1
    //printf("%d\n",factorial(5));

    //Ejericicio 2
    //printf("%d\n",combinatoria(6,5));
    //printf("%d\n",combinatoria(5,6));

    //Ejercicio
    //printf("%f",e_a_la_x(7, 0.01));

    //Ejercicio 7
    /*printf("6\t");pdn(6);
    printf("\n10\t");pdn(10);
    printf("\n12\t");pdn(12);
    */

    //Ejercicio 8
    //printf("%d",multiplicacion(9,9));

    //Ejercicio 9
    //cociente_resto(7,3);

    //Ejercicio 10
    //printf("%d",suma_numero_naturales(3));

    //Ejercicio 11
    //printf("%d",suma_numero_naturales_pares(3));


    //Ejercicio 12
    //printf("%d",suma_numero_naturales_pares_menor_que(5));

    //Ejercicio 13
    /*
    if(es_primo(14)==TRUE)
    {
        printf("Primo");
    }
    else
    {
        printf("No Primo");
    }
    */

    /*
    tFecha f = {10,4,2020};
    printf("%d/%d/%d\n", f.dia,f.mes,f.anio);
    //Ejercicio 14
    //printf("%d", fecha_correcta(&f));

    //Ejercicio 15
    //tFecha f2 = fecha_siguiente(&f);
    //printf("%d/%d/%d", f2.dia,f2.mes,f2.anio);

    //Ejercicio 16
    tFecha f3 = suma_dias_a_fecha(&f, 1000);
    printf("%d/%d/%d\n", f3.dia,f3.mes,f3.anio);

    //Ejercicio 18
    printf("%d\n",dias_entre_fechas(&f, &f3));

    //Ejercicio 19
    dia_de_la_semana(&f);
*/


    //Ejercicio 20
    //printf("35x8=%d",multiplicacion_rusa(35,8));

    //Ejercicio 21
    //printf("%d",parte_entera(5.2));
    /*
    int vector[5] = {1,4,6,4,12};
    for(int i=0; i<5;i++)
    {
        printf("%d ",vector[i]);
    }
    printf("\n");
    */
    //Ejercicio 22
    /*
    insertar(vector, 5, 9);
    */

    //Ejercicio 23
    //insertar_ordenado(vector, 5, 6);
    //insertar_ordenado_punteros(vector, 5, 76);

    //Ejercicio 24
    //eliminar(vector, 5, 4);

    //Ejercicio 25
    //eliminar_primera_aparicion(vector, 5, 5);

    //Ejericicio 26
    /*
    eliminar_todas_apariciones(vector, 5, 4);
    for(int i=0; i<5;i++)
    {
        printf("%d ",vector[i]);
    }
    return 0;
    */

    //Ejercicio 27
    /*
    char palabra[20] = {"neuquen"};
    printf("%s: %d\n",palabra,palindromo(&palabra));
    char palabra2[20] = {"sebaabes"};
    printf("%s: %d\n",palabra2,palindromo(&palabra2));
    */


    //Ejercicio 28
    //char palabra[20] = {"223323222"};
    //printf("%d",palabra_a_numero(&palabra));



    int matriz[][TAM] = {{1,1,1,1},
                         {1,1,1,1},
                         {1,1,1,1},
                         {1,1,1,1}};
    //Ejercicio 29
    printf("%d\n",sumatoria_sobre_diagonal(matriz));
    printf("%d\n",sumatoria_sobre_diagonal_incluida(matriz));
    printf("%d\n",sumatoria_bajo_diagonal(matriz));
    printf("%d\n",sumatoria_bajo_diagonal_incluida(matriz));
    printf("%d\n",sumatoria_sobre_diagonal_secundaria(matriz));
    printf("%d\n",sumatoria_sobre_diagonal_secundaria_incluida(matriz));










    return 0;
}
