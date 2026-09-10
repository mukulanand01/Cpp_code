#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter first number:";
  cin>>a;
  cout<<"Enter second number:";
  cin>>b;
  cout<<"Enter third number:";
  cin>>c;
  if(a+b>c && b+c>a && c+a>b){
    cout<<a<<","<<b<<","<<c<<"can be the side of the traingle";
  }
  else{   
  }cout<<a<<","<<b<<","<<c<<"can not be the side of the traingle";
}