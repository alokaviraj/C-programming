#include<iostream.h>
#include<conio.h>
char c='k'; //drawback hai ki char only 1 leta h
void main()
{
clrscr();
char c='s';
cout<<"local variable in main="<<c<<endl;
cout<<"global variable="<<::c;
getch();
}