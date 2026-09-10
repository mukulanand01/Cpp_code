//taking 2d arry as input from users.
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
  cout<<endl;
 }


}