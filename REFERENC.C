#include<stdio.h>
#include<conio.h>
void swapr(int *x,int *y);
main()
{
int a=10,b=20;
clrscr();
printf("press the enter");
swapr(&a,&b);
printf("\na=%d and b=%d",a,b);
getch();
}
void swapr(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
getch();
}
