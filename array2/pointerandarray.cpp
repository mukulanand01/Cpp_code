#include<iostream>
using namespace std;
int main(){
 // First way to print array using pointer
  // int arr[]={1,3,4,6,7};
  // int*ptr=arr;
  // cout<<arr<<endl; // here i am printing the arrys 1st element address.
  // ptr[0]=8;
  // for(int i=0;i<=4;i++){
  //   cout<<ptr[i]<<" ";
  //}

// upadating values using pointer
int arr[] = {1,4,3,5,2};
int*ptr= arr; // giiven adress 
for(int i=0;i<=4;i++){
  cout<<*ptr<<" ";
  ptr++;
}
ptr = arr; // ptr is pointing to 1st element
*ptr=8; // ptr[0]=8
ptr++; // ptr is pointing to 2nd elemnt
*ptr =9;
ptr--; // ptr is pointing to 1st elemnt
cout<<endl;
for(int i=0;i<=4;i++){
  cout<<*ptr<<" ";
  ptr++;
}
ptr = arr; // ptr is pointing to 1st elemnt 
}
