#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num;
	
	printf("ky tu:");
	
	scanf("%c",&c);
	
	printf("\nky tu:");
	scanf ("%d",&num);
	
	if(c>='A'&& c<='Z'){
		printf(" ky tu %c la chu hoa!\n",c);
		
	}
	if(c>='a'&& c<='z'){
		printf("ky tu %c la chu thuong! ",c);
	}
	if(num >=0 && num <=9){
		printf("\nky tu %d la so!",num);
	}
	return 0;
}
