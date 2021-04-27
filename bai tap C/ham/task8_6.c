#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float dientich(int a,int b)
{

float s;
s=a*b;
printf("dientich=%f",s);
return s;
}
float chuvi(int a,int b)
{
	float p;
	p=(a+b)*2;
	printf("chuvi=%2.f",p);
	return p;
}

int main(int argc, char *argv[]) {
	int a,b,c;
	char tiep_tuc;
	tiep_tuc='y';
	while (tiep_tuc=='y')
{
	printf("\nnhap chieu dai:");
	scanf("%d",&a);
	printf("\nnhap chieu rong:");
	scanf("%d",&b);
	printf("\chon(dientich_1,chuvi_2):");
	scanf("%d",&c);
	
	switch (c)
	{
		case 1:
			dientich(a,b);
			break;
		case 2:
			chuvi(a,b);
			break;
	}
	printf("\n ban co muon tiep tuc ko:");
	fflush(stdin);
	scanf("%c",&tiep_tuc);
}
	return 0;
}
