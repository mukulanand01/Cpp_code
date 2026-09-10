// LEET CODE QUESTION NO 75;
// short the arry of 0's , 1's , and 2's
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//   int n = v.size();
//   int i= 0;
//   int j= n-1;
//   int noz =0;
//   int noo =0;
//   int two =0;
//  for(int i=0;i<n;i++){
//   if (v[i]==0)
//   {
//     noz++;
//   }
//   else if (v[i]==1)
//   {
//     noo++;
//   }
//   else two++;
  
//  }
//  for(int i=0;i<n;i++){
//   if (noz>i)
//   {
//     v[i]=0;
//   }
//   else if ((noz+noo)>i)
//   {
//     v[i]=1;
//   }
//   else v[i]=2;
  
//  }

//   }
//   int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
    
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
//    sort01(v);
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//     }
//     cout<<endl;
  
//   }


  // Dutch flag algrothim ,,,using three pointer
  // one pass solution

#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
  int n = v.size();
  int lo= 0;
  int mid=0;
  int hi=n-1;
  // 1) mid ke bare me socho
  // 2) 0 to lo-1 -> 0 , hi+1 to end -> 2
  // lo to mid-1 ->1
  while (mid<=hi)
  {
    if(v[mid]==2){
      int temp = v[mid];
      v[mid] = v [hi];
      v[hi] = temp;
      hi--;

    }
     else if(v[mid]==0){
      int temp = v[mid];
      v[mid] = v [lo];
      v[lo] = temp;
      lo++;
      mid++;

    }
    else mid++; 
  }
  
 

  }
  int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   sort01(v);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
  
  }
  