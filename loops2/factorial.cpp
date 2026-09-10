#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter Factorial number:";
  cin>>x;
  int product = 1;
  for(int i=1;i<=x;i++){
     product*=i;
  }
  cout<<product;
}