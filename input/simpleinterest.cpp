#include<iostream>
using namespace std;
int main(){
    float principalamount,rate,time,simpleinterest;
    cout<<"principalamount=";
    cin>>principalamount;
    cout<<"rate=";
    cin>>rate;
    cout<<"time=";
    cin>>time;
    simpleinterest=(principalamount*rate*time)/100;
    cout<<"simpleinterest="<<simpleinterest;
}