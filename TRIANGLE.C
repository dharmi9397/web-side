#include <stdio.h>
#include <conio.h>

main()
{

 int base,height;
 float area;
 clrscr();
 printf("base of triangle");
 scanf("%d",&base);
 printf("height of triangle");
 scanf("%d",&height);
 area= (base*height)*1/2;
 printf("%.2f",area);
 getch();

}
