// Previous Gratest elemnts
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n ;
  cout<<"Enter the size of vector:";
  cin>> n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
  }

  vector<int> b(v.size());
  int j = -1;
   for(int i=0;i<v.size();i++){
       b[i]=j;
   if(j<v[i]){
     
       j=v[i];
       
   }

  }
  for(int i=0;i<b.size();i++){
      cout<<b[i]<<" ";
  }
   

}