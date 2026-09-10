#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter Sereies:";
  cin>>x;
  int a = 1 , b = 1 , sum = 0 ;
  for(int i=1;i<=x-2;i++){
    sum = a+b;
    a = b;
    b = sum;
  }
cout<<b;
}