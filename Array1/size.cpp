// Size and length of operator(How can we use it to find length of array?)
#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,5,11,5,5,5,58,8,3,5,4,85,8,5,8,4,9};
  int size = sizeof(arr)/sizeof(arr[1]);
  cout<<size;
}