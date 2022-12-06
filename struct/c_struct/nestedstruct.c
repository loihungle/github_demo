#include <stdio.h>
struct member {
    int Age;
    float marsk;
};
struct group {
    struct member Member;
    int id;
}Person;
int main()
{
    Person.Member.Age=22;
    Person.Member.marsk=9;
    Person.id=18146;

   // print struct varibles
    printf("Age is: %d\n",Person.Member.Age);
    printf("Marsk is: %.2f\n",Person.Member.marsk);
    printf("id is: %d\n",Person.id);

    return 0;
}