#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,sum,diff,product,div;
clrscr();
printf("enter the two number::");
scanf("%f%f",&a,&b);
sum=a+b;
diff=a-b;
product=a*b;
div=a/b;
printf("sum=%f\n",sum);
printf("diff=%f\n",diff);
printf("product=%f\n",product);
printf("div=%f\n",div);
getch();
}