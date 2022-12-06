#include<stdio.h>
int main()
{
    short int x=3;
    short int y=4;
    x=x^y;
    y^=x;
    x^=y;
    printf("\nx= %d",x);
    printf("\ny= %d",y);
    return 0;
}