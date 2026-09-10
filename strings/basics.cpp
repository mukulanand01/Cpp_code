#include<iostream>
#include<string>
using namespace std;
int main(){
  char str[] = {'a','b','c','d','e','\0'};
  for(int i=0;str[i]!='\0';i++){
    cout<<str[i]<<" ";
  }

  // Another of Printing
  cout<<str<<endl;
  
  // Another way of printing
  char st[5] = "abcd";
  for(int i=0;i<5;i++){
    cout<<st[i]<<" ";
  }
  cout<<endl;
  cout<<st[3];
   cout<<st[4];
cout<<endl;

   // Using type casting 
  
   cout<<(int)(str[5]);


}