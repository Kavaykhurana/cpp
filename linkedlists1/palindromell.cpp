#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) { this->val = val; this->next = NULL; }
};

Node* reverse(Node* head) {
    Node* prev = NULL;
    while (head) {
        Node* nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) { slow = slow->next; fast = fast->next->next; }
    Node* secondHalf = reverse(slow);  // Reverse second half
    while (secondHalf) { 
        if (head->val != secondHalf->val) return false;
        head = head->next;
        secondHalf = secondHalf->next;
    }
    return true;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    cout << (isPalindrome(head) ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
