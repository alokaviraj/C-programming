#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("\nenter the number::");
scanf("%d",&i);
if(i%2==0)
{
printf("the number %d is even",i);
}
else
{
printf("the number %d is odd",i);
}
getch();
}