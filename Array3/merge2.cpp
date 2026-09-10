//  i = 1 3 5 7 9 11 12
// j = 2 4 6 8 10
//k =  ?  

#include <iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& A,vector<int>& B){
    int m = A.size();
    int n = B.size();
    vector<int>  C(m+n);
     int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            k++;
            i++;}
            else{ //(A[i]>B[j])
                C[k]=B[j];
                k++;
                j++;
            }
            
        }
        // for remenanig elemnt
        if(j==n){
    while (i<m)
    {
    C[k]=A[i];
    i++;
    k++;
    }

  }
    return C;
    
}
int main() {
    vector<int>A;
    A.push_back(1);
    A.push_back(3);
    A.push_back(5);
    A.push_back(7);
    A.push_back(9);
    A.push_back(11);
    A.push_back(12);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    vector<int>B;
    B.push_back(2);
    B.push_back(4);
    B.push_back(6);
    B.push_back(8);
    B.push_back(10);
    for(int i=0;i<B.size();i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
     vector<int>C = merge(A,B);
     for(int i=0;i<C.size();i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
    
}