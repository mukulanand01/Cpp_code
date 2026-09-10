#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter row:";
  cin>>n;
  for(int i=1;i<=n;i++){
    // Printing space
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    // Printing star
    for(int k=1;k<=n;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}