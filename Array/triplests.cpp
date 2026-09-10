// Count the number of triplets whose sum is eqaul to given value x
#include<iostream>

using namespace std;
int main(){
  int arr[6]={1,2,3,2,5,1};
  int n = sizeof(arr)/sizeof(int);
  int t = 6;
  int z = 0 ;
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]==t){
            z++;
        }
      }
    }
  }
  cout<<z<<endl;
}
