#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ten[20];
	int tuoi,chao;
	printf( "name:");
	scanf("%s",&ten);
	printf("\ntuoi:");
	scanf("%d",&tuoi);
	for(chao=0;chao<tuoi;chao++)
	printf("\nchao nhe",chao);
	return 0;
}
