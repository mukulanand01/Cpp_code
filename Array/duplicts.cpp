// Write a function to print Duplicats or not
// Write a Function to reverse ur arry
#include<iostream>
using namespace std;
void duplicts(int *arr,int n){
  bool flag = false;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if (arr[i]==arr[j])   
      {
        flag = true;
        cout<<"Duplicate is Number "<<arr[i];
        break;
      }
      
    }
  }
  if(flag==false){
    cout<<"There is no duplicates.";
  }

}
int main(){
  int arr[9]={8,9,2,6,4,7,3,1,6};
  int n = sizeof(arr)/sizeof(int);
  duplicts(arr,n);
}