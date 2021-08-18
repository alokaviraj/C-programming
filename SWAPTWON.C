
   //WAP TO SWAP TWO NUMBER

    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int a,b,t;
    clrscr();
    printf("\nenter the 1st number:");
    scanf("%d",&a);
    printf("enter the 2st number:");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("after swaping a=%d and b=%d",a,b);
    getch();
    }

