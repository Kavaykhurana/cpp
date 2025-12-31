// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int val;
//         Node* next;
//         Node(int val){
//             this->val=val;
//             this->next=NULL;
//         }
//     };

//       class LinkedList{//user efined data structure
//     Node* head=NULL;
//     Node* tail=NULL;
//     int size=0;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insetatend(int val){
//         Node* temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;

//         }
//         size++;
//     }
//     void display(){
// Node* temp=head;
// while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;

// cout<<endl;
// }
//     }
          
// };
// int main(){
// LinkedList ll;//=new Linked  List();//{ }
// ll.insertatend(10);//{10->NULL}
// ll.display();
// ll.insertatend(20);//{10->20->NULL}
// ll.display();

// }

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
            tail = temp;
        }
        size++;
    }

void insertAtHead(int val){
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
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
        size++;
    }
}

void InsertAtTail(int val){
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}


int getAtIdx(int idx){
    if(idx<0 || idx>=size){
        cout<<"invalid index";
        return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        Node* temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}

void deleteAtHead(){
    if(size==0){
        cout<<"list is empty!";
        return;
        
    }
    else{
    head=head->next;
    size--;
}
}

void deleteAtTail(){
    if(size==0){
        cout<<"list is empty!";
        return;
    }
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}

void deleteAtIdx(int idx){
    if(size==0){
        cout<<"list is empty!";
        return;
    }
    else if(idx<0 || idx>=size){
        cout<<"invalid index";
        return;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node* temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}

Node* deletenode(Node* head,Node* target){
  if(head==target){
    head=head->next;
    return head; }

  Node* temp=head;
  while(temp->next!=target){
    temp=temp->next;}
    
  temp->next=temp->next->next;
  return head;}


  Node* Deletenode(Node* head,int targetval){
    if(head->val==targetval){
        head=head->next;
        return head; }

    Node* temp=head;
    while(temp->next->val!=targetval){
        temp=temp->next;}

    temp->next=temp->next->next;
    return head;
  }
  


void deleteNode(Node* head,Node* target){
   Node* temp=head;
   while(temp->next!=target){
    temp=temp->next;
   }
   temp->next=temp->next->next;}


    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl; // Fixed endl placement
    }

    void insertatend(Node* head,int val){
        Node* t=new Node(val);
        while(head->next!=NULL) head=head->next;
        head->next=t;
    }
};

int main() {
    LinkedList ll; // No need for 'new'
    ll.insertatend(10); // {10 -> NULL}
    ll.display();
    ll.insertatend(20); // {10 -> 20 -> NULL}
    ll.display();
    ll.insertatend(30);
    ll.insertatend(40);
    ll.display();
    ll.insertAtHead(102);
    ll.display();
    ll.InsertAtIndex(3,151111);
    ll.display();
    cout<<ll.getAtIdx(3)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    
     //cout<<ll.size;
}
