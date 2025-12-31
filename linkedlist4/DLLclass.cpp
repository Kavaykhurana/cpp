#include<iostream>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node* prev;
        
        Node(){};
        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };
    
    class LinkedList { // User-defined data structure
    private:
        Node* head;
        Node* tail;
        int size;
    
    public:
        LinkedList() {
            head = tail = NULL;
            size = 0;
        }
    
        void insertatend(int val) { // Fixed function name
            Node* temp = new Node(val);
            if (size == 0) {
                head = tail = temp;
            } else {
                tail->next = temp;
                temp->prev=tail;
                tail = temp;
            }
            size++;
        }
    
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    
    void InsertAtIndex(int idx,int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) InsertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra
            t->next->prev=t;//extra
            size++;
        }
    }
    
    void InsertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
        void display() {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl; // Fixed endl placement
        }
    
       
    };
    
    int main() {
        LinkedList ll; // No need for 'new'
        ll.InsertAtTail(10); // {10 -> NULL}
        ll.InsertAtTail(20);
        ll.InsertAtTail(30);
        ll.display();
        ll.InsertAtTail(40);
        ll.display();
        
         //cout<<ll.size;
    }
    
