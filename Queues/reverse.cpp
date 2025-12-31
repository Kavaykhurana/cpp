#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int>&v){
    queue<int>v1=v;
    while(v1.size()>0){
    cout<<v1.front()<<" ";
    v1.pop();
    }
}
int main(){
queue<int>v;
v.push(10);
v.push(20);
v.push(30);
v.push(40);// 10 20 30 40 50 -> 50 40 30 20 10
v.push(50);
print(v);
stack<int>v1;

while(v.size()>0){
       v1.push(v.front());
       v.pop();
}

while(v1.size()>0){
      v.push(v1.top());
      v1.pop();
}

cout<<endl;
print(v);



}