#include<iostream.h>
#include<conio.h>
void alok()
{
static int c=0;
cout<<c<<endl;
c++;
}
void main()
{
clrscr();
cout<<"number is"<<endl;
for(int i=0;i<10;i++)
alok();
getch();
}