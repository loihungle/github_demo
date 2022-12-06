#include<stdio.h>
#include<conio.h>
#include<string.h>// thu vien ho tro cac ham thao tac tren ham
/*bai 1: Nhap vao ho ten cua mot sinh vien. Xuat ra do dai cua chuoi ho ten do
 bai 2: Nhap vao chuoi S1, sau do sao chep chuoi S1 sang cho chuoi S2 */
//Xay dung ham tinh do dai chuoi
int Tinh_Do_Dai_Chuoi(char s[])
{
    /*int i=0;
    while(1)
    {
        if(s[i]=='\0')
        {
            return i;
        }
      i++;
    }
    */
   for(int i=0; ;i++)
   {
    if(s[i]=='\0')
    {
        return i;
    }
   }
}
/*Nhap vao chuoi s1, sau do sao chep s1 sang cho chuoi s2 */
int main()
{   //khai bao
    //char HoTen[30];
    //Khoi tao
    //char MonHoc[30]="KI THUAT LAP TRINH";//Tu dong them ki tu '\0' vao cuoi chuoi
    //char maso[]="18146337LHL";
    /* XUAT CHUOI */
    //printf("\nChuoi nhan duoc: %s",MonHoc);
   // puts(MonHoc);
   /* NHAP CHUOI 
   Co che nhap chuoi cho bien: khi chung ta nhap cai gi do tu ban phim
   -->luu duoi bo nho dem va chuong trinh se lay du lieu tu bo nho dem do
   dua vao cho bien
   *scanf(): Khong nhan ki tu khoang trang va ki tu xuong dong
   gets(): Khong nhan ki tu xuong dong*/
   /*===== BAI TOAN TINH DO DAI CHUOI ============= */
   char hoten[30];
   int namsinh;
   printf("\nNhap nam sinh: ");
   scanf("%d",&namsinh);
   //Thuc hien thao tac xoa bo nho dem truoc khi nhap chuoi fflush(stdin);
   fflush(stdin);
   printf("\nNhap chuoi: ");
   //scanf("%s",&hoten);
   gets(hoten);
   /* ------PHAN TINH DO DAI CHUOI-------- */
   //printf("\nDo dai chuoi %lld: ",strlen(hoten));
   printf("\nDo dai chuoi:%d ",Tinh_Do_Dai_Chuoi(hoten));
   printf("\nChuoi nhan duoc: %s",hoten);


   return 0;
}