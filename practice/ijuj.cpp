#include<iostream>
using namespace std;
int main(){
    int i, n,a ,k,factorial;
    cout<<"n=";
    cin>>n;
    factorial=1;
    for(i=1;i<=n;i++){
        
        factorial*=i;
        
    }
    cout<<factorial;
}