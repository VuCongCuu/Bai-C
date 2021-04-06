#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s,m=3, n=5, r,t;
	float x=3.0,y;

	printf("t=%d\n",n/m);
	printf("r=%d\n",n%m);

	printf("y=%.2f\n",(float)n/m);
	printf("t=%.2f\n",(float)x*y-m/2);
	printf("x=%f\n",x*2.0);
	printf("s=%d\n",(m+n)/(n%m));
	r=n--;
	printf("r=%d\n",r);
	printf("n=%d\n",n);
	return 0;
}
