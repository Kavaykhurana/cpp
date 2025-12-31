#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};  

class Queue {
public:
    Node* front;
    Node* back;

    Queue() {
        front = NULL;
        back = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (!front) { // If queue is empty
            front = back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
    }

    void pop() {
        if (!front) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        if (!front) back = NULL; // If queue becomes empty
    }

    int peek() {
        if (!front) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    bool empty() {
        return front == NULL;
    }

    void display() {
        if (!front) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.push(50);
    q.push(60);
    q.display();

    q.pop();
    q.display();

    return 0;
}
