#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,k,c=80;
clrscr();
printf("enter the value of n::");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
   for(j=1;j<=c/2-i;j++)
   {
    printf(" ");
    }
   {
   for(k=1;k<=2*i-1;k++)
   {
   printf("%d",j);
   }}
{
printf("\n");
}}
getch();
}