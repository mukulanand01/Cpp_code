#include<iostream>
#include<string>
using namespace std;
int main(){
  // ham khud se denge to sapce ke sath de sakte hai
  string str = "Mukul Anand";
  cout<<str[7];
  cout<<endl;
// hm user se lenege to hme getline use krna hoga nhi to sirf frist word ke badh jaha sapce ayeaga waha se print nhi hoga 
 string s;
 getline(cin,s);
 cout<<s;
}