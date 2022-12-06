#include<stdio.h>
#include<math.h>
/*1100
 - 0,110 = 1100 % 10 * pow(10,0)
 - 0,11 = 110 % 10 * pow(10,1)
 - 1,1 = 11 % 10 * pow(10,2)
 - 1,0 = 1 % 10 * pow(10,3)

 */
int BinaryConvertDecimal(long long Binary)
{
    int p=0;
    int Decimal=0;
    while(Binary!=0)
    {
        Decimal=Decimal+(Binary%10)*pow(2,p);
        ++p;
        Binary=Binary/10;
    }
    return Decimal;
}
//Algorithm
/*
16
- 0,8 = 16 % 2 * pow(2,0)
- 0,4 = 8 % 2 * pow(2,1)
- 0,2 = 2 % 2 * pow(2,2)
- 0,1 = 1 % 2 * pow(2,3)
- 1,0 = 0 % 2 * pow(2,0)
*/
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
    //long long Binary;
    int Decimal;
    printf("\nEnter the number convert: ");
    //scanf("%lli",&Binary);
    scanf("%d",&Decimal);
    //printf("\nDecimal is: %d",BinaryConvertDecimal(Binary));
    printf("\nBinary is: %lli",DecimalConvertBinary(Decimal));
    return 0;
}