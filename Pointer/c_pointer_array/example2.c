#include <stdio.h>

int main(){
    int x[5]={0,1,3,4,5};

    //create pointer variable
    int *p;
    
    //p is assigned the address of the third element
    p=&x[2];

    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p+1));
    printf("*(p-1) = %d\n", *(p-1));

    return 0;

}