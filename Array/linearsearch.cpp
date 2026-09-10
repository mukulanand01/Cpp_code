// Write a function to linear search
#include<iostream>
using namespace std;
int linearsearch(int *arr , int b ,int c){
  for(int i=0;i<b;i++){
    if(arr[i]==c){
      return i;
    }
  }
   return -1;
}
int main(){
  int arr[10]={3,4,9,10,5,9,19,45,98,34};
  int n = sizeof(arr)/sizeof(int);
  int v = linearsearch(arr , n ,98);
  cout<<v;
}