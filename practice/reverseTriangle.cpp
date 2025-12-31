#include<iostream>
using namespace std;
int main (){
 int j,a,n,i;
 cout<<"n=";
 cin>>n;
// no of stars=n+1-i
 for(i=1;i<=n;i++){
    for(j=1;j<=n+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
}