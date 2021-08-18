#include<stdio.h>
#include<conio.h>
void main()
{
long int num,fact;
clrscr();
printf("\nenter the number::");
scanf("%ld",&num);
fact=1;
do
{
fact=fact*num;
num--;
}
while(num>1);
printf("the factorial=%ld",fact);
getch();
}