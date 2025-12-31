#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class stack{
    private:
    Node* top;

    public:
    stack(){top=NULL;}

    void push(int val){
        Node* newNode =new Node(val);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow\n";
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"stack is empty";
            return -1;
        }
        return top->data;
    }

    bool isempty(){
        return top==NULL;
    }

    void display(){
        Node* temp=top;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
stack s;
s.push(10);
s.push(20);
s.push(30);
s.display();

cout<<"top element"<<s.peek()<<endl;
s.pop();
s.display();


}