#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
  int Number;
  int  total =0;

  printf("Enter number:\n");
  scanf("%d", &Number);

  while(Number != 0)
  {
     total += Number % 10;

     Number = Number / 10;
  }

  printf("Total: %d", total);

  return 0;
}

