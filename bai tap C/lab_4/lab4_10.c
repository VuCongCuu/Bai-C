#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m,mm,cm,dm;
	char donvi;
	printf("nhap so don vi m:");
	scanf("%f",&m);
	printf("\nnhap don vi(a_mm,b_cm,c_dm):");
	fflush(stdin);
	scanf("%c",&donvi);
	
	mm=m/1000;
	cm=m/100;
	dm=m/10;
	if(donvi=='a')
	printf("\nmm=%.3f",mm);
	else if (donvi=='b')
	printf("\ncm=%.2f",cm);
	else if (donvi='c')
	printf("\ndm=%.1f",dm);
	
	return 0;
}
