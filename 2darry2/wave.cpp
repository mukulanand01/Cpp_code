// Wave printing
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter the rows Matrix:";
  cin>>m;
  int n;
  cout<<"Enter the columns Matrix:";
  cin>>n;
     // taking input matrix.
     int a[m][n];
     for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
         cin>>a[i][j];
       }
     }
  for(int i=0;i<n;i++){
    if (i%2==0)
    {
      for(int j=0;j<m;j++){
          cout<<a[i][j]<<" ";
        }
      
    }
    else for(int j=m-1;j>=0;j--){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  
  }
}