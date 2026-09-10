#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter number:";
  cin>>x;
  int lastdigit = 0;
  int r = 0;
  while(x>0){
      r=r*10;
      lastdigit=x%10;
      r+=lastdigit;
      x/=10;
  }
cout<<r;
  }

