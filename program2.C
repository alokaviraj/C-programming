#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
float pi;
int radius;
float area;
clrscr();
printf("the value of pi is");
scanf("%f",& pi);
printf("enter the radius") ;
scanf("%d,",& radius) ;
area=pi*radius*radius;
printf("the area of circle is %f",area);
getch();
}