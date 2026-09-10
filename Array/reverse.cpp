// Write a Function to reverse ur arry
#include<iostream>
using namespace std;
void reverse(int *arr,int n){
  int start = 0;
  int end = n-1;
  // for(int i=0;i<n;i++)
  while(start<end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[9]={8,9,2,6,4,7,3,1,6};
  int n = sizeof(arr)/sizeof(int);
  reverse(arr,n);
}