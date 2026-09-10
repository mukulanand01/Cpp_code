
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
  void reversepart(int i, int j,vector<int>& v){
    while (i<=j){
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;

  }
  return;
}
int main(){
  vector<int>v;
  v.push_back(9);
  v.push_back(8);
  v.push_back(7);
  v.push_back(6);
  v.push_back(5);
  display(v);
  
 reversepart(0,2,v);
  display(v);
  

}