#include <stdio.h>

int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    
    printf("\nEnter elements of 1st matrix:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of 2nd matrix:\n");
    for(int i=0; i<r; i++){
        for (int j=0; j< c; j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //adding two matrices
    for(int i=0; i<r; i++)
        for(int j=0; j< c;j++)
            sum[i][j]=a[i][j] + b[i][j];

    //printing the result
    printf("\nSum of two matrices: \n");
    for(int i = 0; i < r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


return 0;
}