#include <stdio.h>
#include<conio.h>
#include <string.h>
/*
s1="tam"
s2="thien tam"
Kiểm tra từng kí tự bằng cách:
Duyệt từ đầu chuỗi đến cuối chuỗi của CHUỖI CÓ ĐỘ DÀI NHỎ NHẤT

 */

//strcmp: so sánh 2 chuỗi có phân biệt kí tự hoa và kí tự thường, có giá trị trả về
int STRCMP(char s1[],char s2[])
{
    int dodai_min=strlen(s1) > strlen(s2) ? strlen(s2):strlen(s1);
    //vòng lặp duyệt từng kí tự để so sánh
    for(int i=0;i<dodai_min;i++)
    {
        if(s1[i]>s2[i])
        {
            return 1; // chuỗi s1 lớn hơn chuỗi s2
        }
        else if(s1[i]<s2[i])
        {
            return -1;
        }
    }
    if(strlen(s1)>strlen(s2))
    {
        return 1;
    }
    else if(strlen(s1)<strlen(s2))
    {
        return -1;
    }
    return 0;
}
int main()
{
    char s1[]="b";
    char s2[]="aac";
    //printf("\nkq: %d",strcmp(s,s1));
    if(STRCMP(s1,s2)>0)
    {
        printf("\nChuoi s1 lon hon chuoi s2");
    }
    else if(STRCMP(s1,s2)<0)
    {
        printf("\n Chuoi s1 nho hon chuoi s2");
    }
    else
    {
        printf("\nChuoi s1 bang chuoi s2");
    }
    return 0;
}