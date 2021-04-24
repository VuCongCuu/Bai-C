#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	float arr1[10];
	int i,j;
	
	for(i=0;i<5;i++)
	{
	
	printf("nhap du lieu [%d]:",i+1);
	scanf("%d",&arr[i]);
	}
	for(i=0,j=0;i<5,j<10;i++,j++)
	{
		arr1[j]=arr[i];
		printf("sao chep phan tu [%d]=[%f]\n",j+1,arr1[j]);
	}
	return 0;
}
