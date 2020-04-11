#include "prototipos.h"


int dias_entre_fechas(const tFecha *finicial, const tFecha *ffinal)
{
    static int dias_anio[][12] = {{0,31,59,90,120,151,181,212,243,273,304,334},
                                  {0,31,60,91,121,152,182,213,244,274,305,335}};

    int dias_transcurridos = (365+esBisiesto(finicial->anio)) - (dias_anio[esBisiesto(finicial->anio)][finicial->mes-1] + finicial->dia);

    for(int i = finicial->anio+1;i<ffinal->anio;i++)
    {
        if(esBisiesto(i))
        {
            dias_transcurridos+=366;
        }
        else
        {
            dias_transcurridos+=365;
        }
    }

    dias_transcurridos+=dias_anio[esBisiesto(ffinal->anio)][ffinal->mes-1] + ffinal->dia;

    return dias_transcurridos;
}
