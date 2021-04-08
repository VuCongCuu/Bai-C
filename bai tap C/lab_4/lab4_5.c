#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 printf("===========================\n 1.CF \n 2.C\n 3.HDJ\n 4.Dream Weaver\n 5.RDBMS\n 6.Learn Java By Example\n===========================");
	int a;
	printf("\nChon (1-6):",a);
	scanf("%d",&a);
	if(a==1) 
	printf(" \nBan chon: CF");
	if(a==2)
	printf("\nBan chon: C");
	if(a==3)
	printf("\nBan chon: HDJ");
	if(a==4)
	printf("\nBan chon: Dream Weaver");
	if(a==5)
	printf("\nBan chon: RDBMS");
	if(a==6)
	printf("\nBan chon: Learn Java By Example");
	
	
	return 0;
}
