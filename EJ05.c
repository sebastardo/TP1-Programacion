#include "prototipos.h"

int fibonacci(int n){
    int x = 0;
    int y = 1;


    while((x+y)<n){
        y=x+y;
        x=y-x;
    }
    if(x+y==n)
        return 1;
    return 0;
}
