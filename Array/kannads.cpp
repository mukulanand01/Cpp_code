// Print Sub arrays using kaannads algrothim
#include<iostream>
#include <climits>
using namespace std;
int printsubarray(int *arr ,int n){
    int maxsum = INT_MIN;
    int currentsum = 0;
    for(int i=0;i<n;i++){
        currentsum += arr[i];
        maxsum = max(currentsum , maxsum);
        if(currentsum<0){
            currentsum = 0;
        }
    }
        cout<<"Maximum Subarray: "<<maxsum;
    return 0;
}
int main(){
    int arr[6]={1,2,-4,-3,7,9};
    int n = sizeof(arr)/sizeof(int);
    printsubarray(arr,n);
}