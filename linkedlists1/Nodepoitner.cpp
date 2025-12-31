#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
Node(){};
    Node(int val){
        this->val=val;
        this->next=NULL;
    }


};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
      } 
int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
a->next=b;
b->next=c;
c->next=d;
//d->next=NULL;
// Node* temp=a;
// while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
  
//   }

display(a);
}



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // Define display function outside the class
// // void display(Node* head) {
// //     Node* temp = head;
// //     while (temp != NULL) {
// //         cout << temp->val << " ";
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }

// void display(Node* head) {

//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int size(Node* head) {
//     Node* temp = head;
//     int n=0;
//     while (temp != NULL) {
//         n++;
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // void displayrec(Node* head){
   
// // }

// int main() {
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     Node* e = new Node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;  

//     display(a); // Corrected function call


// }

  
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(Node* head) {
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int size(Node* head) {
//     int n = 0;
//     while (head != NULL) {
//         n++;
//         head = head->next;
//     }
//     return n;  // Corrected: Now returns the count
// }

// void displayrec(Node* head){
//     if(head==NULL) return ;
//     cout<<head->val<<" ";
//     displayrec(head->next);
// }

// void insertatend(Node* head,int val){
//     Node* t=new Node(val);
//     while(head->next!=NULL) head=head->next;
//     head->next=t;

// }

// int main() {
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     Node* e = new Node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;  

//    // display(a);  // Prints: 10 20 30 40 50
//    displayrec(a);
//     cout << " Size:" << size(a) << endl;  // Prints: Size: 5
  

//     insertatend(a,80);
//     displayrec(a);
    
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int val;
// Node* next;

// Node(){};

// Node(int val){
//     this->val=val;
//     this->next=NULL;
// }

// // void display(Node* a){
    
// //     Node* head=a;
// //     while(head!=NULL){
// //         cout<<head->val<<" ";
// //         head=head->next;
// //     }
// // }
// };

// void display(Node* a){
    
//     Node* head=a;
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }

// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// a->next=b;
// b->next=c;
// c->next=d;

// // Node* temp=a;
// // while(temp!=NULL){
// //     cout<<temp->val<<" ";
// //     temp=temp->next;
// // }
// display(a);
// }