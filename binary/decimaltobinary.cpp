 // decimal to binary
 #include<iostream>
using namespace std;
void decTobin(int decnum){
  int n = decnum;
  int binNum = 0;
  int pow = 1; // 10^0   10^1   10^2   etc...

  while (n>0)
  {
    int rem = n%2;
    binNum += rem*pow;
     n = n/2;
    pow = pow*10;
   
  }
  cout<<binNum;
}
int main(){
  decTobin(5);
}