#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter a number:";
  cin>>x;
  // if((x%5==0 || x%3==0) && (x%15!=0) ){
  //   cout<<"Number is divisible by 5 or 3 but not divisible by 15";
  // }
  // else{
  //   cout<<"Not matching the conditions";
  // }
   if(x%5==0 || x%3==0 ){
    if( x%15!=0){
    cout<<"Number is divisible by 5 or 3 but not divisible by 15";
    }
    else{
      cout<<"Not matching  conditions";
    }
  }
  else{
    cout<<"Not matching the conditions";
  }
}