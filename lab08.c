#include <stdio.h>
   	 int array1[6][10];

	void printarray(int list[]);

	int main(){
		for (int i=0 ; i< 6; i ++){
		 for (int j = 0 ; j< 10 ; j++){
		  array1[i][j] = i *(5-i) + j*(9- j);
			}
			}
	    printarray(  *array1);
	
			return 0;
	}

	void printarray(int  *){

	for (int i=0 ; i< 6; i ++){
		 for (int j = 0 ; j< 10 ; j++){
		 printf("%2d ",array1[i][j]);}
		 printf("\n");

		 }
		 printf("\n");
	int *ptr = *array1;
	for (int i=0 ; i< 10 ; i ++){
	 for (int j = 0 ; j< 6 ;  j++){
	 	int rt = i  +j * 10;
		 printf("%2d ",ptr[rt ]);}
		 printf("\n");
		}

		return ;
		}
