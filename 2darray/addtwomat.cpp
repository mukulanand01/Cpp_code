// Write a program to add two matrices and save the result in one of the given matrices.
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 8
// 0 0 8
// 1 2 0
// Output 
// 5 7 11
// 4 5 14
// 8 10 9
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of Array:";
  cin>>n;
  int arr1[n][n];
  // Enter your frist array
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr1[i][j];
    }
  }
  int arr2[n][n];
   // Enter your second array
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr2[i][j];
    }
  }
  // Adding and printing 
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     arr1[i][j] = arr1[i][j]+arr2[i][j];
    }
  }
 
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
}




