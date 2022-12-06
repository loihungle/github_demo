#include <stdio.h>
int main()
{
    int x[6], sum=0;

    printf("Enter 6 numbers: ");

    for(int i=0;i<6;i++)
    {
        //Equivalent to scanf("%d",&x[i]);
        scanf("%d",x+i);
        sum += *(x+i);
    }
    printf("sum = %d",sum);
    return 0;
}