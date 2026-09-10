// Find largest in array
#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter the length of an Array:";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max = arr[0];
  for(int j=0;j<n;j++){
    if(arr[j]>max){
      max= arr[j];
    }
  }
  cout<<"Largest Array:"<<max;
}