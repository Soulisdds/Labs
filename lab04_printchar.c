//lab 04_1 pyramid.c
//#include <math.h>
#include <stdio.h>
//#define  howmany 10000

	int pyramid(int lines,int stars);

	int main(void){
	int lines,stars;
	printf("     How many lines\n");
	scanf("%d",&lines);
	printf("     How many stars\n");
	scanf("%d",&stars);

	 pyramid(lines,stars);
			
	return 0;}
	int pyramid(int lines, int stars){
     for (int i = 0;i< lines +1; i++){
	//	for (int j = 1 ; j < i +1  ; j++){
	//	for (int j = 1 ; j < 2*i  ; j++){
		for (int j = 0 ; j < stars * i ; j++){
			putchar(42);
		}   putchar(10);
		}
     return 0;}
