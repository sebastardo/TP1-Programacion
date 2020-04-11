#include "prototipos.h"

tFecha fecha_siguiente(const tFecha *f)
{
    tFecha f2 = {f->dia+1, f->mes, f->anio};
    if(fecha_correcta(&f2))
        return f2;

    f2.dia = 1;
    f2.mes = f->mes+1;

    if(fecha_correcta(&f2))
        return f2;

    f2.mes=1;
    f2.anio=f->anio+1;

    return f2;
}

