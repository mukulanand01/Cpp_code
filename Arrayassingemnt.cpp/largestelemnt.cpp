// Wap to find lagrest three element in the array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int arr[8]={8,9 ,6 ,7,81,96,45,64};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   // Finding largest number,
//   int max = INT_MIN;
//   for(int i=0;i<=n-1;i++){
//     if (arr[i]>max)
//     {
//       max=arr[i];
//     }
    
//   }
//   cout<<" First largest element in this array is"<<" "<<max<<endl;

//   //second largset
//   int smax = INT_MIN;
//   for(int i=0;i<=n-1;i++){
//     if (arr[i]>smax && arr[i]!=max )
//     {
//       smax=arr[i];
//     }
    
//   }
//   cout<<" Second largest element in this array is"<<" "<<smax<<endl;
//  //Third largest
//  int tmax = INT_MIN;
//  for(int i=0;i<=n-1;i++){
//    if (arr[i]>tmax && arr[i]!=max && arr[i]!=smax)
//    {
//      tmax=arr[i];
//    }
   
//  }
//  cout<<" Third largest element in this array is"<<" "<<tmax<<endl;

// }


///Using single loop
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[8]={8,9 ,6 ,7,81,96,45,64};
  int n = sizeof(arr)/sizeof(arr[0]);
  int first=INT_MIN, second=INT_MIN, third=INT_MIN;
  for(int i=0;i<=n-1;i++){
    if (arr[i]>first)
    {
      third=second;
      second=first;
      first=arr[i];
    }
    else if (arr[i]>second && arr[i]!=first)
    {
     third=second;
     second=arr[i];
    }
    else if (arr[i]>third && arr[i]!=second && arr[i]!=third)
    {
      third=arr[i];
    }
    
  }
  cout << "First largest element is: " << first << endl;
  cout << "Second largest element is: " << second << endl;
  cout << "Third largest element is: " << third << endl;

  return 0;

}
