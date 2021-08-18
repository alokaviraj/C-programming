int sum(int, int);
void main()
{
  int a,b;
  clrscr();
  printf("enter the numbers");
  scanf("%d %d",&a,&b);
  sum();
  printf("the sum is %d", sum);
  getch();
}
int sum(int x,int y)
{
       return(x+y);
}