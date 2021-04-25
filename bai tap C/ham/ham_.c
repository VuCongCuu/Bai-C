#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int add (int a,int b)
	{
		int c;
		c=a+b;
		return c;
	}
int main(int argc, char *argv[]) {
	int a ,b;
	printf("nhap A=");
	scanf("%d",&a);
	printf("nhap B=");
	scanf("%d",&b);
	int sum =add(a,b);
	printf("SUM=%d",sum);

	return 0;
}
