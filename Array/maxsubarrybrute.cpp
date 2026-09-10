// Print Max Sub Array by Brute Force.
#include<iostream>
#include <climits>
using namespace std;
int printSubArray(int *arr ,int n){
    int maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currentsum = 0;
            for(int i=start;i<=end;i++){
                currentsum +=arr[i];
            }
            cout<<currentsum<<", ";
            maxsum = max(maxsum,currentsum); // Ye ek Formula hai comapre krne ke liye
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray: "<<maxsum;
    return 0;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    printSubArray(arr,n);
}

// Same maxsubaary by brute force by o(02)
// Write A Peogram To print sub arrays
// #include<iostream>
// #include <climits>
// using namespace std;
// int printSubArray(int *arr ,int n){
//     int maxsum = INT_MIN;
//     for(int start=0;start<n;start++){
//          int currentsum = 0;
//         for(int end=start;end<n;end++){

//                 currentsum +=arr[end];
//             maxsum = max(maxsum,currentsum); // Ye ek Formula hai comapre krne ke liye
//         }
       
//     }
//     cout<<"Maximum Subarray: "<<maxsum;
//     return 0;
// }
// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     printSubArray(arr,n);
// }