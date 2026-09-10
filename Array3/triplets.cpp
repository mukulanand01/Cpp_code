//Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int x ;
  cout<<"Enter the value of x:";
  cin>>x;
  vector<int>v;
  int f;
  cout<<"Size of vector:";
  cin>>f;
  for(int i=0;i<f;i++){
    int g ;
    cin>>g;
    v.push_back(g);
  }

  int count = 0;
 for(int i=0;i<f;i++){
  for(int j=i+1;j<f;j++){
    for(int k=j+1;k<f;k++){
      if(v[i]+v[j]+v[k]==x) count++;
    }
  }
 }  
 cout<<count;
  
  
}