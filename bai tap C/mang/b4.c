#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sv,i;
	int mark[100];
	char ten[100];
	
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &sv);

	for(i=0;i<sv;i++){
		
		printf("Nhap so diem sinh vien thu %d: ", i+1);
		scanf("%d", &mark[i]);
	}
	for(i=0;i<sv;i++){
		if(mark[i]>=40){
			printf("Hoc sinh [%s] [%d]: Dat\n",ten, i+1);
		}
		if(mark[i]<40){
			printf("Hoc sinh [%d]: Truot\n", i+1);
		}
		if(mark[i]>=80){
			printf("Chuc mung hoc sinh [%d] nhan duoc hoc bong 100%%\n", i+1);
		}
		if(mark[i]>70 && mark[i]<=79){
			printf("Hoc sinh [%d] nhan hoc bong 80%%\n", i+1);
		}
	}
	printf("\nDanh sach sinh vien truot la: \n");
	for(i=0;i<sv;i++){
		if(mark[i]<40){
			printf("Hoc sinh thu %d truot\n", i+1);
		}
	}
	return 0;
}
