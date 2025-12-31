#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(){};
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeDuplicates(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node* a=head;
    Node* b=head->next;
    while(b!=NULL){
        while(b!=NULL){
            while(b!=NULL && b->val==a->val){
                b=b->next;
            }
            a->next=b;
            //for next round
            a=b;
            if(b!=NULL) b=b->next;
        }
        return head;
    }
}

int main() {
    Node* head = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(4);

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Original List: ";
    display(head);

    removeDuplicates(head);

    cout << "List after removing duplicates: ";
    display(head);

    return 0;
}