#include<iostream>
using namespace std;
int main(){
  float p,r,t,si; // principle,rate,time,simpleintrest
  cout<<"Enter the value of Principle :";
  cin>>p;
  cout<<"Enter the value of Rate :";
  cin>>r;
  cout<<"Enter the value of Time :";
  cin>>t;
  cout<<"Value of simple intrest is:";
  cout<<(p*r*t)/100;
  return 0;
}