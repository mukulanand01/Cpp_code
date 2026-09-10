// write a function to print baniomial  coffecent of a number.
#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int coff(int n , int r){
  int  val1 = factorial(n);
   int  val2 = factorial(r);
   int  val3 = factorial(n-r);
    int result = val1/(val2*val3);
    return result;
}
int main() {
   cout<< coff(4 , 2);
    return 0;
}