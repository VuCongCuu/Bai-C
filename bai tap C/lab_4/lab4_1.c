#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	printf("nhap vao 1 ky tu:");
	scanf("%c",&a);
	printf("\n Ma ASCII tu '%c' la: %d ",a,a);
	return 0;
}
