#include<iostream>
using namespace std;
int sum(int i ,int j ){ // i and j are paremeters
   int sum = i + j;
  return sum;
}
int main(){
 int s = sum(4 , 8); // 4 and 8 are argumnents that has value
 cout<<"sum "<<s<<endl;
 return 0;
}