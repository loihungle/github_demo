#include <stdio.h>

int main (){
int n, max;
int  num[100];

printf("Enter the numbers of elements: ");
scanf("%d", &n);

while (n<1 || n >100){
printf("Error! number should in range of (1 to 100).\n");
printf("Enter the number again: ");
scanf("%d",&n);
}

for(int i=0; i<n; i++){
    printf("num[%d]=: ",i);
    scanf( "%d" ,&num[i]);
    }

//storing the largest number to arr[0]
max=num[0];
for(int i=1;i<n;i++){
    if(num[i] >= max){
        max = num[i];
    }
}
printf("Max number of array: %d",max);


return 0;
}