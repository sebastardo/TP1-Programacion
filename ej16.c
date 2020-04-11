#include "prototipos.h"

tFecha suma_dias_a_fecha(const tFecha *f, int dias)
{
    tFecha fecha = {f->dia, f->mes,f->anio};

    while(dias>0)
    {
        fecha = fecha_siguiente(&fecha);
        dias--;
    }
    return fecha;
}
