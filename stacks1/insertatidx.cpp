#include<iostream>
#include<stack>
using namespace std;
void insert(int val,int idx,stack<int>&v){
 if(idx==0){
  v.push(val);
  return;
 }
 int temp=v.top();
 v.pop();
 insert(val,idx-1,v);
 v.push(temp);

}

void print(stack<int>&v){
     stack<int>temp=v;
     while(temp.size()>0){
      cout<<temp.top()<<" ";
      temp.pop();
     }
     cout<<endl;
}
int main(){
  stack<int>v;
  v.push(10);
  v.push(20);
  v.push(30);
  v.push(40);
  v.push(50);//insert after idx==2   10 20 x 30 40 50


  print(v);
  insert(12,2,v);
  print(v);


  

}