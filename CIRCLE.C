#include <stdio.h>
#include <conio.h>

main()
{
 int side;
 const float pi= 3.14;
 int area;
 clrscr();
 printf("enter side of perimeter of circle is number=");
 scanf("%d",&side);
 area= 2*pi*side;
 printf("%d",area);
 getch();

}