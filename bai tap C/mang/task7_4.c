#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {char name[5][20];
	int i;
	
	for(i=0;i<5;i++)
	{
	printf("nhap ten hoc vien[%d]:",i+1);

	gets(name[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nhoc vien [%d]:%s",i+1,name[i]);
	}
	
	return 0;
}
