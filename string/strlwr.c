#include<stdio.h>
#include<string.h>
#include<conio.h>

/*Tat ca cac ki tu tren ban phim duoc luu duoi dang ma ASCII-
ma ascii la ma he thap phan - he 10. Noi chung cac ki tu se duoc
luu bang 1 ma so nguyen (ASCII)
a-z: 97-->122
A-Z: 65-->90
*/

void STRLWR(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i] + 32;
        }
    }
}
int main()
{
    char s[30]="";
    printf("\nNhap chuoi S: ");
    gets(s);
    printf("\nChuoi sau khi nhap: %s",s);
    //strlwr(s);
    STRLWR(s);

    printf("\nChuoi sau khi chuyen: %s",s);
    return 0;
}