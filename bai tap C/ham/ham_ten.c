#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void greeting(char name[20],int a)
{

	printf("hello %s%d tuoi\t ",name,a);
}
int main(int argc, char *argv[]) {
	int i,tuoi;
	
	char myname[20];
	printf("nhap ten :");
	gets(myname);	
	printf("nhap tuoi:");
	scanf("%d",&tuoi);
	for(i=0;i<tuoi;i++)
	greeting(myname,tuoi);
	
	
	
	
	return 0;
}
