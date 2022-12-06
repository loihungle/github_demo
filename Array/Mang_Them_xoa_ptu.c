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
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
//them phan co gia tri k vao mang o vt
void Themphantu(int arr[],int *n,int vt,int k)
{
    for(int i=*n;i>vt;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[vt]=k;
    (*n)++;
}
//xoa phan tu mang
void Xoaphantu(int arr[],int *n,int vt)
{
    for(int i=vt;i< *n;i++)
    {
        arr[i]=arr[i+1];
    }
    (*n)--;
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
    printf("Mang sau khi them: ");
    //Themphantu(arr,&n,4,3);
    Xoaphantu(arr,&n,0);
    Xuat_mang(arr,n);
    return 0;
}