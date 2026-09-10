//Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter the size of row and column:";
  cin>>n;
  cout<<endl;
  int arr[n][n];
  // taking input
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  cout<<endl;
  // taking second input
  int brr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>brr[i][j];
    }
  }
  cout<<endl;
  // Adding matrix and save result in onne matrics
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j]+=brr[i][j];
    }
  }
// pring matrix
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}



}