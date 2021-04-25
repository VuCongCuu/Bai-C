#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int arr[5];
		int i;
	printf("nhap 5 ky tu cho mang \n");
	for(i=0;i<5;i++)
	{
		
		printf("\nnumber [%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf( "ky tu [%d]=\t%d\n",i+1,arr[i]);
	}
	return 0;
}
