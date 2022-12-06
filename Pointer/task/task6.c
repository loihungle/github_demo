#include <stdio.h>
#include <string.h>
int main(){
char chuoi[50];
    char *ptr;
    ptr = chuoi;

    fflush(stdin);
    printf("Nhap chuoi: ");
    gets(chuoi);
    int len = strlen(chuoi);
    
    for(int i = 0; i < len; i++)
    {
        if(*(ptr + i)==' '){
            for(int j = i + 1; j < len; j++){
                *(ptr + j -1 ) = *(ptr + j);
            }
            i = i - 1;
            len = len - 1;
            chuoi[len] = '\0';
        }
    }

    //in chuoi ra man hinh

        printf("\nChuoi nhan duoc: %s", chuoi);
        return 0;
}
