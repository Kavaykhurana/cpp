#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==n/2+1 || j==n/2+1) cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
    }
    }