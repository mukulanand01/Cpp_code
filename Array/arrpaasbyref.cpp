#include<iostream>
using namespace std;
// int main(){
//   // arr name treat as pointer
//   int arr [4]={3,5,9,8};
  
//   cout<<*(arr)<<endl;
//   cout<<*(arr+1);
// }
void printarr(int nums[] ,int n){
 for(int i=0;i<n;i++){
  cout<<nums[i]<<" ";

 }
 cout<<endl;
}
int main(){
  int arr[5]={3,6,9,4,5};
  int n = sizeof(arr)/sizeof(int);

  printarr(arr,n);
  return 0;
}