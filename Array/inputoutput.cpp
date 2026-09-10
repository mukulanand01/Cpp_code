#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the length of array:";
  cin>>n;
  int arr[n];
 
  // Taking input of an array
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  // Printing Output of the varaible
  for(int i=0;i<n;i++){
    cout<<arr[i]<<","  ;
  }
}