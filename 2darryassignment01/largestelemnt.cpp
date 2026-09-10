//Q4: Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr [3][3]={1,4,6,8,4,55,7,4,6,};
  int max =INT_MIN;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]>max) max = arr[i][j];
    }
  }
  cout<<max;

}