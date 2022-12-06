#include <stdio.h>
#include<conio.h>
#include <string.h>
void Hoanvi(char  *x, char *y)
{
    *x^=*y;
    *y^=*x;
    *x^=*y;
}
void Hoanvi_1(char *x, char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void STRREV(char s[])
{
    for(int i=0;i<(strlen(s)/2);i++)
    {
        //Doi cho cap ki tu cho nhau theo cong thuc
        Hoanvi_1(&s[i],&s[strlen(s)-i-1]);
    }
}
int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    gets(s);
    printf("\nChuoi nhan duoc: %s",s);
    STRREV(s);
    printf("\nChuoi sau khi dao nguoc: %s",s);
    return 0;
}