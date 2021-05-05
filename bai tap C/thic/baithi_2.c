#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lowe(char *a)
{
	if(*a>=65 && *a<=90)
	{
		*a=*a +32;
	}
}

int main(int argc, char *argv[]) {
	char a[100], copy[100];
	int i,b;
	printf("nhap 1 chuoi :");
	gets(a);
	strcpy(copy,a);
	b= strlen (a);
	for( i=0; i<b;i++)
	{
		lowe(a+i);
	}
	printf("chuoi %s o dang chu thuong la %s", copy,a);
	return 0;
}
