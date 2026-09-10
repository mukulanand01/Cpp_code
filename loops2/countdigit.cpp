#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter number:";
  cin>>x;
  int count = 0;
  int a = x;
  while(x>0){
      x/=10;
      count++;
  }
  if(a==0){
      cout<<"1";
  }
    else cout<<count;
}