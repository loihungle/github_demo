#include <stdio.h>
#include <stdlib.h>

int  *capphatbonho(void) {
 //static int temp;
 int *ptt = (int *)calloc (10, sizeof(int)); //40 bytes
 return ptt;
}
/*
void capphatbonho(int **ptt){
 *ptt = (int *)calloc (10, sizeof(int)); //40 bytes
}*/
/*int  *capphatbonho(int *ptt){
 
 ptt = (int *)calloc (10, sizeof(int)); //40 bytes
 return ptt;
 
}*/
// sau khi thoat khoi ham mac du con tro ptt bi xoa khoi vung nho nhung vung nho tao ra van con ton tai

int main(){
    //int a;
    int *pt;
    //pt = &a;
    pt = capphatbonho();
    pt[1] = 2;
    printf("%d",pt[1]);

    return 0;
}