#include<iostream>
#include<stack>
using namespace std;
void printstack(stack<int>st){
       if(st.size()==0) return ;
       cout<<st.top()<<" ";
       st.pop();
       printstack(st);
      
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>temp=st;
    stack<int>t=st;
    stack<int>p=st;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    printstack(t);

    stack<int>strev;
    while(p.size()>0){
        strev.push(p.top());
        p.pop();
    }
    cout<<endl;
    stack<int>v1=strev;
    while(v1.size()>0){
        cout<<v1.top()<<" ";
        v1.pop();
    }
}