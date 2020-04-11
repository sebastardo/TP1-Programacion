#include "prototipos.h"

void dia_de_la_semana(const tFecha *f)
{
    char dias_semana[][10]={"domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado"};
    tFecha fdomingo={1,1,1804};

    int dias = dias_entre_fechas(&fdomingo, f);

    int posicion = dias<0 ? dias%7+7 : dias%7 ;

    printf("\n%s\n",dias_semana[posicion]);
}
