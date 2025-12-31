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


void preorder(Node* head){
    if(head==NULL) return;
    cout<<(head->val)<<" ";
    preorder(head->left);
    preorder(head->right);
}


void levelorderqueue(Node* root){ //BFS
queue<Node*>q;
q.push(root);
while(q.size()>0){
    Node* temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
}
}

Node* construct(int arr[], int n) {
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);

    int i = 1;
    int j = 2;

    while(q.size() > 0 && i < n) {
        Node* temp = q.front();
        q.pop();

        Node* l;
        Node* r;

        if (arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;

        if (j < n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if (l != NULL) q.push(l);
        if (r != NULL) q.push(r);

        i += 2;
        j += 2;
    }

    return root;
}
 boundary(Node* root){

}
int main(){  
//construct
int arr[]={1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, 9, 10, 11, 12, 13, 14,
15, 16, INT_MIN, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
int n=sizeof(arr)/sizeof(arr[0]);
Node* root=construct(arr,n);
//boundary traversal
boundary(root);
levelorderqueue(root);
} 