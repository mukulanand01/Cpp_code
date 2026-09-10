#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Ankit marks";
  cin>>a;
  cout<<"Mukul marks";
  cin>>b;
  cout<<"Rajlaxmi marks";
  cin>>c;
  if(a<b && a<c){
      cout<<"Ankit score lest marks";
  }
  else{
      if(b<a && b<c){
          cout<<"Mukul score lest marks";
      }
      else{
          cout<<"Mona score lest marks";
      }
  }
}