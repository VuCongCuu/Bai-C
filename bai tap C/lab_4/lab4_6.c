#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("Canh 1:");
	scanf("%d",&a);
	printf("\nCanh 2:");
	scanf("%d",&b);
	printf("\nCanh 3:");
	scanf("%d",&c);
	
	
	
	
	
	
	 
	 
	 if(a*a+b*b==c*c)
		printf("\nTam giac la tam giac vuong\n Canh 3 la canh huyen !");
	
	else if (b*b+c*c==a*a)
	
	
		printf( "\n Tam giac la Tam giac vuong\n Canh 1 la cang huyen!");


  	else if (a*a+c*c==b*b)
	  
	
	  	printf("\n Tam giac la tam giac vuong\n Canh 2 la canh huyen!");
	else 
	 printf("3 canh khong tao len 1 tam giac vuong");
	  	


	return 0;
}
