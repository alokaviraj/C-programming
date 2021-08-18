#include<stdio.h>
#include<conio.h>
void swapv(int a,int b);
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("before swaping values in main a=%d and b=%d",a,b);
swapv(a,b);
printf("\n after swaping values in main a=%d and b=%d",a,b);
getch();
}
void swapv(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\n after swaping values in function a=%d and b=%d",a,b);
return 0;
}