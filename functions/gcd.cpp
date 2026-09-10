//Write a function to complete the greatest common divisor of two given numbers.
#include<iostream>
using namespace std;
int gcd(int x , int y){
  int hcf = 1;
  for(int i=min(x,y);i>=1;i--){
    if(x%i==0 && x%i==0){
      hcf = i;
      break;
    }
  }
  return hcf;
}
int main(){
  int x ;
  cout<<"Enter First Number:";
  cin>>x;
  int y ;
  cout<<"Enter Second Number:";
  cin>>y;
  cout<<gcd(x,y);
} 