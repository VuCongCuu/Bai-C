#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int arr1[2][3], arr2[2][3], arr[2][3],arr4[2][3];
	int row,col;
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("nhap so cho bang 1[%d][%d]:",row,col);
			scanf("%d",&arr1[row][col]);
		}
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("[%d][%d]=%d\n",row,col,arr1[row][col]);
			
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("nhap so cho bang 2[%d][%d]:",row,col);
			scanf("%d",&arr2[row][col]);
		}
	}
		for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n[%d][%d]=%d:",row,col,arr2[row][col]);
			
		}
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			arr[row][col]=arr1[row][col] + arr2[row][col];
			
		printf("\nbang3[%d][%d]=%d:",row,col,arr[row][col]);
			
		}
	}
	printf("\nbang4\n");
	for(row=2;row>0;row--)
	{
		for(col=3;col>=0;col--)
		{
			arr4[row][col]=arr[row][col];
		printf("\n[%d][%d]=%d:",2-row,3-col,arr4[row][col]);
			
		}
	}
	
	
	return 0;
}
