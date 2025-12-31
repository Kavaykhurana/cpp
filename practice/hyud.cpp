#include<iostream>
using namespace std;
int main(){
    int i,n,a,k,j,nst,nsp;
    cout<<"n=";
    cin>>n;
    nst=1;
    nsp=n-1;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i>n-1) nsp++;
            else nsp--;
            
                for(j=1;j<=nst;j++){
                    cout<<"*";
                }
                if(i<=n-1) nst+=2;
                else nst-=2;
                 cout<<endl;
            }
            }
            