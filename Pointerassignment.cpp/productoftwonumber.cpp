#include<iostream>
using namespace std;

int main(){
  int x , y ;
  cout<<"Enter First Number:";
  cin>>x;
  cout<<"Enter Second Number:";
  cin>>y;
  int* p1 = &x;
  int* p2 = &y;
  cout<<(*p1) * (*p2);
} 