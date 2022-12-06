#include<stdio.h>
#include<math.h>
/*
16
- 0,8 = 16 % 2 * pow(2,0)
- 0,4 = 8 % 2 * pow(2,1)
- 0,2 = 2 % 2 * pow(2,2)
- 0,1 = 1 % 2 * pow(2,3)
- 1,0 = 0 % 2 * pow(2,)
*/
long long DecimalToBinary(int decimal)
{
    int p=0;
    long long Binary=0;
    while(decimal!=0)
    {
    Binary=Binary + (decimal%2)*pow(10,p);
    ++p;
    decimal=decimal/2;
    }
    return Binary;
}
int main()
{
    int num1=0,num2=0;
    printf("\nEnter num1: ");
    scanf("%d",&num1);
    printf("\nEnter num2: ");
    scanf("%d",&num2);
    int d_num1leftShiftResult=0;
    long long num1_b=0, num2_b=0;
    long long b_num1ComplementResult=0;
    long long b_num2ComplementResult=0;
    long long b_num1ANDnum2Result=0;
    long long b_num1ORnum2Result=0;
    long long b_num1XORnum2Result=0;
    long long b_num1leftshiftResult;
    num1_b=DecimalToBinary(num1);
    num2_b=DecimalToBinary(num2);
    
    b_num1ComplementResult = DecimalToBinary(~num1);
    b_num2ComplementResult=DecimalToBinary(~num2);
    b_num1ANDnum2Result= DecimalToBinary(num1&num2);
    b_num1ORnum2Result=DecimalToBinary(num1|num2);
    b_num1XORnum2Result=DecimalToBinary(num1^num2);

    d_num1leftShiftResult=num1<<2;
    b_num1leftshiftResult=DecimalToBinary(d_num1leftShiftResult);
    printf("The result %d(%lld) ~: %lld\n", num1, num1_b,b_num1ComplementResult);
    printf("The result %d(%lld) ~: %lld\n",num2,num2_b,b_num2ComplementResult);
    printf("The result %d(%lld) & %d(%lld): %lld\n",num1,num1_b,num2,num2_b,b_num1ANDnum2Result);
    printf("The result %d(%lld) | %d(%lld): %lld\n",num1,num1_b,num2,num2_b,b_num1ORnum2Result);
    printf("The result %d(%lld) ^ %d(%lld): %lld\n",num1,num1_b,num2,num2_b,b_num1XORnum2Result);
    printf("The result %d(%lld)<< 2: %lld\n",num1,num1_b,b_num1leftshiftResult);
    return 0;
}