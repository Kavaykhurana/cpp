#include<iostream>
#include<stack>
using namespace std;
void printstack(stack<int>st){
    stack<int>temp=st;
       if(temp.size()==0) return ;
       cout<<temp.top()<<" ";
       temp.pop();
       printstack(temp);
      
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>strev=st;
    stack<int>v1;

    while(strev.size()>0){
        v1.push(strev.top());
        strev.pop();
    }
   
   
  
    printstack(v1);
    cout<<endl;
    st=v1;
    printstack(st);
    cout<<endl;
    cout<<st.top();
}