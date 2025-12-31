#include<iostream>
using namespace std;
int main(){
    int i,n,a,j,k;
    cout<<"n=";
    cin>>n;
     for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
       cout<<" ";

        }
        for(a=1;a<=n;a++){
            cout<<"*";
        }
        cout<<endl;
     }
         }