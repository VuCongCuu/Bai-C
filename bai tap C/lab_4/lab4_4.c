#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("ky tu:");
	scanf("%c",&c);
	
	
	if(c=='u'|| c=='e'|| c=='o' || c=='a'|| c=='i' || c=='U' || c=='E'|| c== 'O'|| c=='A' || c=='I') {
		printf("\n%c la nguyen am!",c);
		}
	if (c>='a' && c<='z'|| c>='A' && c<='Z'){
		printf("\n%c thuoc bang chu cai!",c);
	} 
	else {
	  printf("\n%c khong thuoc bang chu cai ",c);
	}
	return 0;
}
