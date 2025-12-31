#include<iostream>
using namespace std;
int main(){
    int a=14;//a is dividend
    int b=3;//b is divisor
    int r;//r is remainder
    int q=a/b;//a=(b*q)+r
       r=a-(b*q);// q is quotient
    cout<<r;
}