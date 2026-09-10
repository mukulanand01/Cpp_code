// write a program to print the transpose of a matrix entered by the user and stored it in a new matrix.

#include<iostream>
using namespace std;
int main(){
  // Size of Rows.
 int m;
 cout<<"Enter the Row of an array:";
 cin>>m;
 // Size of Coloumns.
 int n;
 cout<<"Enter the columns of an array:";
 cin>>n;
 int arr[m][n];
 // taking input
 for(int i=0;i<=m-1;i++){
  for(int j=0;j<=n-1;j++){
    cin>>arr[i][j];
  }
 }
 // giving output
 for(int i=0;i<=m-1;i++){
  for(int j=0;j<=n-1;j++){
    cout<<arr[i][j]<<" ";
  }
}
cout<<endl;
 // Transpose of matrix

  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
 }



}
