// Matrix Multiplication 
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter the rows of 1st Matrix:";
  cin>>m;
  int n;
  cout<<"Enter the columns of 1st Matrix:";
  cin>>n;
  int o;
  cout<<"Enter the rows of 2nd Matrix:";
  cin>>o;
  int p;
  cout<<"Enter the columns of 2nd Matrix:";
  cin>>p;
  if (n==o)
  {
    // taking input of 1st matrix.
    int a[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
     // taking input of 2nd matrix.
     int b[o][p];
     for(int i=0;i<o;i++){
       for(int j=0;j<p;j++){
         cin>>b[i][j];
       }
     }
        // Printing resultant matrix.
        int c[m][p];
        for(int i=0;i<m;i++){
          for(int j=0;j<p;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
              c[i][j]+=a[i][k]*b[k][j];
            }
          }
        }
        cout<<endl;
        // printing third matrix.
        for(int i=0;i<m;i++){
          for(int j=0;j<p;j++){
            cout<<c[i][j]<<" ";
          }
          cout<<endl;
        }

  }
  // n!=0
  else cout<<"Matrix is not valid for multiplication:";
  
  
}