#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x=";
    cin>>x;
    if (x%3==0) if (x%5==0) cout<<"x is divisible by both 3 and 5";
   else cout<<"not divisible by 3 and 5";
} 