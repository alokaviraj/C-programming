#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,key,found=0;
int arr[10];
clrscr();
printf("enter the no of elements in array");
scanf("%d",&n);
printf("enter the element to be inserted");
for(i=0;i<n;i++);
scanf("%d",arr[i]);
printf("enter the element to be search");
scanf("%d",&key);
for(i=0;i<n;i++)
if(key==arr[i])
{
found=1;
//break;
}
if(found==1)
printf("element is found");
else
printf("element is not found");
getch();
}