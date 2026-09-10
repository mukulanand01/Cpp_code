#include<iostream>
using namespace std;
int main(){
   int x ;
  cout<<"Enter prime number :";
  cin>>x;
  bool flag = true; // true means prime
  for(int i=2;i<=x-1;i++){
    if(x%i==0){ // i is a factor of n
         flag = false; // flase menas composite
         break;
    }
    // 1 2 3 4 5 6 10 12 15 30 60
  }
  if(x==1) cout<<"1 is neither prime nor composite";
  else if (flag==true) cout<<x<<"is prime";
  else cout<<x<<"is composite";
}