#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,h,V;
	
	
	printf("Ban kinh\n");
	scanf("%d",&r);
	printf("Chieu cao\n");
	scanf("%d",&h);
	V=r*r*h*3.14;
	printf("The tich=%d\n",V);
	return 0;
}
