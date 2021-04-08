#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf ("in ra man hinh thu tu tang dan\n");
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	printf("nhap vao so thu ba:");
	scanf("%d",&c);
	
	if(a>b && a>c && b>c)
	printf("\nket qua:%d,%d,%d",c,b,a);
	else if(a>b && a>c && c>b)
	printf("\nket qua:%d,%d,%d",b,c,a);
	else if(b>a && b>c && a>c)
	printf("\nket qua:%d,%d,%d",c,a,b);
	else if(b>a&&b>c&&c>a)
	printf("\nket qua:%d,%d,%d",a,c,b);
	else if(c>a&&c>b&&a>b)
	printf("\nket qua:%d,%d,%d",b,a,c);
	else if(c>a&&c>b&&b>a )
	printf("\nket qua:%d,%d,%d",a,b,c);
	
	
	
	
	
	return 0;
}
