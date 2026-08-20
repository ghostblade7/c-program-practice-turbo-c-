#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c;
    clrscr();

    b=1;

    printf("Enter Your Number Here ");
    scanf("%d",&a);

    while(b<=10){
        c=a*b;
        printf("\n%d x %d = %d",a,b,c);
        b++;
    }

    getch();
}
