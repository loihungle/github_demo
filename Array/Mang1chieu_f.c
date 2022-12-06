#include<stdio.h>
#define MAX 100
//Nhap 1 mang so nguyen co n phan tu. tinh tong tat ca cac phan
int Ham_Tinh_Tong(int arr[],int n)
{
    int Tong=0;
    for (int i=0;i<n;i++)
    {
        Tong+=arr[i];
    }
    return Tong;
}
void Nhap_Mang(int arr[],int n)
{
for(int i=0;i<n;i++)
    {
        printf("\n Nhap phan tu arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuat_Mang(int arr[],int n)
{
 for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[MAX];
    int n;
    //Nhap so luong phan tu mang
    do
    {
        printf("\nNhap so luong phan tu mang: ");
        scanf("%d",&n);
        if(n<=0||n>MAX)
        {
           printf("\nNhap lai so luong phan tu mang!");
        }
    }
    while(n<=0 || n>100);  
    printf("\n\n\t\t\t NHAP MANG \n");
    Nhap_Mang(arr,n);
    printf("\n\n\t\t\t XUAT MANG \n");
    Xuat_Mang(arr,n);
    printf("\nTongMang: %d\n",Ham_Tinh_Tong(arr,n));
    return 0;
}