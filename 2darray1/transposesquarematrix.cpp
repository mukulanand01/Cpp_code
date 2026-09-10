// You are given a matrix 2d - array of size (n*n) change this matrix into its transpose
#include<iostream>
using namespace std;
int main(){
  // Size of Rows and columns.
 int m;
 cout<<"Enter the Row & columns of an array:";
 cin>>m;
 int arr[m][m];
 // taking input
 for(int i=0;i<=m-1;i++){
  for(int j=0;j<=m-1;j++){
    cin>>arr[i][j];
  }
 }
 cout<<endl;
 // print the output
 for(int i=0;i<=m-1;i++){
  for(int j=0;j<=m-1;j++){
    cout<<arr[i][j];
  }
  cout<<endl;
 }
 cout<<endl;
 
 // Changining transpose in same matrix
 for(int i=0;i<=m-1;i++){
  for(int j=i+1;j<=m-1;j++){
    int temp = arr[i][j];
    arr[i][j]= arr[j][i];
    arr[j][i]= temp;
  }
}
cout<<endl;
 // printing
 for(int i=0;i<=m-1;i++){
  for(int j=0;j<=m-1;j++){
    cout<<arr[i][j];
}
cout<<endl;
}
}