#include<iostream>
using namespace std;
int main(){
  int cp,sp;
  cout<<"Enter the the vlaue cp:";
  cin>>cp;
  cout<<"Enter the the vlaue sp:";
  cin>>sp;
  if(cp<sp){
    cout<< "Seller got Profit="<<sp-cp;
  }
  if(cp>sp){
    cout<< "Seller got incurred loss="<<cp-sp;
  }
  if(cp==sp){
    cout<<"No Profit or loss="<<cp-sp;
  }

}