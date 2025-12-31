#include<iostream>
using namespace std;
int main(){
    int a,n,i,j,p;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
           
            cout<<a;
            a+=2;

        }
        cout<<endl;
    }
}