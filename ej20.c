#include "prototipos.h"

int multiplicacion_rusa(int A, int B)
{
    int aux1 = A;
    int aux2 = B;
    int resultado=0;

    while(aux1!=1){
        if(aux1%2!=0){
            resultado+=aux2;
        }
        aux1/=2;
        aux2*=2;
    }
    resultado+=aux2;
    return resultado;
}
