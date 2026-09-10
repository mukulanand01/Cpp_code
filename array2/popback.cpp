#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(6);
  v.push_back(16);
  v.push_back(66);
  v.push_back(60);
  v.push_back(76);
  v.push_back(86);
  v.push_back(96);
  v.push_back(36);
  v.push_back(86);
  v.push_back(56);
  v.push_back(61);
  v.push_back(69);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  v.pop_back();
  v.pop_back();
  v.pop_back();
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }

}