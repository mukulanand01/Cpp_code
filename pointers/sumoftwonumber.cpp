// Write a program to calucltae sum of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
//   int x = 12;
//   int y = 12;
//   int* p1 = &x;
//   int* p2 = &y;
//   cout<<*p1 + * p2;

// by taking input from user 
int x , y ;
int *p1 = &x;
int *p2 = &y;
cout<<"Enter First Number:";
cin>>*p1;
cout<<"Enter second Number:";
cin>>*p2;
cout<<*p1 + *p2;
 }