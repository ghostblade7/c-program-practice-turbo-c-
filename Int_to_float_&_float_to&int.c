#include <stdio.h> // write a c program on tocovert a integer to float and float to integer

int main()
{
    int a= 55;
    float f=(float)a;
    float x=67.99;
    int d= (int)x;
    long l=59.465756675547885565;
    int i=(int)l;
    
     printf( "%f int converted into float \n",f);
    printf(" %d float converted into int\n ",d);
    printf( "%d long converted into int",i);
    return 0;
}
