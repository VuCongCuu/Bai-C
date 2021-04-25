#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumarr( int arr[100],int size)
{
	int i, tong;
	tong=0;
	for(i=0;i<size;i++)
	tong += arr[i];
	return tong;
}

int main(int argc, char *argv[]) {
	int sumar[4]={1,2,3,4};
	int r= sumarr(sumar,4);
	printf("sum=%d",r);
	
	return 0;
}
