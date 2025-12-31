#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(){};
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void displayrec(Node* tail){
    if(tail==NULL) return;
    cout<<tail->val<<" ";
    displayrec(tail->prev);
}

void displayrecrev(Node* tail){
    if(tail==NULL) return;
    displayrecrev(tail->prev);
    cout<<tail->val<<" ";
}
int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
Node* e=new Node(50);

a->next=b;
b->next=c;
c->next=d;
d->next=e;

e->prev=d;
d->prev=c;
c->prev=b;
b->prev=a;

Node* temp=a;
// while(temp->next){
//    cout<<temp->val<<" ";
//     temp=temp->next;
// }
// cout<<endl;

// while(temp){
//     cout<<temp->val<<" ";
//     temp=temp->prev;
// }

displayrecrev(e);

}
