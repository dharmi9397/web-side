#include <stdio.h>
#include <conio.h>
#define C clrscr
#define P printf

main()
{
  const float pi=3.14;
  int side;
  C();
  P("enter side of rectangle is number");
  scanf("%d",&side);
  P("area of rectangle whose side is %d=%d",side,side*side);
  getch();

}