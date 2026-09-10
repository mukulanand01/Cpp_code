// Write a function to find last occerence
// #include<iostream>
// using namespace std;
// void lastoccerence(int *arr,int n){
//   int x = 8;
//   for(int i=n-1;i>=0;i--){
//     if(arr[i]==x){
//       cout<<i<<" ";
//       break;
//     }

//   }

// }
// int main(){
//   int arr[]={8,7,6,8,9,5,6,3};
//   int n = sizeof(arr)/sizeof(int);
//   lastoccerence(arr,n);
//}

// Print Through Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(8);
  v.push_back(7);
  v.push_back(6);
  v.push_back(8);
  v.push_back(9);
  v.push_back(5);
  v.push_back(6);
  v.push_back(3);
  int x = 8;
  int idx = 0;
  for(int i=0;i<v.size()-1;i++){
    if(v[i]==x){
      idx = i;
      
    }
  }
     cout<<idx;
    
  
}