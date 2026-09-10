#include<iostream>
using namespace std;
void change2d(int arr[3][3]){
arr[0][1]= 100;
}
int main(){
  int arr[][3]={{0,7,8},{5,6,7},{1,2,3}};
  cout<<arr[0][1];
  cout<<endl;
  change2d(arr);
  cout<<arr[0][1];


}