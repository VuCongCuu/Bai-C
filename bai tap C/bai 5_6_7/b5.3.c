#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("cm:");
	scanf("%f",&a);

	printf("inch:  %.1f\n",a/2.54);
	printf("feet : %.1f",a/(12*2.54));
	return 0;
}
