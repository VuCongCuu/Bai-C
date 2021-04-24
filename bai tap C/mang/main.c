#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arri[5],arrj[5],arri2[5];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		printf("nhap so [%d] :",i+1);
		scanf("%d",&arri[i]);
	}
  for(i=0,j=4;i<5;i++,j--)
  {
  	arrj[j] = arri[i] ;
  }
	
 for(i=0,j=4;i<5;i++,j--){
 	printf("%d",arri[j]);
 	
 }
//int arr[5],arr2[5];
//int i;
//
//for(i=0;i<5;i++)
//{
//	printf("nhap[%d]:",i+1);
//	scanf("%d",&arr[i]);
//}
//for(i=4;i>=0;i--)
//{
//	printf("[%d]=%d",5-i,arr[i]);
////	arr[i]=arr2[4-i];
//}
// 
//	
	return 0;
}
