#include <stdio.h>
//int max;
int Timsolonhon(int x, int y){
    static int max;
    if (x > y) {
        max = x;
    }
    else if(x < y){
        max = y;  
    }
    else{
        max = x;
    }
    return max;
}
/*int *Timsolonhon(int *x, int *y){
    if (*x > *y) {
        return x;
    }
    else if(*x < *y){
        printf("\naddress of y %ld: ",y);
        return y;
    }
    else{
        return x;
    }
}
*/

int main(){
    int a = 8, b = 10;
    //int *kq;
   // kq = Timsolonhon(a, b);
    printf("\nSo lon hon %d",Timsolonhon(a,b));
    return 0;
}