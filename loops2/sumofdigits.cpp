#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter number:";
  cin>>x;
  int lastdigit = 0;
  int sum = 0;
  while(x>0){
    lastdigit = x%10;
    sum += lastdigit;
    x/=10;
  }
  cout<<sum;

  }


