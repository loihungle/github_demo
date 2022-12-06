#include <stdio.h>
#include <math.h>
int findUnique(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
        printf("\nresult=%d",result);
    }
    return result;
}
int main()
{
    int arr[]={2,3,5,4,5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //findUnique(arr,n);
     printf("Unique=%d",findUnique(arr,n));
    // printf("Hello World!");
    return 0;
}