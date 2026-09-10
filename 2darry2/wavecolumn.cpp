// wave printing column wise
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
  for(int j=0;j<n;j++){
    if (j%2==0)
    {
      for(int i=0;i<m;i++){
          cout<<a[i][j]<<" ";
        }
      
    }
    else for(int i=m-1;i>=0;i--){
      cout<<a[i][j]<<" ";
    }
    
  
  }
}