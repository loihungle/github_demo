#include <stdio.h>
#include <stdlib.h>

void Nhapmang(int *arr, int *k){
    printf("Nhap so phan tu mang: ");
    scanf("%d", k);

    for(int i = 0; i < *k; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", arr + i);
    }
}
void Inmang(int *arr, int k){
    for (int i=0; i<k; i++){
    printf("\narr[%d] = %d", i, *(arr + i));
 }
}
void sapxeptangdan(int *arr, int k){
    for (int i = 0; i < k - 1; i++){
        for(int j = i + 1; j < k; j++){
            if(*(arr + j) < *(arr + i)){
                int Temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = Temp;
            }

        }
    }
}
int main() {
    int mang[100];
    int n;
    Nhapmang(mang, &n);
    Inmang(mang, n);
    sapxeptangdan(mang,n);
    printf("\t\t\nMANG SAP XEP TANG DAN\n");
    Inmang(mang,n);
    /*
    char x[8] = {0x01, 0x08, 0x03, 0x05, 0x04, 0x06,0x07,0x02};
    char temp;
    char *pt; //1 byte
    pt = x;
    
    short *ptt; //2 bytes
    int *pttt; //4 bytes
    pt=x;
    ptt=x;
    pttt=x;
    //before
    printf("%x\n", *pttt); 
    printf("%p\n",pttt); 

    pttt++;

    //after
    printf("%x\n", *pttt);
    printf("%p\n",pttt);
    
   //Sap xep mang tang dan
   for(int i=0; i < 7; i++){
    for(int j= i + 1 ;j < 8; j++){
        if(*(pt+j) < *(pt+i))
        {
            temp = *(pt+i);
            *(pt+i) = *(pt+j);
            *(pt+j) = temp;
        }
    }
   }
    //for(int i = 0; i < 8; ++i){
        printf("%x ", *(pt+i));
    }
    */
   
    return 0;
}