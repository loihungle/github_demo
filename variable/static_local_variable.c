#include <stdio.h>
#include <time.h>
/*
 
void tangbienso(void){
    static int x = 0;
    x++;
    printf("x = %d\n", x);
}
*/
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void printfchanle(void){
    static int cnt = 0;
    cnt = 1 - cnt;
    if(cnt == 0){
        printf("chan\n");
    }
    else{
        printf("le\n");
    }
}
int main (){
    while(1){
        printfchanle();
        delay(1);
    }
    return 0;
}