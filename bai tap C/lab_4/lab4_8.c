#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,d;
	printf("nhap so a:");
	scanf("%f",&a);
	printf("nhap so b:");
	scanf("%f",&b);
	printf("nhap so c:");
	scanf("%f",&c);
	printf("\nphuong trinh:\n %fx^2+%fx+%f=0",a,b,c);
	d=b*b-4*a*c;
	
	printf("\n\td=%f",d);

	if(d>0)
	printf("\nX1=%f\nX2=%f",(-b+sqrt(d))/2,(-b-sqrt(d))/2);
	else if(d==0)
	printf("\nX1=X2=%f",-b*2*a);
	else if (d<0)
	printf("\nphuong trinh vo nghiem");
	
	
	
	return 0;
}
