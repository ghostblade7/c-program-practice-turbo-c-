#include<stdio.h>
#include<conio.h>
void main(){
int s1,s2,s3,total;
float percentage;
clrscr();
printf(" Enter your marks in Physics \n");
scanf("%d" , &s1);
printf(" Enter your marks in English \n");
scanf("%d" , &s2);
printf(" Enter your marks in Math \n");
scanf("%d" , &s3);
total= s1+s2+s3;
percentage= total/3.0;
printf("\n Your Total number is %d \n" , total);
printf("\n Your Total Percentage is %f \n" , percentage);
if (s1>=33 && s2>=33 && s3>=33 && percentage>=44){
printf( " Congratulations!You have Passed Your Exam ");}
else { 
printf ("You Did Not Pass");
}
getch();

}
