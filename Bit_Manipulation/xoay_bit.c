#include<stdio.h>
#include<math.h>
#include<stdlib.h>
unsigned DecimalConvertBinary(int Decimal)
{
    unsigned  int m=0;
    unsigned Binary=0;
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

   
    int n=0,k=0,n_tt=0;
    unsigned  Binary_n;
    printf("\nNhap n:");
    scanf("%d",&n);
    Binary_n=DecimalConvertBinary(n);
    printf("\nBinary is %d",Binary_n);
    printf("\nso lan dich: ");
    scanf("%d",&k);
    //dem so luong bit 1 co trong so nguyen n
  
        n_tt= (n<<k); 
     
    //printf("\nBinary is: %lli",DecimalConvertBinary(n));
    printf("\nBinary is: %d",DecimalConvertBinary(n_tt));
    return 0;
}