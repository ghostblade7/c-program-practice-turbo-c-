#include <stdio.h>
#include<stdbool.h>
int main()
{
    int m=34;
    float f= 34.65;
    char c='X';
    double d=34.6557;
    bool p = true;
    
    printf("size of int is %d \n", sizeof(m));
    printf("size of float is %d \n", sizeof(f));
    printf("size of char is %d \n", sizeof(c));
    printf("size of double is %d \n", sizeof(d));
    printf("size of boolean is %d \n", sizeof(p));
    return 0;
}
