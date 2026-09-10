#include<iostream>
using namespace std;
int main(){
  int x , y , z ;
  cout<<"Enter first side of trinagle";
  cin>>x;
   cout<<"Enter second side of trinagle";
  cin>>y;
   cout<<"Enter third side of trinagle";
  cin>>z;
  if(x==y==z){
    cout<<"Equeletral Traingle";
  }
  else{
    if(x==y!=z || x==z!=y || z==y!=x){
      cout<<"isoceleous traingle";
    }
    else{
      cout<<"scalane triangle";
    }
    }
    
  }
