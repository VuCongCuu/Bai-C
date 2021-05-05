#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dientich( int a,int b, int c)
{
	int s,p;
	p=(a+b+c)/2;
	
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return s;
}

int main(int argc, char *argv[]) {
	
	int s,a,b,c,p;
	
	printf("\nnhap canh 1:");
	scanf("%d",&a);
	printf("\nnhap canh 2:");
	scanf("%d",&b);
	printf("\nnhap canh 3:");
	scanf("%d",&c);
	
	printf("\n dien thich tam giac= %d",dientich(a,b,c));
	
	
	return 0;
}
