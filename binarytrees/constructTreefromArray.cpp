#include <iostream>
#include <queue>
#include <vector>
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
    Node* createTreeFromArray(vector<int>& arr) {
        if (arr.empty()) return NULL;

        Node* root = new Node(arr[0]);
        queue<Node*> q;
        q.push(root);

        int i = 1;
        while (i < arr.size()) {
            Node* current = q.front();
            q.pop();

            // Left child
            if (i < arr.size()) {
                Node* leftNode = new Node(arr[i++]);
                current->left = leftNode;
                q.push(leftNode);
            }

            // Right child
            if (i < arr.size()) {
                Node* rightNode = new Node(arr[i++]);
                current->right = rightNode;
                q.push(rightNode);
            }
        }

        return root;
    }

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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    BinaryTree bt;
    Node* root = bt.createTreeFromArray(arr);

    cout << "Level Order Traversal: ";
    bt.levelOrder(root);

    return 0;
}
