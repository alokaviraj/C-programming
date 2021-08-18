


  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int l,b,area,perimeter;
  clrscr();
  printf("enter length:");
  scanf("%d",&l);
  printf("enter breadth :");
  scanf("%d",&b);
  area=l*b;
  perimeter=2*(l+b);
  printf("area=%d\n",area);
  printf("perimeter=%d\n",perimeter);
  getch();
  }