#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter the number:";
  cin>>x;
  // // ap series like 1 3 5 7 9 11 13 15 17 by suing mathematical formula
  // for(int i=1 ; i<=2*x-1; i=i+2){
  //   cout<<i<<endl;
  // }
  int a = 1;
  for(int i=1; i<=x;i++){
    cout<<a<<endl;
    a = a +2;
  }
}