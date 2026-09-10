#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter Year:";
    cin>>y;
    
    
    if(y%4==0){
        cout<<"Given year is leap year";
    }
    else{
        cout<<"Given year is not leap year";
    }
}