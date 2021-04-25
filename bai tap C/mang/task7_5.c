#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[4][5];
	int h,c,tong;
	tong=0;
	
	for(c=0;c<5;c++)
	{
		for(h=0;h<5;h++)
		{	
			printf(" [%d] [%d]:",c+1,h+1);
			scanf("%d",&arr[c][h]);
			
		}
	}
	
	for(c=0;c<5;c++)
	{
		for(h=0;h<4;h++)
		{	tong+=arr[c][h];
			printf("\n[%d][%d]=%d:",h+1,c+1,arr[h][c]);
		
			printf("\t[%d]tong=%d\n",h+1,tong)	;
		}
	}
	return 0;
}
