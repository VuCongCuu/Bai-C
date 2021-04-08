#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2; 
	char a;
	printf("num1:");
	scanf("%f",&num1);
	printf("\nnum2:");
	scanf("%f",&num2);
	printf("\n\t   MENU\n=========================\n+\n-\n*\n/\n========================");
	printf("\nchon(+,-,*,/):");
	fflush(stdin);
	scanf("%c",&a);
	if(a=='+')
	printf("\n%.1f+%.1f=%.1f",num1,num2,num1+num2);
	else if(a=='-')
	printf("\n%.1f-%.1f=%.1f",num1,num2,num1-num2);
	else if(a=='*')
	printf("%.1f*%.1f=%.1f",num1,num2,num1*num2);
	else if(a=='/')
 	printf("\n%.1f/%.1f=%.1f",num1,num2,num1/num2);
	return 0;
}
