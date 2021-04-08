#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,tong;
	
	printf("Toan:");
	scanf("%d",&a);
	
	printf("\nLy:");
	scanf("%d",&b);
	
	printf("\nHoa:");
	scanf("%d",&c);
	
	tong=a+b+c;
	printf("\n=====================\nTong 3 mon=%d",tong);
	
	printf("\n TB3 Mon=%.1f\n=====================",(float)tong/3);
	
	return 0;
}
