#include<stdio.h>
#include<conio.h>
void main()
{
int mat [5][4];
int m,n,i,j;
clrscr();
printf(" enter the no. of row & col");
scanf("%d%d",&m,&n);
//printf(" enter the matrix element");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf(" enter an element ");
scanf("%d,",&mat[i][j]);
}
printf("the matrix is ");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
printf("%d,",mat[i][j]);
printf("\n");
getch();
}
