#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	
	printf("a=\n");
	scanf("%d",&a);
	
	printf ("b=\n");
	scanf("%d",&b);
	
	printf("c=\n");
	scanf("%d",&c);
	
	printf("d=\n");
	scanf("%d",&d);
	
	if(a>b){ 
	printf("true\n");
	} else {
		printf("false\n");
	}
	if((a+b)/2>(c+d)/2) {
		printf("true\n");
		} else {
		printf("false\n");
	}
	
	if(a>0 & b<10){
		printf("true\n");
	} else {
		printf("false\n");
	
	if(a<0 || b<0 ){
		printf("true\n");
	} else {
		printf("false\n");
	}
