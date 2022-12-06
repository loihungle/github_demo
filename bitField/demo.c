#include <stdio.h>

struct time{
    unsigned int hours:5;
    unsigned int minutes:6;
    unsigned int seconds:6;
};

int main(){
    struct time t= {
        .hours = 10,
        .minutes = 30,
        .seconds = 10
    };
    printf("The time is %d  %d  %d\n", t.hours, t.minutes, t.seconds);
    printf("The size of time is %ld bytes.\n,",sizeof(struct  time));
}