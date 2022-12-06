#include<stdio.h>
#include<string.h>
#include<conio.h>
//xoa 1 ki tu tai vi tri bat ki trong chuoi
void xoa(char s[],int vt)
{
    for(int i=vt+1;i<strlen(s);i++)
    {
        s[i-1]=s[i];
    }
    s[strlen(s)-1]='\0';
}
void them(char s[],int vt,char kituthem)
{
    for(int i=strlen(s)-1;i>=vt;i--)
    {
        s[i+1]=s[i];
    }
    s[vt]=kituthem;
    s[strlen(s)]='\0';
}
int main()
{
    char s[30]="";
    printf("\nNhap chuoi S: ");
    gets(s);
    printf("\nChuoi sau khi nhap: %s",s);

    //xoa(s,2);
    them(s,2,'l');
    printf("\nChuoi sau khi xoa/them: %s",s);
    return 0;
}