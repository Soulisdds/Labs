#include <stdio.h>
#include <math.h>

	int main(){
		printf("\n   Lab    03 \n\n");
//		int prosimo = -1 ;
		int i = 1,sum_i= 0 ;
		double sum2 ;
		sum2 = 0;
			while (i< 101){
		sum_i = sum_i + i;
		sum2 = sum2 + 1.0/(i*i) ;
		i++;
		}
	printf("Σ 1+2+................100 =  %d\n",sum_i);	
	printf("Σ 1/1+1/2*2+....1/100*100 =  %f\n",sum2);
	// lab03.3
		sum2 = sqrt (6 * sum2);
		printf("\tpi = %2.8lf\n",sum2); 
	for (i= 0; i < 100; i++){
		sum2 = sum_i +i;    }
		printf("  %d  i=%d\n", sum_i,i);


	return 0;}	



