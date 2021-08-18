
  //write a program to display the given year is leapyear or not

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int leapyear;
  clrscr();
  printf("\n enter the year in digit::");
  scanf("%d",&leapyear);
 if(leapyear%400==0||leapyear%4==0&&leapyear%100!=0)//leapyear%400==0)
 {
 printf("this is a leapyear");
 }
 else
 {
 printf("this is not a leapyear");
 }
 getch();
 }
