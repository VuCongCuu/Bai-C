#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i,max,min,total,avg;
	max,min,total=0,avg;
	
	printf("tinh max min total avg\n");
	
	for(i=0;i<5;i++)
	{
		printf("gia tri [%d]=",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("[%d]=%d\t",i+1,arr[i]);
	}
	
	
	max=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			
		}
	}
	
	printf("\nMAX=%d",max);
	
	min=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nMIN=%d",min);
	for(i=0;i<5;i++)
	{
	
	total+=arr[i];
	
	}
	printf("\nTOTAL=%d",total);
	printf("\nAVG=%d",total/i);
	return 0;
}
