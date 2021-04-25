#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin,mathe,a,b;
	char tiep_tuc;
	
	a=123;
	b=456;
	
	do {
		printf("mapin:");
		scanf("%d",&pin);
		
		printf("\nmathe:");
		scanf("%d",&mathe);
		
		if(pin==a && mathe==b)
			printf("\n===================\n1.Rut tien\n2.Chuyenkhoan\n3.So du");
		else
		{
			printf("Sai tat roi, ban co muon nhap lai ko (y_yes, n_no)");
			fflush(stdin);
			scanf("%c", &tiep_tuc);
		}
	} while(tiep_tuc == 'y');
		
	
	printf("Ket thuc chuong trinh, tam biet.");
	return 0;
}
