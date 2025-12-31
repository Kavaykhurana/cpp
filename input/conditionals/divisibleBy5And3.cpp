#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x=";
    cin>>x;
    if (x%5==0 && x%3==0) cout<<"x is divisible by 3 and 5"; //or x%15==0
    else cout<<"x is not divible by 3 and 5";
    }