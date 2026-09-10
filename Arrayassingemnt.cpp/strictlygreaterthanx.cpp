// Count the number of arry strictly greater than x in the given arry.
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6]={3,5,16,8,9,22};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   // Value whic is greater than x
//   int x = 7;
//   int count = 0;
//   for(int i=0;i<=n-1;i++){
//     if (arr[i]>x)
//     {
//       count = count+1;
//     }
    
//   }
//   cout<<count;
// }

// Same Question with function


#include<iostream>
using namespace std;
void greaterthanx (int a[], int s){
  int x =7;
  int count = 0;
  for(int i=0;i<=s-1;i++){
       if (a[i]>x)
        {
          count = count+1;
        }

      }
      cout<<count;
}

int main(){
  int arr[6]={3,5,16,8,9,22};
  int n = sizeof(arr)/sizeof(arr[0]);
  greaterthanx(arr,n);
}



