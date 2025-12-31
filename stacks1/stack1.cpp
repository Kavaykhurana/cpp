#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    stack<int>v1;
    
    while(v.size()>0){
       // int x=v.pop();
        v1.push(v.top());
        v.pop();
    }
    
    stack<int>v2;

    while(v1.size()>0){
        v2.push(v1.top());
        v1.pop();
    }

    while(v2.size()>0){
        v.push(v2.top());
        v2.pop();
    }

    stack<int>v3=v;

    while(v3.size()>0){
        cout<<v3.top()<<" ";
        v3.pop();
    }
     


}