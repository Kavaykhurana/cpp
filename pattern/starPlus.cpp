#include<iostream>
using namespace std;
int main(){
    int i,n,j,mid;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        mid=n/2+1;
        for(j=1;j<=n;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}