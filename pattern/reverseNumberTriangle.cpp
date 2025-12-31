#include<iostream>
using namespace std;
int main(){
    int i,n,a,j;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}