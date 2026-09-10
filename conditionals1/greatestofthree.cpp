#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter the first number:";
  cin>>a;
  cout<<"Enter the second number:";
  cin>>b;
  cout<<"Enter the third number:";
  cin>>c;
  if(a>b && a>c){
    cout<<a<<" largest number";
  }
  if(b>a && b>c){
    cout<<b<<" largest number";
  }
  if(c>a && c>b){
    cout<<c<<" largest number";
  }
}