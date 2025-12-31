#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* ptr=&x;
    int** p=&ptr;
    int*** p1=&p;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<***p1<<endl;
}