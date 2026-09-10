// Passing Array to Functions
#include<iostream>
using namespace std;
void display (int a[] , int size){
  for(int i=0;i<=size-1;i++){
    cout<<a[i]<<" ";

  }
  cout<<endl;
}
void change (int b [], int size){
  b[0]=100;
}
int main(){
  int arr[5]={1,2,3,4,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<size<<endl;
  // accessing the elemnts of array in another function
  // updation, pass by value / refrences ?
  display (arr,size);
  change (arr,size);
  display(arr,size);
}

