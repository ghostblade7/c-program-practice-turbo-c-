#include<stdio.h>
#include<stdbool.h>
int main()
{
    int m=34;
    float f= 34.65;
    char c='X';
    double d=34.6557;
    bool p = true;
    
    printf("address of int is %u \n", &m); // you can use %d or %p also. %n gives only positive integer value 
    printf("address of float is %u \n", &f);
    printf("address of char is %u \n", &c);
    printf("address of double is %u \n",&d);
    printf("address of boolean is %u \n", &p);
    return 0;
}
