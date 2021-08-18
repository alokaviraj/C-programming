#include<iostream.h>
#include<conio.h>
struct complex
{
private:
int a,b;
public:
void set_data(int x,int y)
{a=x; b=y;}
void show_data()
{
cout<<"\na="<<a<<"\nb="<<b;}
complex add(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return(temp);
}
};
void main()
{
clrscr();
complex c1,c2,c3;
c1.set_data(36,49);
c2.set_data(2,3);
c3=c1.add(c2);
c3.show_data();

getch();
}
