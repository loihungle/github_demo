#include <stdio.h>
void Hoan_Vi(int *a, int *b)
{
    int Temp=*a;
    *a=*b;
    *b=Temp;
}
int main()
{
    int c=3;
    int d=4;
    Hoan_Vi(&c,&d);// *a=&c, *b=&d
    printf("\nGia tri cua a sau khi hoan vi %d",c);
    printf("\nGia tri cua b sau khi hoan vi %d",d);

}