/* Mang la tap hop cac phan tu - co cung kieu du lieu voi nhau
Khai bao mang so nguyen co 5 phan tu: int arr[5].
Cu phap: <Kieu du lieu cua mang><Ten cua mang>[<so luong phan tu mang>]
MANG TINH: La mang co so luong phan tu mang khong the thay doi duoc trong
suot qua trinh chuong trinh dang chay.
MANG DONG: La mang co so luong phan tu mang co the thay doi duoc trong
suot qua trinh chuong trinh dang chay.
*Tinh chat cua mang 1 chieu: Cac phan tu cua mang nam lien tiep(lien tuc)
trong bo nho may tinh.
-Co the truy xuat truc tiep den 1 phan tu trong mang thong qua toan tu chi
so[].
-Cac o nho cua mang duoc danh so tu 0 den so luong phan tu mang -1
*/
#include <stdio.h>
int main()
{
    int arr[5];
    // vong lap nhap gia tri cho tung phan tu
    for(int i=0;i<=4;i++)
    {
       printf("\nNhap gia tri [%d] = ",i);
       scanf("%d",&arr[i]);
    }
    //xuat gia tri tung phan tu trong mang
    for (int i=0;i<=4;i++)
    {
       printf("\nDia chi: %p", &arr[i]);
    }
    return 0;
}