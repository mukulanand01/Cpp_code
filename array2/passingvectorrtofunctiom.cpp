#include<iostream>
#include<vector>
using namespace std;
// // Vector are passes by vale . each time you pass new vector is created 
// // vector me pass by referce easily kr sakte hai bs & <- ye laga kr 
// void change(vector<int> anand){ // (vector<int>& anand)
//   anand[0]=1;
//   for(int i=0;i<anand.size();i++){
//     cout<<anand[i]<<" ";
// }
// cout<<endl;
// }
// int main(){
//   vector<int>mukul;
//   mukul.push_back(7);
//   mukul.push_back(97);
//   mukul.push_back(17);
//   mukul.push_back(70);
//   for(int i=0;i<mukul.size();i++){
//     cout<<mukul[i]<<" ";

//   }
//   cout<<endl;
//   change(mukul);
//   for(int i=0;i<mukul.size();i++){
//     cout<<mukul[i]<<" ";
//   }
// }
// vector me pass by referce easily kr sakte hai bs &<- ye laga kr 
void change(vector<int>&anand){ 
  anand[3]=1;
  
}

int main(){
  vector<int>mukul;
    mukul.push_back(7);
       mukul.push_back(97);
         mukul.push_back(17);
          mukul.push_back(70);
  for(int i=0;i<mukul.size();i++){
    cout<<mukul[i]<<" ";

  }
  cout<<endl;
  change(mukul);
  for(int i=0;i<mukul.size();i++){
    cout<<mukul[i]<<" ";
  }
}