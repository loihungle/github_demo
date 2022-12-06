#include<stdio.h>
#include <stdlib.h>
void Nhap_Mang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n Nhap phan tu a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void Xuat_Mang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//them phan tu vao mang
void Them(int a[],int *n,int vt, int x)
{
    //Thuat toan them: noi rong vung nho ban dau ra them 1 o nho
    a=realloc(a,((*n)+1) *sizeof(int));
    for(int i=(*n)-1;i>=vt;i--)
    {
        a[i+1]=a[i];
    }
    a[vt]=x;
    (*n)++;
}
void Xoa(int a[],int *n,int vt)
{
    for(int i=vt+1;i<(*n);i++)
    {
        a[i-1]=a[i];
    }
    a=realloc(a,((*n)-1)*sizeof(int));
    (*n)--;
}
int main()
{
    int *a;
    int n;
    do
    {
        printf("\nNhap vao so luong phan tu n: ");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("\nSo luong phan tu mang khong hop le!");
        }
        
    } while (n<=0);
    /*a=(int *)malloc(n* sizeof(int ))*/
    /*a=(int *)calloc(n,sizeof(int *));*/
    a=(int *)realloc(0,n*sizeof(int));
    Nhap_Mang(a,n);
    Xuat_Mang(a,n);
    int vt;
    /*printf("\nNhap phan tu can them: ");
    scanf("%d",&x);*/
    printf("\nNhap vi tri can them/xoa: ");
    scanf("%d",&vt);
    printf("\nMang sau khi them phan tu/xoa: ");
    //Them(a,&n,vt,x);
    Xoa(a,&n,vt);
    Xuat_Mang(a,n);
    free(a);
    return 0;
}
