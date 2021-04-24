#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int arr[5];
	int i,max,min,total,avg,k,h;
	max,min,total=0;
	max=arr[0];
	min=arr[0];
	k=0;
	h=0;
	
	printf("tinh max min total avg\n");
	
	//input
	for(i=0;i<5;i++)
	{
		printf("gia tri [%d]=",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	//
	for (i=0;i<5;i++)
	{
//		total+=arr[i];
//		printf("[%d]=%d\t",i+1,arr[i]);
		if(arr[i]>max)
			{
			max=arr[i];	h++;}				
		if (arr[i]<min)
		{
		min=arr[i];k++;}
	}
	
	printf("\nMAX=%d",max);
	printf("\nMIN=%d",min);
	printf("\nTOTAL=%d",total);
	printf("\nAVG=%d",total/i);
	printf("\nh=%d",h);
	printf("\nk=%d",k);
	return 0;
}
