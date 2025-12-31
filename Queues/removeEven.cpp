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
    cout<<endl;
}
int main(){
queue<int>v;
v.push(10);
v.push(20);
v.push(30);
v.push(40);// 10 20 30 40 50 -> 50 40 30 20 10
v.push(50);
v.push(60);
print(v);
//queue<int>v1;
int x=v.size();
for(int i=0;i<=x-1;i++){
    if(i%2==0) v.pop();
    else if(i%2!=0){
        v.push(v.front());
        v.pop();
    } 
}
//v=v1; 
print(v);

}