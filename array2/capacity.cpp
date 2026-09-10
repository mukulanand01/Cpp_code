#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(7);
  v.push_back(8);
  v.push_back(78);
  v.push_back(77);
  v.push_back(7);
  v.push_back(85);
  v.push_back(96);
  v.push_back(84);
  v.push_back(70);
  v.push_back(80);
  v.push_back(89);
  v.push_back(88);
  v.push_back(98);
  v.push_back(48);
  v.push_back(38);
  v.push_back(99);
  v.push_back(7);
  v.push_back(8);
  v.push_back(78);
  v.push_back(77);
  v.push_back(7);
  v.push_back(85);
  v.push_back(96);
  v.push_back(84);
  v.push_back(70);
  v.push_back(80);
  v.push_back(89);
  v.push_back(88);
  v.push_back(98);
  v.push_back(48);
  v.push_back(38);
  v.push_back(99);
  v.push_back(88);
  v.push_back(98);
  v.push_back(48);
  v.push_back(38);
  v.push_back(99);
  cout<<"size is :"<<v.size()<<endl;
  cout<<"capacity is :"<<v.capacity()<<endl;
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  v.pop_back();
  cout<<"size is :"<<v.size()<<endl;
  cout<<"capacity is :"<<v.capacity()<<endl;    // POP BACK KRNE PE CAPACITY CHANGE NHI HOTA EK BAR JITNA HO JATA HAI UTNA HE RHETA HAI .


}