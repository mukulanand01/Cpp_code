// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
void secondlargest(int *arr,int n){
  int max1 = INT_MIN;
  int max2 = INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max1){
      max2 = max1;
      max1 = arr[i];
    }
   else if (max1 != arr[i]  && arr[i]>max2)
      max2 = arr[i];
  }

  
  cout<<"Second Largest Element is ="<<max2;
   
}
int main(){
  int arr[7]={7,9,6,44,85,99,1};
  int n = sizeof(arr)/sizeof(int);
  secondlargest(arr,n);
}