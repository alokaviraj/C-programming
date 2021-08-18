#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,simpleinterest;
clrscr();
printf("enter the principal\n");
scanf("%f",&p);
printf("enter the rate\n");
scanf("%f",&r);
printf("enter the year\n");
scanf("%f",&t);
simpleinterest=p*r*t/100.0;
printf("simpleinterest=%f\n",simpleinterest);
getch();
}