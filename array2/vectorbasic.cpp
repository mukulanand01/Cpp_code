#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v; // you need to mention the size 
  // inserting / input do not use []
  v.push_back(6);
  v.push_back(1);
  v.push_back(9);
  v.push_back(10);
  // if you want to upadate/ acess
  v[0] = 88;
  cout<<v[0]<<" ";
  cout<<v[1]<<" ";
  cout<<v[2]<<" ";
  cout<<v[3]<<" ";
  




// push back 
  // vector<int> v; // you need to mention the size 
  // // inserting / input do not use []
  // v.push_back(6);
  // cout<<v.size()<<endl;
  // v.push_back(1);
  // cout<<v.size()<<endl;
  // v.push_back(9);
  // cout<<v.size()<<endl;
  // v.push_back(10);
  // cout<<v.size()<<endl;

   // Capacity
  // vector<int> v; // you need to mention the size 
  // // inserting / input do not use []
  // v.push_back(6);
  // cout<<v.capacity()<<endl;
  // v.push_back(1);
  // cout<<v.capacity()<<endl;
  // v.push_back(9);
  // cout<<v.capacity()<<endl;
  // v.push_back(10);
  // cout<<v.capacity()<<endl;
  
}