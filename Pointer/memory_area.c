#include <stdio.h>
#include<stdlib.h>//thu vien ho tro cap phat vung nho con tro

int main()
{
    int *a;
    /*malloc: ham yeu he dieu hanh cap phat vung nho NULL=NO DEFINED
    a=(int *)malloc(sizeof(int *));*/ 

    /*a=(int *)calloc(1,sizeof(int *)); NULL=0
    //size_t_Count: so o nho trong vung nho*/

    /*---------------------------*/
    a=(int *)realloc(0,sizeof(int *)*3);
    *a=69;
    printf("\n%d",*a);
    printf("\n%p",&a);
    free(a);
    return 0;
}