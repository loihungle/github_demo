#include<stdio.h>
int main()
{
    int value=10;
    // Gia tri bien value
    printf("\nGia tri bien value: %d",value);
    //Dia chi bien value
    printf("\nDia chi cua bien value: %p",&value);
    printf("\n-----------------\n");
    //Khai bao + khoi tao bien con tro p
    int *contro=&value;
    //Gia tri cua con tro p
    printf("\nGia tri cua con tro p: %p",contro);
    //Dia chi cua con tro p
    printf("\nDia chi cua con tro P: %p",&contro);
    //Gia tri bien ma con tro p dang tro toi
    printf("\nGia tri cua bien ma con tro p dang tro toi: %d",*contro);
    *contro=100;
    printf("\nGia tri cua value sau khi thay doi: %d",value);
    printf("\nGia tri cua bien ma con tro p dang tro toi %d",*contro);
    printf("\nKich thuoc vung nho con tro: %lld",sizeof(contro));
    //Con tro vo kieu
    void *p;
    p=&value;
    printf("\nGia tri bien con tro p: %d",*(int*)p);
    return 0;

}