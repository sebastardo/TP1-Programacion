#include "prototipos.h"

int combinatoria(int m, int n){
    if(m>=n && n>=0)
        return factorial(m)/(factorial(n)*factorial(m-n));
    return 0;
}
