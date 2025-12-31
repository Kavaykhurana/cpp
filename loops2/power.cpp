#include<iostream>
using namespace std;
int main(){
    int i,a,b,power;
    //power=a*a*a*a....b times
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    power=1;
    for(i=1;i<=b;i++){
        power*=a;
    }
    cout<<power;
}