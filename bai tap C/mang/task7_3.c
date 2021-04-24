#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int i,max,min,k,h;

	k=0;
	h=0;
	for(i=0;i<5;i++)
	{
		printf("nhap du lieu[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
		max=arr[0];
	min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
	
		max=arr[i];
		}
		if(arr[i]<min)
		{
		min=arr[i];
		}
	}
	
	for(i=0;i<5;i++)
	{
		if(max==arr[i])k++;
		if(min==arr[i])h++;
	}
	
	printf("\nmax:%d",max);
	printf("\nmin:%d",min);
	printf("\nlan xuat hien max:%d",k);
	printf("\nlan xuat hien min :%d",h);
	return 0;
	
}
