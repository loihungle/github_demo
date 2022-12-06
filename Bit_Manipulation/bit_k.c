#include<stdio.h>
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
    int n=0,dem=0,n_tt;
    long long Binary_n;
    printf("\nNhap n:");
    scanf("%d",&n);
    Binary_n=DecimalConvertBinary(n);
    printf("\nBinary is %lli",Binary_n);
    //printf("\nlay bit thu: ");
    //scanf("%d",&k);
    //dem so luong bit 1 co trong so nguyen n
    for(int k=0;k<32;k++)
    {
        n_tt=(0x1) & (n >>k);
        if(n_tt==0x1)
        {
           ++dem; 
        }
    }
    //printf("\nBinary is: %lli",DecimalConvertBinary(n));
    printf("\nso luong bit 1: %d",dem);
    return 0;
}