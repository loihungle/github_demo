#include<stdio.h>    
#include<stdlib.h>  
char RL(unsigned char byte,unsigned int n)
{
    unsigned char temp=0;
    for(int x=0;x<n;x++)
    {
        temp=byte&(1<<7);//save last bit
        byte=byte<<1;//shift n left by 1 bit
        byte|=temp;//save last bit in first position from right
    }
    return byte;
}

char RR(unsigned char byte,unsigned int n)
{
    unsigned char temp=0;
    for(int x=0;x<n;x++)
    {
        temp=byte&(1<<0);//save first bit
        byte=byte>>1;//shift n left by 1 bit
        byte|=(temp<<7);//save first bit in last position from right
    }
    return byte;
}
int main()
{
    printf("%c",RL(255,8));
    return 0;
}