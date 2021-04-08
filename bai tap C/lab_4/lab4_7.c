#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,a;
	printf("num1:");
	scanf("%d",&num1);
	printf("\nnum2:");
	scanf("%d",&num2);
	if(num1%num2==0)
	printf("so thu 2 la uoc cua so thu nhat");
	else if(num2%num1==0)
	printf("so thu nhat la uc cua so thu 2");
	else if(num1%num2 != 0)
	printf("2 so khong phai la uoc cua nhau");
	return 0;
}
