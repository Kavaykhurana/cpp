#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class Node{//this is a tree node
    public:
    int val;
    Node* left;
    Node* right;

    Node(){};

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node* root){
    if(root==NULL) return 0;
    return (1 + size(root->left) + size(root->right));
}

int Max(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(Max(root->left),Max(root->right)));
}

int Min(Node* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(Min(root->left),Min(root->right)));
}

int product(Node* root){
    if(root==NULL) return 1;
    return root->val * product(root->left) * product(root->right);
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
int main(){
Node* a=new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(100);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

displayTree(a);
cout<<endl;

cout<<sum(a)<<endl;

cout<<size(a)<<endl;

cout<<Max(a)<<endl;

cout<<Min(a)<<endl;

cout<<product(a)<<endl;

cout<<levels(a)<<endl;
}