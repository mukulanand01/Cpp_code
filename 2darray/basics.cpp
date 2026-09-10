// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[5][5];
  int row = 5;
  int col = 5;

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        arr[i][j] = 10;
    }
  }
  // Printing Matrix
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}