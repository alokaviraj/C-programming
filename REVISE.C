#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
int result;
clrscr();
printf("\nthe sum of 2 no");
result=sum();
printf("%d",result);
getch();
}
int sum()
{
int a,b;
printf("\nenter the no.:");
scanf("%d%d",&a,&b);
return a+b;
getch();
}




