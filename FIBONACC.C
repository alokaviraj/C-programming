#include<stdio.h>
#include<conio.h>
main()
{
int n,a=0,b=1,c,i;
clrscr();
printf("enter the number of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
   printf("%d",a);
    c=a+b;
    a=b;
    b=c;
    }
getch();
}