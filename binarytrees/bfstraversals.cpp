#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<vector>
using namespace std;
class Node{
    public:
    int val; 
    Node* right;
    Node* left;
    Node(int val){
     this->val=val;
     this->right=NULL;
     this->left=NULL;
    }
};

void display(Node* head){
    if(head==NULL) return;
    cout<<(head->val)<<" ";
    display(head->left);
    display(head->right);
}

int levels(Node* root){
if(root==NULL) return 0;
return 1 + max(levels(root->left),levels(root->right));
}

void nthLevelrev(Node* root, int curr, int level){
if(root==NULL) return; // base case
if(curr==level){
cout<<root->val<<" "; // root
return;  }

nthLevelrev(root->right, curr+1, level); // right
nthLevelrev(root->left, curr+1, level); // left
}

void nthLevel(Node* root, int curr, int level){
    if(root==NULL) return; // base case
    if(curr==level){
    cout<<root->val<<" "; // root
    return;  }
    
    nthLevel(root->left, curr+1, level); // left
    nthLevel(root->right, curr+1, level); // right
    }

void levelOrder(Node* root){
int n = levels(root);
for(int i=1;i<=n;i++){
nthLevel(root,1,i);
cout<<endl;
}
}

void levelOrderrev(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
    nthLevelrev(root,1,i);
    cout<<endl;
    }
    }

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    
    display(a);
    cout<<endl;
    
    nthLevel(a,1,3);
    cout<<endl;

    nthLevelrev(a,1,3);
    cout<<endl<<endl;
     
    levelOrder(a);
    cout<<endl;

    levelOrderrev(a);
    }