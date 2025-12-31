#include<iostream>
using namespace std;
int main(){
    int i,n,lastdigit;
    cout<<"n=";
    cin>>n;
    lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        
        n/=10;
        cout<<lastdigit;
    }}
    