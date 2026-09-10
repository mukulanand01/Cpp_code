#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a character:";
  cin>>ch;
  
  if((ch>='A' && ch<='Z') || (ch>='a'&& ch<='z')){
    cout<<"The character is in alphabet";
  }
  else{
    if((ch>='0' && ch<='9')){
      cout<<"The chracter is in digit";
    }
    else{
      cout<<"The chracter is in special chracter";
    }
  }
}