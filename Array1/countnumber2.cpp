// Count the number of elemnts in the given array greater than a number x.
#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter the size of arry:";
  cin>>n;
  int arr[n];
  // input
for(int i=0;i<=n-1;i++){
  cin>>arr[i];
}
int x ;
cout<<"Enter the value of x:";
cin>>x;

int count = 0;
for(int i=0;i<=n-1;i++){
  if(arr[i]>x) count++;
}
cout<<count;
}