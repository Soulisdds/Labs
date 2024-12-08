#include <stdio.h>
#include <math.h>
	int main(){
		printf("Lab    02\n\n");
		double num1,num2;
		int func;
		printf("give a numper\n");
		scanf("%lf",&num1);
		printf("give a numper\n");
		scanf("%lf",&num2);
		printf("%f  %f\n",num1,num2);
		printf("sum = %4.3f   diff = %4.3f\n",num1+num2, num1-num2);
		printf("for differend function enter \n");
		printf("      1  for  multiply\n");
		printf("      2  for  div\n");
		printf("      3  for  !\n");
		printf("      4  for  ypotinousa\n");

		scanf("%d",&func);
		if (func < 0 || func > 4){
		  printf("enter only numpers 1,2,3,4");
		  }
		  else{
	
		  switch (func){
	    case  1:
		printf("num_a x num_b= %.4lf\n",num1*num2);
	    break;
		case  2:
		printf("num_a / num_b= %.4lf\n",num1/num2);

		break;
		case  3:num2 = 1;
		printf("%lf   %lf\n",num1 , num2);int i = 1;
		for (i =1; i <num1; i++){
		num2 =  i* num2;
		printf("%lf   %lf\n",num2 , num1);//num2=1;
		}
		printf("   !num_a= %.4lf\n",num2);
		break;
		case  4:
		double  sum2; sum2 = sqrt(num1*num1 +num2*num2);
   printf("found ypotinousa \n  %3.4lf   %3.4lf\n",num1 , num2);
	printf("      ypotinousa  = %4.4lf\n",sum2);
	printf("      perimeter   = %4.4lf\n",sum2 +num1 +num2);
		break;
		  }}
	return 0;}	
