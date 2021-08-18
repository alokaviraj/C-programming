#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n enter the value of a::");
scanf("%d",&a);
printf("enter the value of b::");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("after the swaping, the numbers are a=%d and b=%d",a,b);
getch();
}