#include "prototipos.h"

void ascii()
{
    for(int i = 0;i<128;i++)
        {
            (i<32 || i == 127)?printf("Caracter no imprimible\t|\t%d\t|\t%x\n", i,i,i):printf("%c\t\t\t|\t%d\t|\t%x\n", i,i,i);
        }
}
