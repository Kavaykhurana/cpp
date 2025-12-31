#include<iostream>
#include<string>
using namespace std;

int hcf(int a, int b) { // TC0(min(a,b))
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}

int gcd(int a, int b) {
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main(){
    int a = 0;
    int b = 10001;
    cout<<gcd(a,b);
}