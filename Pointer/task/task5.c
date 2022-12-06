#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    //create pointer data
    double *data;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    //Allocating memory for n elements
    data = (double *) calloc(n, sizeof(double));
    if(data==NULL){
    printf("Error!! memory not allocated.");
    exit(0);
    }
    
    //Storing numbers entered by the user
    for (int i=0; i<n; i++){
        printf("\ndata[%d]= ",i);
        scanf("%lf",data + i);
    }
     
    //double max = *data;
    for(int i=0; i<n; i++)
    {
        if(*data < *(data + i)){
            *data = *(data + i);
        }
    }
    printf("max number of array: %0.lf",*data);
    free(data);
    return 0;
}


