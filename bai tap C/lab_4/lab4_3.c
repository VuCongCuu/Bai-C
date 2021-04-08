#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf ("num1=%d-num2=%d-num3=%d",a,b,c);
	
	if(a>b && a>c){
		printf(" \n num1 max =%d",a);
	}
	if(b>a && b>c){
		printf("\n num2 max=%d",b);
	}
	if(c>a && c>b){
		printf("\n num3 max=%d",c);
	}
	return 0;
}
