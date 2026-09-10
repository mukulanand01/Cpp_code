// Write a program to store rool no na dmarks of 4 student side by side in a matrix
#include<iostream>
using namespace std;
int main(){
  int arr[2][4];
  // taking marks of 4 students;
  for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){
      cin>>arr[i][j];
    }
  }
  // giving output
 
  for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


// another way to do this 
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[4][2];
//   // taking marks of 4 students;
//   for(int i=0;i<=3;i++){
//     for(int j=0;j<=1;j++){
//       cin>>arr[i][j];
//     }
//   }
//   // giving output
 
//   for(int i=0;i<=3;i++){
//     for(int j=0;j<=1;j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }