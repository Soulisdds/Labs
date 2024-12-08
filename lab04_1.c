//lab 04_1 printchar.c
//#include <math.h>
#include <stdio.h>
//#define  howmany 10000

	int print103(void);

	int main(void){
	 print103();
			
	return 0;}
	int print103(void){
     for (int i = 33;i< 105; i= (i +3)){
     printf("%c! (dec =  %3d hex =  %x) \n", i,i,i);}
     return 0;}
