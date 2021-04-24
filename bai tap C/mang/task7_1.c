#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10];
	int i,j;

	for(i=0;i<10;i++)
	{
		printf("nhap du lieu cho [%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i+=2)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
