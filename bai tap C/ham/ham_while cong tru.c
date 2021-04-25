#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tong(int a, int b)

{
int t;
t=a+b;
return t ;
}
int hieu(int a ,int b) 
{
	int h;
	h=a-b;
	return h ;
}
int tich(int a, int b)
{
	int ti;
	ti=a*b;
	return ti;
}
int thuong(int a, int b)
{
	int th;
	th=a/b;
	return th;
}
int main(int argc, char *argv[]) {
		int a ,b ;
		char c;
		char d='y';
	
	while (d=='y')
	{
	printf("nhap A=");
	scanf("%d",&a);
	printf("nhap B=");
	scanf("%d",&b);
	
	printf("chon phep tinh:");
	fflush(stdin);
	scanf("%c",&c);
//	if(c=='+')
//	{
//	
//	int sum =tong(a,b);
//	printf("SUM=%d",sum);
//	}
//	if(c=='-')
//	{
//	
//	int hie= hieu(a,b);
//	
//	printf("\nHIEU=%d",hie);
//	}
//	if(c=='*')
//	{
//	
//	int t=tich(a,b);
//	
//	printf("\nTICH=%d",t);
//	}
//	if(c=='/')
//	{
//	
//	int th=thuong(a,b);
//
//	printf("\nTHUONG=%d",th);
//	}
	
	switch(c)
	{
	
	case '+':	
	
	printf("\nSUM=%d",tong(a,b));
	break;
	case '-':	
	printf("\nHIEU=%d",hieu(a,b));
	break;
	case '*':
	printf("\nTICH=%d",tich(a,b));
	break;
	case '/':
	printf("\nTHUONG=%d",thuong(a,b));
	break;
	}
	
	printf("\nThay doi:");
	fflush(stdin);
	scanf("%c",&d);
	}

	return 0;

}
