#include<stdio.h>
#include<conio.h>
void swapv(int,int);
void main()
{
int *a,*b;
clrscr();
printf("enter the value of a::");
scanf("%d",&a);
printf("enter the value of b::");
scanf("%d",&b);
printf("value before swaping a=%d,b=%d",a,b);
swapv(*a,*b);
//printf("value after swaping a=%d,b=%d",a,b);
getch();
}
void swapv(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("value after swaping a=%d,b=%d",*x,*y);
getch();
}
