#include<iostream>
using namespace std;
int main(){
  char ch ;
  cout<<"Enter the value of chracter:";
  cin>>ch;
int ascii = (int)ch;
if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
  if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u'){
    cout<<"The chracter is vowel:";
  }
  else{
    cout<<"The chracter is constant:";
  }
}
else{
  cout<<"The chracter is not alphabet";
}
}