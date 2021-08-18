#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,fact=1;
cout<<"enter the number";
cin>>n;
for(i=1;i<=n;i++);
fact=fact*i;
cout<<"factorial of"<<n<<"is="<<fact;
getch();
}
