#include "mylibrary.h"// gọi lại thư viện bên file.h
//Định nghĩa hàm kiểm tra số nguyên tố
bool Kiem_Tra_So_Nguyen_To(int n)
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
                for (int i=2;i<n;i++)
                {
                    if(n%i==0)
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;      
}
//Khai báo hàm kiểm tra số hoàn thiện
bool Kiem_Tra_So_Hoan_Thien(int n)
{
    int  sum=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return true;
    }
  return false;
    
}
//Định nghĩa hàm giải phương trình bậc hai
void Giai_Phuong_Trinh_Bac_Hai(float a, float b, float c)
{
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                printf("\nPhuong trinh co vo so nghiem");
            }
            else
            {
                printf("\nPhuong trin vo nghiem");
            }
        }
        else
        {
            printf("\nPhuong trinh co nghiem: %f",-c/b);
        }
    }
    else
    {
        float delta=(b*b)-(4*a*c);
        if(delta==1)
        {
            printf("\nPhuong trinh co nghiem kep: %f",-b/(2*a));
        }
        else if(delta<0)
        {
            printf("\nPhuong trinh vo nghiem");
        }
        else
        {
            printf("\nPhuong trinh co 2 nghiem phan biet: x1=%f va x2=%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
        }

    }
}