#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
	double  pi_limit(int temp);

    int  main(){
   int temp;
    srand(time(NULL)); 
    for (int i=0; i < 30 ; i++){
    temp = rand() % 20 + 1;
		double  pi;
			pi =	 pi_limit(temp );
		printf("	pi = %10.9f\n", pi);
								}
   return 0;
	   }

	double pi_limit( int temp){
	double sum = 0 ; int n =1 ;
		do { sum = sum + 1.0/(n*n);
			n++;}
		while (1.0/(n*n) > pow(10,-temp));
		printf("for 1e-%3d,  n = %5d     ",temp , n);
	double pi = sqrt(6*sum);
		return pi;
	}
