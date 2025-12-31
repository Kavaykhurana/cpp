#include<iostream>
using namespace std;
int main(){
    int n,fact;
    cout<<"n=";
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial of "<<n<<" = "<< fact;
}