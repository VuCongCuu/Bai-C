#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ten[20], gioitinh;
	int tuoiban, tuoinguoita,t;
printf("==================================\n");
	printf("name:");
	scanf("%s",&ten);
	
	printf("\nGioitinh(m_male,f_female):");
	fflush(stdin);
	scanf("%c",&gioitinh);
	
	printf("\ntuoi nguoi ta:");
	scanf("%d",&tuoinguoita);
	
	 
	 tuoiban=25;
	 printf("\n==================================")
	 
	 
	 for(t=1;t<=tuoinguoita;t+=1);
{
	 
	 if(tuoinguoita > tuoiban && gioitinh=='m')
	 	printf("\n\tEm chao anh %s!",ten);
	 	
	else if (tuoinguoita>tuoiban&& gioitinh=='f')	
		 printf("\n\tEm chao chi %s!",ten);
		
	 
	else if ( tuoinguoita<tuoiban && gioitinh=='m')
		printf("\n\tAnh chao em trai %s!",ten);
		
	else if (tuoinguoita<tuoiban && gioitinh=='f')	
		printf("\n\tAnh chao em gai %s!",ten);
	else if (tuoinguoita>65)
		printf("chau chao bac %s",ten);	
}
		return 0;
}
