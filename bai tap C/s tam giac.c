#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h,a,S;
	
	printf("Chieu cao\n",h);
	scanf("%d",&h);
	
	printf("Canh day\n");
	scanf("%d",&a);
	
	S=(h*a)/2;
	
	printf("Dien tich=%d\n",S);
	return 0;
}
