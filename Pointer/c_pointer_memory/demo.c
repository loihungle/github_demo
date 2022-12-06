
#include<stdio.h>
int main(){ 
    short *ptr;

    ptr = (int*) malloc (100 * sizeof(int));

    printf ("size of ptr: %lld", sizeof(*ptr));


      return 0;
} 
/* 
***Syntax of malloc()
ptr = (castType*) malloc(size);
ptr = (float*) malloc(100 * sizeof (float));


***Syntax of calloc
ptr = (castType*)calloc(n,size);
ptr = (float*) calloc(25, sizeof(float)); 

free(ptr); release the space  

***Syntax of realloc
ptr = realloc(ptr, x);

*/