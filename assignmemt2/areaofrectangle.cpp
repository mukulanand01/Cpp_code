#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length :";cin>>l;
    cout<<"Enter bredth :";cin>>b;
    float area = l*b;
    int prem = 2*(l+b);
    if(area>prem){
        cout<<"Area of rectancle is greater than its premeter";
    }
    else{
        if(area==prem){
            cout<<"Area of rectangle and premeter is equal";
        }
        else{
         cout<<"premeter of rectancle is greater than its area";
        }
    }
}