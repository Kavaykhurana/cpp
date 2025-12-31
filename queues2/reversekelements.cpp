// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void print(queue<int>&v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v.front()<<" ";
//         int x=v.front();
//         v.pop();
//         v.push(x);
//     }
//     cout<<endl;
// }

// int main(){
//     queue<int>v;
//     v.push(10);
//     v.push(20);
//     v.push(30);
//     v.push(40);
//     v.push(50);
//     v.push(60);
     
//     print(v);
//     stack<int>v1;
//     int k;
//     cout<<"k=";
//     cin>>k;
    
//     while(v.size()>k){
//         v1.push(v.front());
//         v.pop();
//     }

//     while(v1.size()>0){
//         v.push(v1.top());
//         v1.pop();
//         }

//     print(v);

// }


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Corrected print function (without modifying the queue)
void print(queue<int> v) {
    while (!v.empty()) {
        cout << v.front() << " ";
        v.pop();
    }
    cout << endl;
}

int main() {
    queue<int> v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v.push(60);

    print(v);
    
    stack<int> s;
    int k;
    cout << "k = ";
    cin >> k;

    // Step 1: Push first k elements into stack
    for (int i = 0; i < k; i++) {
        s.push(v.front());
        v.pop();
    }

    // Step 2: Push elements from stack back to queue (reversing them)
    while (!s.empty()) {
        v.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining elements (size - k) to the back
    int n = v.size();
    for (int i = 0; i < n - k; i++) {
        v.push(v.front());
        v.pop();
    }

    print(v); // Corrected print function usage
}
