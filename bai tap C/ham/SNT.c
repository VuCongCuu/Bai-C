#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// so nguyen to

//check so nguyen to 



int prime(int a)
{
	int i;
	for(i=2; i<=sqrt(a); i++)
	{
	
		if(a%i==0)
		 return 0;
	}
	return 1;
}

int main () {
	int n,a;
	int snt[5];
	for(a=0;a<5;a++)
	{
	
	printf("nhap vao so [%d]:",a+1);
	scanf("%d", &snt[a]);
	}
	
	for(a=0;a<5;a++)
	{
	
	int isPrime = prime(snt[a]);
	
	if(isPrime== 1) 
	printf("\n%d la so nguyen to", snt[a]);
	else
	 printf("\n%d khong phai la so nguyen to", snt[a]);
	}
	
	return 0;
	
}
