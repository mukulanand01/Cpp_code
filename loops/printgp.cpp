#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter the number:";
  cin>>x;
  // 1 2 4 8 16 32 64....n
  int a = 1;
  for(int i=1; i<=x;i++){
    cout<<a<<endl;
    a = a * 2;
  }
}