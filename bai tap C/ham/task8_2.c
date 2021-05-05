#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int boi(int a)
{



	if(a%50==0)
	{
		return 1;
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
{	
	printf("nhap so[%d]:",i+1);
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{

if(boi(a[i])==1)
{
	printf("\n%d la boi cua 50",a[i]);
}
else
printf("\n%d khong la boi cua 50",a[i]);
}

	return 0;
}
