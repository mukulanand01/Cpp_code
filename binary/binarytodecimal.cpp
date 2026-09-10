 // binary to decimal
 #include<iostream>
using namespace std;
void binTodec(int binNum){
  int n = binNum;
  int DecNum = 0;
  int pow = 1; // 10^0   10^1   10^2   etc...

  while (n>0)
  {
    int lastdigit = n%10;
    DecNum += lastdigit*pow;
     n = n/10;
    pow = pow*2;
   
  }
  cout<<DecNum;
}
int main(){
  binTodec(101);
}