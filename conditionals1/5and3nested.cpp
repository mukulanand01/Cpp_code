#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter a number:";
  cin>>x;
  if(x%5==0){
    if(x%3==0){
    cout<<"Number is divisible by 5 and 3";
    }
    else{
      cout<<"Number is divisible by 5 but not 3";
    }
  }
  else{
      cout<<"Number is not divisible by 5 and 3";
    }
}