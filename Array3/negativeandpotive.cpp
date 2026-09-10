// Move all negative number at beginning and postive to the end with constant extra space;
#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
  int n = v.size();
  int i= 0;
  int j= n-1;
  while(i<j){
    if(v[i]<0) i++;   // agr v[i] chota hai zero se to i++ kr denge kyo ki hame neagtive   number starting me he rakhan hai;
    if(v[j]>=0) j--; // agr v[j] bara ho or eqaul to ho zero se to hm j-- krne kyo ki hmeepostive ko last me rakhna hai

    if (i>j)  // lopp bar bar chek hoga kyo while uppar wali condtion dekhti isliye brek krnge
    {
      break;
    }
    
    if(v[i]>=0 && v[j]<0){  // agr mera v[i] zero se bara hua or v[j] zero se chota hua to swap macha denge kyo ki hmee potive last or negative start me chiye.
   
    swap(v[i], v[j]);
            i++;
            j--;
  
    }
  }

}
int main(){
  vector<int>v;
  v.push_back(-7);
  v.push_back(-4);
  v.push_back(9);
  v.push_back(4);
  v.push_back(6);
  v.push_back(-1);
  v.push_back(-5);
  v.push_back(-3);
  
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