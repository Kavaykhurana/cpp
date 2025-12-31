// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
//     public:
//     int f;
//     int b;
//     vector<int>arr;
//     queue(int val){
//         f=0;
//         b=0;
//         vector<int>v(val);
//         arr=v;
//     }
//     void push(int val){
//      if(b==arr.size()){
//         cout<<"queue is full!"<<endl;
//         return;
//      }
//      arr[b]=val;
//      b++;
//     }
//     void pop(){
//         if(f-b==0){
//             cout<<"queue is full!"<<endl;
//             return;
//         }
//         f++;
//     }
//     int back(){
//         if(f-b==0){
//             cout<<"queue is empty!"<<endl;
//             return -1;
//         }
//         return arr[b-1];
//     }
//     int size(){
//         return b-f;
//     }
//     bool empty(){
//         if(f-b==0) return true;
//         else return false;
//     }
//     void display(){
//         for(int i=f;i<b;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
// queue q;
// //push pop front back size empty
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);
// q.display();
// q.push(50);
// q.push(60);
// q.display();
// q.pop();
// q.display();
// }

#include <iostream>
#include <vector>
using namespace std;

class queue {
public:
    int f, b;
    vector<int> arr;

    queue(int val = 10) { // Default size 10 if not specified
        f = 0;
        b = 0;
        arr.resize(val);
    }

    void push(int val) {
        if (b == arr.size()) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[b++] = val;
    }

    void pop() {
        if (f == b) {
            cout << "Queue is empty!" << endl;
            return;
        }
        f++;
    }

    int back() {
        if (f == b) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[b - 1];
    }

    int size() {
        return b - f;
    }

    bool empty() {
        return f == b;
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    queue q(6); // Specify size

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
