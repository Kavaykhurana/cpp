#include<iostream>
using namespace std;
int main(){
    int a,k,l,j,n,i;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(a=1;a<=(2*i-1);a++){
            cout<<a;
        }

        cout<<endl;
    }
}