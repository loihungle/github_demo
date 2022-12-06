#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1, n2, *ptr;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1* sizeof(int));

    printf("Address of previously allocate memory:\n");
    for(int i=0; i<n1; i++){
        printf("%p\n", ptr+i);
    }

    printf("\n Enter the new size: ");
    scanf("%d", &n2);

    //rellocating the memory

    ptr=realloc(ptr, n2 * sizeof(int));

    printf("Address of newly allocated memory:\n");
    for(int i=0; i<n2; ++i)
        printf("%p\n",ptr + i);
    
    free(ptr);
    return 0;
}