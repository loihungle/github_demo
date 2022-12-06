#include <stdio.h>
#include <stdbool.h>
#include<math.h>
long long  DecimalConvertBinary(int Decimal)
{
    int m=0;
    long long  Binary=0;
    while(Decimal!=0)
    {
        Binary=Binary+(Decimal%2)*pow(10,m);
        ++m;
        Decimal=Decimal/2;
    }
    return Binary;
}

int main()
{
    int n=200;
    int  TT;
    int pin;
    long long Binary_n=0;
    Binary_n=DecimalConvertBinary(n);
    printf("\nBinary_n is:  %lld",Binary_n);
    printf("\nDigitalWrite: ");
    scanf("%d %d",&pin,&TT);
    if(TT==1)
    {
        n=n|(0x1<<pin);
    }
    else
    {
        n=n & (~(0x1<<pin));
    }
    printf("Binary_n is: %lld\n",DecimalConvertBinary(n));
    return 0;
}