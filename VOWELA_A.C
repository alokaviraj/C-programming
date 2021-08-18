#include<stdio.h>
#include<conio.h>
void main()
{
char n;
char lowercase,uppercase;
clrscr();
printf("enter the alphabet ::");
scanf("%c",&n);
lowercase=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
uppercase=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
if(lowercase||uppercase)
printf("the input is vowel");
else
printf("the input is consontant");
getch();
}