#include<iostream>
using namespace std;
int main(){
  int x ;
  cout<<"Enter composite number";
  cin>>x;
  for(int i=2;i<=x-1;i++){
    if(x%i==0){
      cout<<x<<" is compoiste number"<<endl;
      break;
    }
    else{
      cout<<x<<" is not compoiste number"<<endl;
      break;

    }
  }
}