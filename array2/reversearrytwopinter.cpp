// Write a program to reverse the arry without using any extra arry.
#include<iostream>
#include <algorithm>

#include<vector>
using namespace std;
void display( vector<int>&f){
  for(int i=0;i<=f.size()-1;i++){
    cout<<f[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int>v;
  v.push_back(9);
  v.push_back(8);
  v.push_back(7);
  v.push_back(6);
  v.push_back(5);
  display(v);
  // reverse using while loop

  int i=0;
  int j=v.size()-1;
  while (i<=j)
  // swap v[i] and v[j]
  {
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    
  }

  //reverse using for loop
  // for(int i=0,j=v.size()-1;i<=j;i++,j--){
  //   int temp =v[i];
  //   v[i]=v[j];
  //   v[j]=temp;
    
  // }
  //reverse(v.begin(),v.end());
  display(v);
  









}