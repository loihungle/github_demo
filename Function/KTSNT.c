#include<stdio.h>
#include<stdbool.h>
/* Định nghĩa số nguyên tố 
là số >2(số chẵn) không là số nguyên tố
2 là số nguyên tố */
bool Kiem_tra_so_nguyen_to(int n)
{
    if(n<2)
    {
        return false;
    }
    else
    {
        if(n==2)
        {
            return true;
        }
        else
        {
            if(n%2==0)
            {
                return false;
            }
            else
            {
               for(int i=2;i<n-1;i++)
               {
                if(n%i==0){
                    return false;
                }
               }
            }
        }
    }
    return true;
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    
    Kiem_tra_so_nguyen_to(n);
    if(Kiem_tra_so_nguyen_to(n)==true)
    {
        printf("\n%d la so nguyen to ",n);
    }
    else{
        printf("\n%d khong la so nguyen to",n);
    }
return 0;
}