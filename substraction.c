#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    clrscr();

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    c=a-b;

    printf("\n Difference of the two numbers is %d",c);

    getch();
}
