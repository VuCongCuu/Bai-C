#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int revese (int arr[5])
{	
	int j;
	printf("\nnhap theo thu tu nguoc lai");
	for(j=4;j>=0;j--)
	{
		
		printf("\n[%d]=%d",5-j,arr[j]);
	}
}


int main(int argc, char *argv[]) {
	int i;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("nhap ky tu[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("[%d]=%d\t",i+1,a[i]);
	}
	revese(a);
	return 0;
}
