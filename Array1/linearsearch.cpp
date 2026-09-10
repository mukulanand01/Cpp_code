// Find the element x in the array . take array and x as input.
#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter the size of array:";
  cin>>n;
  int arr[n];
  for(int i=0;i<=n-1;i++){
  cin>>arr[i];
}
int x ;
cout<<"Enter the element you want to search:";
cin>>x;
// search
// check mark
bool flag = false; // false-> not present
for(int i=0;i<=n-1;i++) {
  if(arr[i]==x) flag = true;
}
if(flag==true) cout<<"elemnt found";
else cout<<"404 elemnt not found";
}