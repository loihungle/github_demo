#include <stdio.h>
void cyclicSwap(int *a, int *b, int *c);

int main(){
    int a, b, c;
    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b,&c);

    printf("Value before swapping:\n");
    printf("a = %d b = %d c = %d",a, b, c);

    cyclicSwap(&a,&b,&c);

    printf("\nvalue after swaping: \n");
    printf("a = %d b = %d c = %d", a, b, c);
    return 0;


}

void cyclicSwap(int *a, int *b, int *c){
    int Temp = *a;
    *a = *c;
    *c = *b;
    *b=Temp;
}