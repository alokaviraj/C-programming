#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],i,n,position,value;
clrscr();
printf("enter the no.of the elementin the array");
scanf("%d",&n);
printf("enter the number\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the position where you have to enter the number");
scanf("%d",&position);
printf("enter the value");
scanf("%d",&value);
for(i=n-1;i>=position;i--)
arr[i+1]=arr[i];
arr[position-1]=value;
printf("resultant array is:");
for(i=0;i<=n;i++)
printf("%d",&arr[i]);
getch();
}
