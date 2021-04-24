#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char name[150];
//	int i,j;
//	
//	printf("Enter your name:");
//	gets(name);
//	for(i=0;i<8;i++)
//	{
//		printf("%c*",name[i]);
//	}
	char name[150];
	int i,length,k;
	k=0;
	printf("Enter your name:");
	gets(name);
	length=strlen(name);
	for(i=0;i<length;i++)
	{
		printf("%c*",name[i]);
	}
	for(i=0;i<length;i++)
	{
	
		if(name[i]=='e'|| name[i]=='u'|| name[i]=='o'|| name[i]=='a'|| name[i]=='i')
		{
		k++;
			printf("\n nguyen am la %c",name[i]);
	}

	}
	
	printf("\n so nguyen am la %d",k);
		printf("\n so nguyen am la %d",i-k);
	return 0;
}
