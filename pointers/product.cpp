#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<*p1 * *p2;
}