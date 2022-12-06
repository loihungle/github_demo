#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  Sinhvien
{
    char ma[50];
    char ten[100];
    double diem;
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
    gets(a->ma);
    fflush(stdin);
    gets(a->ten);
    printf("\nNhap diem: ");
    scanf("%lf",&a->diem); 
}
void in(HS a){
    printf("\nMa %s Ten: %s Diem %lf",a.ma, a.ten, a.diem);
    //printf("\nDiem: %lf", a.diem);
}
 void timkiem(HS a[], int n, char m[100]){
    for (int i = 0; i < n; i++){
        if(strcmp(m, a[i].ma) == 0){
            in(a[i]);
        }
        else{
        printf("\nkhong tim thay sinh vien ");
        }
    }

 }
 void Timkiemdiemmax(HS a[], int n){
    double max = a[0].diem; int vt = 0;
    for(int i = 0; i < n ;i++){
        if (a[i].diem > max){
            max = a[i].diem;
            vt++;
        }
    printf("Diem cao nhat: %lf", max);
    in(a[vt]);    
    }
 }

int main(){
    HS a[1000];
    char s[100];
    int n;
    scanf("%d", &n);
    for (int i =0;i<n ; i++){
        nhap(&a[i]);
    }
    for (int i = 0; i<n; i++){
        in(a[i]);
    }
    /*printf("\nNhap ma HS can tim: ");
    fflush(stdin);
    gets(s);
    timkiem(a, n, s);
    */
    Timkiemdiemmax(a, n);
 
return 0;

}
