#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("number:");
 scanf("%d",&a);
 b=a%2;
 printf("sodu=%d\n",b);
 if(b==0) {
 printf("the number is even");}
 else
{
  printf("the number is odd");}
	return 0;
}
