#include<stdio.h>
#include<conio.h>

void main()
{
    int n, a=0, b=1, c, i=1;

    clrscr();

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
        i++;
    }

    getch();
}
