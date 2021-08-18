#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
printf("a=%d\n b=%d\n c=%d\n",a,b,c);

if(a>b)
{
if(a>c)
   printf("a is greater among three\n");

 }
else
  {
  printf("  c is greater among three\n");
}
 if(b>c)
{
printf("b is greater among three\n");
}
else
{
 printf(" c is greater among three\n");
}
getch();
}