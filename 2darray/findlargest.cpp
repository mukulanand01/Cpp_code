//Q4: Write a C++ program to find the largest element of a given 2D array of integers.

#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of Array:";
  cin>>n;
  int arr[n][n];
  // Enter your frist array
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

 int max = INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]>max){
            max = arr[i][j];
        }
     
    }
  }
  cout<<max;
 