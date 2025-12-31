#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cout<<"n=";
    cin>>n;
    int arr[n];
    
     for( i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    a=0;
    for(int i=0;i<=n-1;i++){
    a+=arr[i];
    }
    cout<<a;
}