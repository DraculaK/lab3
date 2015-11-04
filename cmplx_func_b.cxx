#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

complex<double> mod(double phi){
  complex<double> ii= complex<double>(0,1);
  return tan(phi*(1.0+ii));
}


int main(){

  // Example how to declare a single complex variable:
  //complex<double> c;

  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 
  

complex<double> z[100];
double phi=0;
complex<double> ii= complex<double>(0,1);


for(int i=0; i<100;i++){
 z[i]= mod(phi);
 phi+=2*M_PI/100;
 cout << real(z[i]) << "\t" << imag(z[i]) << "\t" << abs(z[i]) << endl;  
}  

 return 0;
}


   
