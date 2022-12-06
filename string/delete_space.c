#include<stdio.h>
#include<conio.h>
#include<string.h>
//Hàm xóa kí tự tại một vị trí bất kỳ
void xoa(char s[],int vt)
{
    for(int i=vt+1;i<strlen(s);i++)
    {
        s[i-1]=s[i];
    }
    s[strlen(s)-1]='\0';
}
//Hàm xóa tất cả kí tự khoảng trắng ở đầu chuỗi
void Xoa_Ki_Tu_Khoang_Trang_Dau_Chuoi(char s[])
{
    while(1)
    {
        if(s[0] ==' ')
        {
         xoa(s,0);//xoa kí tự khoảng trắng tại vị trí i
        }
        else{
            break;
        }
    }
}
//Hàm xóa tất cả kí tự khoảng trắng ở cuối chuỗi
void Xoa_Ki_Tu_Khoang_Trang_Cuoi_Chuoi(char s[])
{
    while(1)
    {
      if(s[strlen(s)-1]==' ')
      {
        xoa(s,strlen(s)-1);
      }
      else
      {
        break;
      }
    }
}
int main()
{
    char s[30];// chứa tối đa 29 kí tự
    printf("\nNhap chuoi:");
    gets(s);
    printf("\nChuoi nhan duoc:%s",s);
    //Hàm xóa kí tự khoảng trắng ở đầu chuỗi
    Xoa_Ki_Tu_Khoang_Trang_Dau_Chuoi(s);
    //Hàm xóa kí tự khoảng trắng ở cuối chuỗi
    Xoa_Ki_Tu_Khoang_Trang_Cuoi_Chuoi(s);
    printf("\nChuoi sau khi xoa ki tu khoang trang:%s",s);
    return 0;
}