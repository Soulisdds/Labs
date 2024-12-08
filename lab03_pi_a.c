#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
	double  pi_limit(void);

    int  main(){
   int temp;
    srand(time(NULL)); 
    temp = rand() % 20 + 1;


    
	//	int temp;
    //	srand(time(NULL));
	//	 temp = rand() % 20 +1;
		double  pi;
			pi =	 pi_limit( );
		printf("pi = %10.9f\n", pi);

   return 0;
	   }

	double pi_limit(void){
	double sum = 0 ; int n =1 ;
		do { sum = sum + 1.0/(n*n);
			n++;}
		while (1.0/(n*n) > 1e-15);
		printf("for 1e-15,  n = %d\n", n);
	double pi = sqrt(6*sum);
		return pi;
	}
