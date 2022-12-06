#include <stdio.h>

int main (){
int n;
float num[100], sum = 0.0, avg;

printf("Enter the numbers of elements: ");
scanf("%d", &n);

while (n<1 || n >100){
printf("Error! number should in range of (1 to 100).\n");
printf("Enter the number again: ");
scanf("%d",&n);
}


for (int i = 0; i < n; i++){
    printf("num[%d]: ",i);
    scanf("%f", &num[i]);
    sum+=num[i];
}
//caculate avg
avg = sum/n;
printf("Average of array: %.2f", avg);

 return 0;   
}