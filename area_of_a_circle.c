#include<stdio.h>
#include<conio.h>

void main()
{
    int r;
    float area;

    clrscr();

    printf("Enter radius: ");
    scanf("%d",&r);

    area=3.14*r*r;

    printf("\nArea of circle = %f",area);

    getch();
}
