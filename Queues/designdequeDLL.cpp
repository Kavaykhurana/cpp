// #include<iostream>
// using namespace std;
// class Node {
//     public:
//         int val;
//         Node* next;
//         Node* prev;
        
//         Node(){};
//         Node(int val) {
//             this->val = val;
//             this->next = NULL;
//             this->prev = NULL;
//         }
//     };
    
//     class deque { // User-defined data structure
//     private:
//         Node* head;
//         Node* tail;
//         int size;
    
//     public:
//         deque() {
//             head = tail = NULL;
//             size = 0;
//         }
    
//         void pushback(int val) { // Fixed function name
//             Node* temp = new Node(val);
//             if (size == 0) {
//                 head = tail = temp;
//             } else {
//                 tail->next = temp;
//                 temp->prev=tail;
//                 tail = temp;
//             }
//             size++;
//         }
    
//     void pushfront(int val){
//         Node* temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             temp->next=head;
//             head->prev=temp;
//             head=temp;
//         }
//         size++;
//     }
    

//  void popfront(){
//     if(size==0){
//         cout<<"list is empty!";
//         return;
//     }
//     head=head->next;
//     if(head) head->prev=NULL;
//     if(head==NULL) tail=NULL;
//     size--;
//  }
    
 
//  void popback() {
//     if (size == 0) {
//         cout << "List is empty!\n";
//         return;
//     }

//     Node* temp = tail;  // Store current tail for deletion

//     if (size == 1) {
//         head = tail = NULL;  // Reset both pointers if only one node exists
//     } else {
//         tail = tail->prev;   // Move tail to the previous node
//         tail->next = NULL;   // Disconnect the last node
//     }

//     delete temp;  // Free memory
//     size--;
// }


//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << " ";
//                 temp = temp->next;
//             }
//             cout << endl; // Fixed endl placement
//         }
    
       
//     };
    
//     int main() {
//         deque ll; // No need for 'new'
       
//         ll.display();
        
//          //cout<<ll.size;
//     }
    

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class deque { // User-defined deque (Doubly Linked List)
private:
    Node* head;
    Node* tail;
    int size;

public:
    deque() {
        head = tail = NULL;
        size = 0;
    }

    void pushback(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void pushfront(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void popfront() {
        if (size == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head) head->prev = NULL;
        else tail = NULL; // If list becomes empty
        delete temp;
        size--;
    }

    void popback() {
        if (size == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = NULL;
        else head = NULL; // If list becomes empty
        delete temp;
        size--;
    }

    int getSize() {
        return size;
    }

    bool empty() {
        return size == 0;
    }

    void display() {
        if (size == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    deque dq;

    dq.pushback(10);
    dq.pushback(20);
    dq.pushfront(5);
    dq.display();  // Output: 5 10 20

    dq.popfront();
    dq.display();  // Output: 10 20

    dq.popback();
    dq.display();  // Output: 10

    cout << "Size: " << dq.getSize() << endl; // Output: Size: 1
    cout << "Empty: " << dq.empty() << endl;  // Output: Empty: 0

    dq.popfront();
    dq.display();  // Output: Deque is empty!

    return 0;
}
