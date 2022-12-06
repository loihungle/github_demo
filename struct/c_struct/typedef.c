/*
struct Distance{
    int feet;
    float inch;
};

int main(){
    struct Distance d1,d2;
}
------>
typedef struct Distance{
    int feet;
    int inch;
}distances;

int main()
{
    distances d1,d2
}
*/



#include <stdio.h>
#include <string.h>

typedef struct Person{
    char name[50];
    int age;
    float salary;
} person;

int main(){
    //create person variable
    person p1;

    //assign value to name of p1
    strcpy(p1.name,"le hung loi");

    //assign values to other p1 variables
    p1.age=18;
    p1.salary=2000;

    //printf struct varibles
    printf("name: %s\n",p1.name);
    printf("age is: %d\n",p1.age);
    printf("salary is: %.2f\n",p1.salary);

    return 0;
}