#include "mylibrary.c"
//#include "mylibrary.h".
int main()
{
    int n;
    printf("\nMoi ban nhap vao n: ");
    scanf("%d",&n);
    if(Kiem_Tra_So_Nguyen_To(n)==true)
    {
        printf("\n%d la so nguyen to",n);
    }
    else
    {
    printf("\n%d khong la so nguyen to",n);
    }
    return 0;
}