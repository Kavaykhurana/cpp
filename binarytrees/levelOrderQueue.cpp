#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BinaryTree {
public:
    void levelOrder(Node* root) {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            Node* l = temp->left;
            Node* r = temp->right;

            if (l != NULL)
                q.push(l);
            if (r != NULL)
                q.push(r);
        }
    }
};

int main() {
    // Example Tree:
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4  5  6  7

    Node* root = new Node(1);
    Node* n1 = new Node(2);
    Node* n2 = new Node(3);
    Node* n3 = new Node(4);
    Node* n4 = new Node(5);
    Node* n5 = new Node(6);
    Node* n6 = new Node(7);

    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;

    BinaryTree bt;
    cout << "Level Order Traversal: ";
    bt.levelOrder(root);

    return 0;
}
