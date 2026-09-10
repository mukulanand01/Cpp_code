// // Write a propgram to print um sum
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   int x ;
//   cout<<"Enter the Target Element;";
//   cin>>x;
//   vector<int>v;
//   v.push_back(1);
//   v.push_back(3);
//   v.push_back(2);
//   v.push_back(4);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(1);
//   v.push_back(6);
//   int n = v.size();
//   for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//       if(v[i]+v[j]==x){
//         cout<<"( "<<i<<" , "<<j<<" )";
//         cout<<endl;
//       }
//     }
//   }
// }
// Write a propgram to print um sum through  Function
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int x = 7 ;
      int n = v.size();
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(v[i]+v[j]==x){
        cout<<"( "<<i<<" , "<<j<<" )";
        cout<<endl;
      }
    }
  }
  }

int main(){
  vector<int>v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(2);
  v.push_back(4);
  v.push_back(3);
  v.push_back(4);
  v.push_back(1);
  v.push_back(6);

  print(v);

}