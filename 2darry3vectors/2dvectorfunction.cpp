#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector< vector <int> > &v){
  v[1][1]= 600;
}
int main(){
  vector<int>v1; // 8 7 9
v1.push_back(8);
v1.push_back(7);
v1.push_back(9);

vector<int>v2; // 8 9 4 3 7 5
v2.push_back(8);
v2.push_back(9);
v2.push_back(4);
v2.push_back(3);
v2.push_back(7);
v2.push_back(5);

vector<int>v3; // 5 0 1 9
v3.push_back(5);
v3.push_back(0);
v3.push_back(1);
v3.push_back(9);

vector< vector <int> > v; //{ {8 7 9},{8 9 4 3 7 5},{5 0 1 3}}
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

cout<<v[1][1];
cout<<endl;
change2dvector(v);
cout<<v[1][1];

}