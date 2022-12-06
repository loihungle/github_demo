#include <stdio.h>

int main (){
    int a, b, c, max;
    printf ("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    max=a;
    if(b>=max)
    {
        if(c>=b)
            max=c;
        else
            max=b; 
    }
    printf("\nmax is: %d",max);
    return 0;

}