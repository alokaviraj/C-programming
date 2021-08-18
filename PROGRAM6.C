#include<stdio.h>
#include<conio.h>
void main()
{
int d1=0,d2=0,d3=0,d4=0,d5=0,number=0,sum,n=0;
clrscr();
n=number;
printf("enter the number\n ");
scanf("%d",&number);
printf("number=%d\n",number);
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
d4=n%10;
n=n/10;
d5=n;
sum=d1+d2+d3+d4+d5;
printf("sum=%d\n",sum);
getch();
}