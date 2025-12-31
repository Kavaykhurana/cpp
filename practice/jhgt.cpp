#include<iostream>
using namespace std;
int main(){
    int i,n,k,j,a;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        for(a=i;a<=n-1;a++){
            for(int l=1;l<=a;l++){
                cout<<" ";

            }
            for(int p=i;p>0;p--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}