#include<stdio.h>
#include<conio.h>
long fact(int n);
main()
{
int num;
clrscr();
printf("enter the integer");
scanf("%d",&num);
printf("the factorial of %d=%d",num,fact(num));
getch();
}
long fact(int n)
{
if(n==0)
return(1);
else
return(n*fact(n-1));
}