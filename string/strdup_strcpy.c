#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void Sao_chep_chuoi(char S2[],char S1[])
{
    for(int i=0;i<strlen(S1);i++)
    {
        S2[i]=S1[i];
    }
    S2[strlen(S1)]='\0';
}
//xay dung ham strdup
char* STRDUP(char S1[])
{
    char *str2=(char *)malloc(strlen(S1)+1);
    for(int i=0;i<strlen(S1);i++)
    {
        str2[i]=S1[i];
    } 
    str2[strlen(S1)]='\0';
    return str2;
    free(str2);//cap phat vung nho de chua chuoi sao chep
}
/* Ham strdup() se yeu cau bo nho may tinh cap phat ra mot vung nho
chua<chuoi> -sau do con tro s se tro den vung nho vua duoc cap phat
de quan li chuoi do*/
int main()
{
    char S1[30];//Khai bao chuoi S2 chua chuoi S1
    //char S2[30];
   
    fflush(stdin);
    printf("\nNhap chuoi S1: ");
    gets(S1);
    printf("\nChuoi sau khi nhap: %s",S1);
    char *str2= STRDUP(S1);
    //strcpy(S2,S1); //Gan chuoi S2=S1
    //Sao_chep_chuoi(S2,S1);
    printf("\nChuoi S2 sau khi sao chep: %s",str2);
    free(str2);

    return 0;
}