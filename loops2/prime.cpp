#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) cout<<"it is a composite number"<<endl;
        else cout<<"it is a prime number"<<endl;
        break;
    }
}