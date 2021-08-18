#include<iostream.h>
#include<conio.h>
struct employee
{
char id[5];
char name[20];
float salary;
};
void main()
{
clrscr();
employee e1;
cout<<"enter the employee id:";
cin>>e1.id;
cout<<"enter the full name of employee:";
cin>>e1.name;
cout<<"enter the salary:";
cin>>e1.salary;
cout<<"id="<<e1.id<<endl;
cout<<"name="<<e1.name<<endl;
cout<<"salary="<<e1.salary;
getch();
}