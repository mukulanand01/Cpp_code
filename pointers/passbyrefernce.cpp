#include<iostream>
using namespace std;
void  swap(int* a , int* b){
int temp = *a;
*a = *b ;
*b = temp ;
return;
}

int main(){
  int x = 10 , y = 16 ;
  swap(&x,&y);
  cout<<x<<" "<<y;

}

// by using pointer
// void  swap(int* a , int* b){
//   int temp = *a;
//   *a = *b ;
//   *b = temp ;
//   return;
//   }
  
//   int main(){
//     int x = 10 , y = 16 ;
// int* a = &x;
// int* b = &y;
//     swap(&x,&y);
//     cout<<x<<" "<<y;
  
//   }

