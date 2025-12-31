#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x=";
    cin>>x;
    // if (x%2==0) cout<<"even";
    // else cout<<"odd";
    x%2==0 ? cout<<"even" : cout<<"odd"; //nesting of ternery operates from right to left 
}