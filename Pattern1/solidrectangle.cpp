#include<iostream>
using namespace std;
int main(){
  int r ;
  cout<<"Enter row:";
  cin>>r;
  int c ;
  cout<<"Enter column:";
  cin>>c;
  for(int i=1;i<=r;i++){
    for(int i=1;i<=c;i++){
      cout<<"*";
    }
    cout<<endl;
  }
}
