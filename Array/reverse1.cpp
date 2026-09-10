// Reverse an arry with extra sapce
#include<iostream>
using namespace std;
int printarr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;

}
int main(){
  int arr[5]={1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int);

  int newarr[n];
  for(int i=0;i<n;i++){    // ye 0 se ja rha hai 
    int j = n-i-1;         // or ye last se aa rha hai 
    newarr[i]=arr[j];      // yeha par new arry me reverse order se value ja rha hai
  }
   for(int i=0;i<n;i++){
    arr[i]=newarr[i];       // fir yeha par loop chala kr purne arry me new arry ko upadtekr denge
   }

   printarr(arr ,n);
}