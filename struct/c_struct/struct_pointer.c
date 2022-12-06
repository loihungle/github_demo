#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
    char name[50];
    int Age;
    char id[50];
}person;

int main(){
    int n;
    person *p1;

    printf("Nhap so luong o nho: ");
    scanf("%d", &n);

   //cap phat vung nho dong de luu tru cac gia tri co kieu du lieu struc

    p1 = (person *) malloc (n * sizeof (person));

    for (int i = 0; i < n; i++){ 
    fflush(stdin);
    gets(p1[i].name);
    fflush(stdin);
    printf("\nNhap tuoi: ");
    scanf("%d", &p1[i].Age); 
    //scanf("%d", (p1+i)->Age); 

    fflush(stdin);
    gets(p1[i].id);
    }

    for(int i = 0; i<n; i++){
        printf ("name: %s Age: %d Id: %s\n",p1[i].name, p1[i].Age,p1[i].id);
    }
    free(p1);
    return 0;
}