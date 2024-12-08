#include <stdio.h>
#include <math.h>
#define turns   100
// Δηλώσεις συναρτήσεων
    int  n  = turns;
double harmonic(int  n); // Υπολογισμός αρμονικής σειράς
double basel(int  n);    // Υπολογισμός αθροίσματος Basel
double eta_two(int n);    // Υπολογισμός αθροίσματος Basel
double Leibniz(int n);
 double Reimann(int n);
			  double Wallis(int n);




int main() {
    printf("\n   Lab 03 \n\n");

   // int n = 5; // Παράδειγμα με μικρό n για την αρμονική σειρά
    double sum = harmonic(n);
    printf("Harmonic(%d) = %f\n", n, sum);

  //  n = 100; // Παράδειγμα με n = 100 για το Basel
    double basl = basel(n);
    printf("Σ 1/1^2 + 1/2^2 + .basel.. + 1/%d^2 = %f\n", n, basl);
//	n = 100;
     basl = eta_two(n);
    printf("Σ 1/1^2 - 1/2^2 + .eta two + 1/%d^2 = %f\n", n, basl);

     //double  Leibniz( n) ;

	double	bas1 = Leibniz(n);
    printf("Σ 1/1 - 1/3 + .Leibniz + 1/%d = %f\n", n, basl);

		//Leibniz( n);
 //double
  bas1 = Reimann( n);
 		printf("Σ 1/1 + 1/2^4 Reimann 1/%d^4 = %f\n",n,bas1);  
// Wallis
 		  bas1 =  Wallis( n);
		printf("Π 2n*2n/((2n-1)(2n+1)) Wallis = %f\n",2 * bas1);  

    return 0;
}

// Αναδρομική συνάρτηση για την αρμονική σειρά
double harmonic(int n) {
    if (n == 1)
        return 1.0; // Βάση της αναδρομής
    return 1.0/ n + harmonic(n - 1); // Αναδρομή
}

// Αναδρομική συνάρτηση για το άθροισμα Basel
double basel(int n) {
    if (n == 1)
        return 1.0; // Βάση της αναδρομής (1 / 1^2 = 1)
    return 1.0 / (n * n) + basel(n - 1); // Αναδρομή
}

// Αναδρομική συνάρτηση για το άθροισμα 
double eta_two(int n) {
    if (n == 1)
        return 1.0; // Βάση της αναδρομής (1 / 1^2 = 1)
  //  return ( pow( -1,  n)) / (n * n) + eta_two(n - 1); // Αναδρομή
   return ( n % 2 == 0 ?-1.0:1.0) / (n * n) + eta_two(n - 1); // Αναδρομή
  	
	}
double Leibniz(int n) {
    if (n == 1)
        return 1.0; // Βάση της αναδρομής (1 / 1^2 = 1)
  //  return ( pow( -1,  n)) / (n * n) + eta_two(n - 1); // Αναδρομή
   return ( n % 2 == 0 ?-1.0:1.0) / (2*n + 1 ) + Leibniz(n - 1); // Αναδρομή
  	
	}
 double Reimann(int n){

 if  (n==1){
 	return 1;
 	       }
 	return  1.0/(pow( n,4)) + Reimann(n-1);
 	}

	  double Wallis(int n){
	 if (n== 1) return 4.0/3.0;
	  return ((4.0*n*n)/((2.0*n-1)*(2.0*n+1))) * Wallis(n-1);
	}
