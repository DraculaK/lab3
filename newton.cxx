#include <iostream>
#include <complex>

using namespace std;

int main(){

  // Example how to declare a single complex variable:
  //complex<double> c;

  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 
  complex<double> z,zneu,z0;
  int N=200;
  int n;
  
  
  for(double re=-2; re<=2;re+=0.01){
    for(double im=-2;im<=2;im+=0.01){
   
      z=complex<double>(re,im);
      
      z0 = z;
   
  
  for(n=1;n<N;n++){
    zneu=z-(z*z*z - 1.0 )/(3.0*z*z);
    if (abs(zneu-z)<=1e-8) break; 
    z=zneu;
  }
  cout << real(z0) << "\t" << imag(z0) << "\t" << n << endl;
 }
}

  return 0;
}
