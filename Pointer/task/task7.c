#include <stdio.h>
#include <stdlib.h>
// extern int bientoancuc

int *timMax(int x, int y){
    int static max = 0;
    if( x > y)
       max = x;
    else if ( x < y)
       max = y;
    else
       max = x;
    
    return &max;
}

int main(){

    int a = 10, b = 15;
    int *pt = timMax(a,b);
    printf("Max = %d\n", *pt);
}