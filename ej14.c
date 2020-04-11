#include "prototipos.h"

int esBisiesto(int anio){
    return anio % 4 == 0 &&
            anio%100!=0 || anio%400==0;
}

int fecha_correcta(const tFecha *fec)
{

    static int dias[][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                             {31,29,31,30,31,30,31,31,30,31,30,31}};

    return fec->mes >= 1 && fec->mes <=12
            &&
            fec->anio >=1592 && fec->anio <= 2100
            &&
            fec->dia <= dias[esBisiesto(fec->anio)][fec->mes-1];
}



