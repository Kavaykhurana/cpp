#include<iostream>
#include<stack>
using namespace std;
void printrec(stack<int>&v1){
  //stack<int>v1=v;
  if(v1.size()==0) return ;
  cout<<v1.top()<<" ";
  int x=v1.top();
  v1.pop();
  printrec(v1);
  v1.push(x);
}

void printrecrev(stack<int>&v1){
    //stack<int>v1=v;
    if(v1.size()==0) return ;
    int x=v1.top();
    v1.pop();
    printrecrev(v1);
    v1.push(x);
    cout<<x<<" ";
  }

  void addAtend(int val,stack<int>&v){
    if (v.size()==0){
     v.push(val);
     return ;
    }
    int x=v.top();
    v.pop();
    addAtend(val,v);
    v.push(x);
  }

  void recreverse(stack<int>&v1){
    //stack<int>v1=v;
    if(v1.size()==0) return ;
    int x=v1.top();
    v1.pop();
    recreverse(v1);
    addAtend(x,v1);
    //v1.push(x);
  }

  void reverse(stack<int>&v){
    stack<int>temp;
    while(v.size()>0){
      temp.push(v.top());
      v.pop();
    }
    v=temp;
  }

int main(){
stack<int>v;
v.push(1);
v.push(2);
v.push(3);
v.push(4);
v.push(5);

printrec(v);

cout<<endl;

printrecrev(v);

cout<<endl;

// reverse(v);
// printrec(v);


addAtend(0,v);
printrec(v);

cout<<endl;
recreverse(v);

printrec(v);
cout<<endl;
reverse(v);
printrec(v);

}