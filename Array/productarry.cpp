// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int productofArray(int *arr,int a){
  int d = 1;
  for(int i=0;i<a;i++){
    d *=arr[i] ;
    
   }
    return d;
// cout<<"Product of All The elements of Array is = "<<d;
}
int main(){
  int arr[5]={7,8,9,6,3};
  int n = sizeof(arr)/sizeof(int);
  // productofArray(arr,n);
  cout<<"Product of All The elements of Array is = "<<productofArray(arr,n);
}