#include <stdio.h>
#include <stdlib.h>

typedef struct  HocSinh
{
    char ten[10];
    double diem;/* data */
}HS;
//typedef struct Hocsinh HS; 
//Nhap thong tin tra ve 1 struct
/*
HS nhap(){
    HS x;
    fflush(stdin);
    gets(x.ten);
    printf("Nhap diem: ");
    scanf("%lf",&x.diem);
    return x;
}
*/
void nhap(HS *a){
    fflush(stdin);
    gets(a->ten);
    printf("\nNhap diem: ");
    scanf("%lf",&a->diem); 
}
void in(HS a){
    printf("\nTen: %s Diem %lf", a.ten, a.diem);
    //printf("\nDiem: %lf", a.diem);
}


int main(){
    HS a[1000];
    int n;
    scanf("%d", &n);
    for (int i =0;i<n ; i++){
        nhap(&a[i]);
    }
    for (int i =0 ; i< n; i++)
    {
        in(a[i]);
    }
return 0;

}
