#include <stdio.h>
void NhapMang(int *arr, int n){
for (int i = 0; i < n; i++){
    printf("arr[%d]:  ",i);
    scanf("%d", arr + i );
 }
}
void InMang(int *arr, int n){
    for(int i = 0;  i < n; i++){
        printf("arr[%d] = %d\n",i, *(arr + i));
    }
}

void Themphantumang(int *arr, int *n, int vt, int k){
    ++(*n);
    arr = realloc (arr, (*n) * sizeof(int));
    for(int i = (*n) - 1; i >= vt; i--){
        arr [i + 1] = arr[i];
    }
    arr[vt] = k;
}
void Xoaphantumang(int *arr, int *n, int vt){
    for (int i = vt; i < (*n) - 1; i++){
        arr[i] = arr[i + 1];
    }
    --(*n);
}


 int main(){

    int n;
    int *mang;
    printf("\nNhap so luong phan tu mang: ");
    scanf("%d", &n);

    mang = (int *) calloc (n, sizeof(int));

    NhapMang(mang, n);
    InMang(mang, n);
    
    printf("\t\t\n\nMANG SAU KHI THEM PHAN TU\n");
    //Themphantumang(mang, &n, 3 , 100); 
    Xoaphantumang(mang, &n, 2);
    InMang(mang, n);
    free(mang);
    return 0;
 }