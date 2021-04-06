#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int basic, daper;
	float bonper,loandet,salary;
	char name;
	
	printf("bassic:");
	scanf("%d",&basic);
	
	printf("\ndaper:");
	scanf("%d",&daper) ;
	
	printf("\nbonper:");
	scanf("%f",&bonper);
	
	printf("\nloandet:");
	scanf("%f",&loandet);
	
	printf("\nname:");
	scanf("%s",&name);
	
	salary= basic + basic* daper /100 + bonper* basic/100- loandet;
	
	printf("salary:%.1f",salary);
	
	return 0;
}
