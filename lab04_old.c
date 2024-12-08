//lab 04
#include <math.h>
#include <stdio.h>
#define  howmany 10000
	int lab_04_1(int);
	int lab_04_2(int);
	double lab_04_3(int);
	int main(){
	double sum1;
	int sum = lab_04_1(howmany);
	printf("Σ(1+2+...+%d)=%4d\n",howmany,sum);
	 sum = lab_04_2(howmany);
	printf("Σ(1+2+...+%d)=%4d\n",howmany,sum);
	 sum1 = lab_04_3(howmany);
	printf("Σ(1/1+1/2*2+...+1/(%d*%d))=%4f\n",howmany,howmany,sum1);
	return 0 ;}
	
	int lab_04_2(int k){
		int sum1 =0;
		printf("%d  %d\n", k,sum1);
		 while (k>0) {sum1 = sum1 + k;--k;
			         };
	return sum1;}
	int lab_04_1(int k){
		int sum1 =0;
		printf("%d  %d\n", k,sum1);
		 do {sum1 = sum1 + k;--k;
			}while (k > 0);
	return sum1;}
	
	double lab_04_3(int k){
		double sum1 =0;
		 do {double rt = (k *k);rt = 1.0/ rt;
		//	printf("%f  %f\n", sum1,rt);
			sum1 = sum1 + rt;--k;
			}while (k > 0);
			sum1 =sqrt (6 *  sum1);
	return sum1;
	}			
