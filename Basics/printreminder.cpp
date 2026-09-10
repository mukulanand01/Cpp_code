#include<iostream>
using namespace std;
int main(){
  int a = 10; // dividend
  int b = 3; // divisor
  int q = a/b; //quotient
  int r = a-(b*q);// reminder
  cout<<r;
}