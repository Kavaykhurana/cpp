#include<iostream>
using namespace std;
int main(){
    int i,n,a,j;
    cout<<"n=";
    cin>>n;
    a=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            a+=1;
            cout<<a<<" ";

        }
        cout<<endl;
    }
}