#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter the first number:";
  cin>>a;
  cout<<"Enter the second number:";
  cin>>b;
  cout<<"Enter the third number:";
  cin>>c;
  if (a>b){
    if(a>c){
      cout<<"A is Gratest:";
    }
    else{ // c > a, a>b -> c>a>b
      cout<<"C is Gratest:";
    }
  }
  else{ // b > a
    if(b>c){
      cout<<"B is Gratest:";
    }
    else{ // c > b > a
      cout<<"C is Gratest:";
    }

  }
  
}