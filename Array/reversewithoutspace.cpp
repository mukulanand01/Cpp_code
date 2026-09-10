// Reverse an Array using Two Pointer Approch 
// And without using  extra sapce
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
    int start = 0;
    int end = n-1;
    while (start<end)
    {
      // Swapp
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp; 

      // One more method to swap 
      // swap (arr[start],arr[end]);
      start++;
      end--;
    }
    printarr(arr ,n);
    
}