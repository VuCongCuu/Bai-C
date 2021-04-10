#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,tb;
	printf("EGmart:");
	scanf("%d",&a);
	printf("\nEnglish:");
	scanf("%d",&b);
	
	tb=((a+b)/2);
	printf("\ntrung binh 2 mon = %d\n",tb);
	
	if(tb>=4)
		printf("\nBan da qua mon");

	if(tb>9)
		printf("\nBan duoc hoc bong 1000$");

	else if(tb>=8 && tb<=9)
		printf("\nBan duoc hoc bong 500$");
	
	 
	else 
		printf("Chuc mung ban da quay vao o mat tien!");
	
	return 0;
}
