#include<stdio.h>
#include<conio.h>

void main()
{
    int b, h;
    float area;

    clrscr();

    printf("Enter base: ");
    scanf("%d", &b);

    printf("Enter height: ");
    scanf("%d", &h);

    area = 0.5 * b * h;

    printf("Area of triangle = %f", area);

    getch();
}
