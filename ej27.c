#include "prototipos.h"

enum BOOL palindromo(char *palabra)
{
    char *fin = palabra+largo_palabra(palabra)-1;

    while(*palabra!='\0')
    {
        if(*palabra!=*fin)
            return FALSE;
        palabra++;
        fin--;
    }
    return TRUE;
}


int largo_palabra(char *palabra)
{
    int largo = 0;
    while(*palabra!='\0')
    {
        largo++;
        palabra++;
    }
    return largo;
}
