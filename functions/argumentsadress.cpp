#include<iostream>
using namespace std;
void fun (int x , int y){
 cout<<"Adresss of fun x"<<&x<<endl;
  cout<<"Adresss of fun y"<<&y<<endl;
}
int main(){
  int x = 5;
  int y = 8;
  cout<<"Adresss of main x"<<&x<<endl;
  cout<<"Adresss of main y"<<&y<<endl;
  fun(x,y);
}