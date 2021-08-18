#include<stdio.h>
#include<conio.h>
main()
{
int i,sum=0;
int arr[5]={1,2,3,4,5};
clrscr();
for(i=0;i<6;i++)
{
sum=sum+arr[i]; }
printf("sum of array is= %d",sum);
getch();
}