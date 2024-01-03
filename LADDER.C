#include <stdio.h>
#include <conio.h>
main()
{
 int a;
 clrscr();
 printf("enter any number :-");
 scanf("%d",&a);
  (a==0)?printf("netural"):(a<0)?printf("positive"):printf("negative");
  getch();
 }