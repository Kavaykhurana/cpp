#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the problem:";
    char op;
    cin>>a>>op>>b;
    switch(op){
        case '+':cout<<a+b;  break;
        case '-':cout<<a-b;  break;
        case '*':cout<<a*b;  break;
        case '/':cout<<a/b;  break;
        default: cout<<"NA";


    }
}