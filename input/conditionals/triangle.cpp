#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter the values of a,b,c ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b) cout<<"triangle can be formed";
    else cout<<"triangle cannot be formed";
}