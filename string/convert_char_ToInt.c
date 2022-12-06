/*
Nhập vào một chuỗi số. Chuyển chuỗi số đó thành một số nguyên
+ 1 kí tự số mà muốn chuyển sang 1 số nguyên
==>kí tự số + 48
+ 1 chữ số nguyên mà muốn chuyển  sang kí tự số
==>chữ số nguyên - 48
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
//Hàm chuyển chuỗi số thành số nguyên
int Chuyen_Doi(char s[])
{
    int sum=0;
    int m=0;
    //Duyệt từ cuối chuỗi về đầu chuỗi
    for(int i=strlen(s)-1;i>=0;i--)
    {
        sum=sum+ (s[i]-48)*pow(10,m);
        m++;
    }
    return sum;

}
int main()
{
    char s[100];
    printf("\nNhap chuoi so: ");
    gets(s);
    printf("\nChuoi so vua nhap %s",s);
    printf("\nChuoi so can chuyen: %d ",Chuyen_Doi(s));

}