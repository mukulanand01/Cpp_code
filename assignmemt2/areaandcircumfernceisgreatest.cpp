#include<iostream>
using namespace std;
int main(){
    int r;
    float pi = 3.1415;
    cout<<"Enter Radius:";
    cin>>r;
    float area = 3.1415*r*r;
    float circumference = 2*3.1415*r;
    if(area>circumference){
        cout<<"Area is gratest";
    }
    else{
        cout<<"circumference is greater";
    }
}