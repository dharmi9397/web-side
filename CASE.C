#include <stdio.h>
#include <conio.h>
int main()
{
 char p;
 int x,y;
 clrscr();
  printf("enter the symbol(+,-,*,/)");
  scanf("%c",&p);
  printf("enter two number");
  scanf("%d%d",&x,&y);
  switch(p)
  {
  case'+':
   printf("%d+%d=%d\n",x,y,x+y);
   break;
  case'-':
   printf("%d-%d=%d\n",x,y,x-y);
   break;
  case'*':
   printf("%d*%d=%d\n",x,y,x*y);
   break;
  case'/':
   printf("%d/%d=%d\n",x,y,x/y);
   break;
  default:
   printf("output is worng");
   break;
  }
  getch();
}

