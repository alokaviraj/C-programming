#include<stdio.h>
#include<conio.h>
main()
{
int n,r,sum=0;
clrscr();
printf("enter the value of n::");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("the sum of number is %d",sum);
getch();
}