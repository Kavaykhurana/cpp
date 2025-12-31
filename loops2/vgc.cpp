#include<iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"n=";
    cin>>n;
    for (i=2;i<=n;i++){
        if (n%i==0) cout<<"it is composite";
        else if (n%i!=0) cout<<"it is prime";
        else if (n=1) cout<<"prime";
        break;
    }
}