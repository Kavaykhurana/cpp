#include<iostream>
using namespace std;
int main (){
    int i,n,factorial;
    cout<<"n=";
    cin>>n;
    factorial=1;
    while(n>0){
        
        factorial*=n;
        n-=1;
    }
    cout<<factorial;

}