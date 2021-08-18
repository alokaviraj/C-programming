#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("enter the no of day(1-7)::");
scanf("%d",&day);
switch(day)
{
case 1:printf("%d=sunday",1);
case 2:printf("\n%d=monday",2);
case 3:printf("\n%d=tuesday",3);
case 4:printf("\n%d=wednesday",4);
case 5:printf("\n%d=thursday",5);
case 6:printf("\n%d=friday",6);
case 7:printf("\n%d=saturday",7);break;
default:printf("error in data  ");
}
getch();
}