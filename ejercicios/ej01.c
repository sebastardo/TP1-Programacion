#include "ej01.h"

long factorial(int N){
    int aux = N;
    int total = 1 ;

    if(!N)
        return 1;

    while(aux>1){
        total *= aux;
        aux--;
    }
    return total;
}
