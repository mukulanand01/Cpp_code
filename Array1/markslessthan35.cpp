// Ques. Given an array of marks of students, if the mark of any student is lees than 35 print its roll number. [roll number here refers  to the index of the array.]

#include<iostream>
using namespace std;
int main(){
//   int marks [7];
//   // input 31,98,74,10,58,22,76
//   for(int i=0;i<=6;i++){
//     cin>>marks[i];
//   }
//   // output
//   for(int i=0;i<=6;i++){
//     if(marks[i]<35) cout<<i<<" "; 
//   }


// another way to print 

int n ;
cout<<"Enter Number of students:";
cin>>n;
int marks[n];
cout<<"Enter the Marks:";
for(int i=0;i<=n-1;i++){
  cin>>marks[i];
}
for(int i=0;i<=n-1;i++){
  if(marks[i]<35)
  cout<<i<<" ";

}
}

