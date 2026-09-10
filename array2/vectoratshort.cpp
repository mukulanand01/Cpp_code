#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  // USING AT FOR UPADATION OR PRINTING
  // vector<int>v;
  // v.push_back(9);
  // v.push_back(10);
  // v.push_back(6);
  // v.push_back(1);
  // v.at(2)= 70;
  // cout<<v.at(2);

  // USING SORT FOR ARRANGE ELEMNT IN ASSCENDING OR DECENDING ORDER.
  vector<int>v;
   v.push_back(9);
   v.push_back(10);
   v.push_back(6);
  v.push_back(1);
  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
  // sort 
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";

}
}