#include<stdio.h>
#define MAX 100
void Nhap_mang(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nnhap phan tu arr[%d]:" ,i);
        scanf("%d",&arr[i]);
    }
}
void Xuat_mang(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
}
//Hoan vi dung xor
void Hoanvi(int *x,int *y)
{
    *x^=*y;
    *y^=*x;
    *x^=*y;
}
void Sap_xep_mang_tang_dan(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
             Hoanvi(&arr[i],&arr[j]);
            }
        }
    }
}
void Sap_xep_mang_giam_dan(int arr[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                Hoanvi(&arr[i],&arr[j]);
            }
        }   
    }
}
int main()
{
    int arr[MAX];
    int n;
    do
    {
        printf("\nNhap so luong phan tu mang: ");
        scanf("%d",&n);
        if(n<=0 || n>MAX)
        {
            printf("\nNhap lai so luong phan tu mang!");
        }  
    } while (n<=0||n>MAX);  
    printf("\n\n\t\t NHAP MANG \n");
    Nhap_mang(arr,n);
    printf("\n\n\t\t XUAT MANG \n");
    Xuat_mang(arr,n);
    printf("Mang sau khi sap xep (tang)giam dan: ");
    Sap_xep_mang_tang_dan(arr,n);
    //Sap_xep_mang_giam_dan(arr,n);
    Xuat_mang(arr,n);
    return 0;
}