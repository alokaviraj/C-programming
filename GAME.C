
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,row,col,size;
clrscr();
printf("enter the number of rows in odd number\n");
scanf("%d",&size);
if(size%2!=0)
{
int a[10][20];
printf("magic square for %d rows is \n",size);
row=0;
col=size/2;
for(i=1;i<=size*size;i++)
{
a[row][col]=i;
row--;
col++;
if(i%size==0)
{
row=row+2;
col=col-1;
if(row==size)
row=row-size;

}
else
{
if(col==size)col=col-size;
if(row<0)
row=row+size;
}
}
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
printf("%3d",a[i][j]);
}
printf("\n");
}
}
else
{
printf("please enter odd number to get magic square\n");
}
getch();
}
