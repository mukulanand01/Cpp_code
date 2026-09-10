// merge short 
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1, vector<int> & v2){
  int m = v1.size();
  int n = v2.size();
  vector<int> v(m+n);
  int i = 0;
  int j = 0;
  int k =0;
  while (i<=m-1 && j<=n-1){
    if (v1[i]>v2[j])
    {
      v[k]=v2[j];
      j++;
      k++;
    }
    else { // fir  v1[i]<v2[j]
      v[k]=v1[i];
      i++;
      k++;
    }
  }
  // for remaning elemnt
  if(i==m){
    while (j<n)
    {
    v[k]=v2[j];
    j++;
    k++;
    }

  }
  if (j==n)
  {
    while (j<m)
    {
      v[k]=v1[i];
      i++;
      k++;
    }
    
  }
  return v;
  
  
  
}

int main(){
  vector<int>v1;
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(6);
  v1.push_back(7);
  v1.push_back(8);
  for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }
  cout<<endl;


  vector<int>v2;
  v2.push_back(1);
  v2.push_back(2);
  v2.push_back(3);
  v2.push_back(9);
  v2.push_back(10);
  v2.push_back(11);
  v2.push_back(12);
  for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
  }
  cout<<endl;

  vector<int> v = merge(v1,v2);

  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}