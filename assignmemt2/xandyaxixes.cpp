#include<iostream>
using namespace std;
int main(){
  int x,y;
  cout<<"Enter X-axis:";
  cin>>x;
  cout<<"Enter Y-axis:";
  cin>>y;
  if(y==0){
    cout<<"Given values lies on x axis";
  }
  else{
    if(x==0){
      cout<<"Given values lies on y axis";
    }
    else{
      if(x==0 && y==0){
        cout<<"Given values lies on origin";
      }
      else{
        cout<<"invalid ";
      }
    }
  }

}