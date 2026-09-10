#include<iostream>
using namespace std;
int main(){
  int x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;

  int m1 = (x1-x2)/(y1-y2);
  int m2 = (x2-x3)/(y2-y3);

  if(m1==m2){
    cout<<"Given number in straight line";
  }
  else{
    cout<<"Given number in not straight line";
  }
}
