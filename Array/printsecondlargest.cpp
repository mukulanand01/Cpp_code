// Write a function to print second largest number in arry 
#include<iostream>
#include<climits>
using namespace std;
void secLargest(int *arr,int n){
      int max1 = INT_MIN;
      int max2 = INT_MIN;
      // Here 1st FInding First largest number
    for(int i=0;i<n;i++){
      if(max1 < arr[i]){
        max1 = arr[i];
      }
    }
      // Here printing second largest Number
    for(int i=0;i<n;i++){
      if(max1 != arr[i]&& max2<arr[i] ){
        max2 = arr[i];
      }
    }
    cout<<"Second Largest Number is = "<<max2;
   
}
int main(){
  int arr[7]={4,6,8,1,18,67,99};
  int n = sizeof(arr)/sizeof(int);
  secLargest(arr,n);

}