// #include <iostream>
// using namespace std;

// class CircularQueue {
// public:
//     int f, b, count;
//     int arr[5];

//     CircularQueue() {
//         f = 0;
//         b = 0;
//         count = 0;
//     }

//     void push(int val) {
//         if (count == 5) { // Queue is full
//             cout << "Queue is full!" << endl;
//             return;
//         }
//         arr[b] = val;
//         b = (b + 1) % 5; // Wrap around
//         count++;
//     }

//     void pop() {
//         if (count == 0) { // Queue is empty
//             cout << "Queue is empty!" << endl;
//             return;
//         }
//         f = (f + 1) % 5; // Move front forward
//         count--;
//     }

//     int back() {
//         if (count == 0) {
//             cout << "Queue is empty!" << endl;
//             return -1;
//         }
//         return arr[(b - 1 + 5) % 5]; // Get last inserted element
//     }

//     int front() {
//         if (count == 0) {
//             cout << "Queue is empty!" << endl;
//             return -1;
//         }
//         return arr[f];
//     }

//     int size() {
//         return count;
//     }

//     bool empty() {
//         return count == 0;
//     }

//     void display() {
//         if (count == 0) {
//             cout << "Queue is empty!" << endl;
//             return;
//         }
//         for (int i = 0; i < count; i++) {
//             cout << arr[(f + i) % 5] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     CircularQueue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60); // Queue is full
//     q.display();
//     q.pop();
//     q.display();
//     q.push(60); // Should work since we removed one element
//     q.display();
// }




#include <iostream>
#include <vector>
using namespace std;

class CircularQueue {
public:
    int f, b, count, capacity;
    vector<int> arr;

    CircularQueue(int size) {
        capacity = size;
        arr.resize(size);
        f = 0;
        b = 0;
        count = 0;
    }

    void push(int val) {
        if (count == capacity) { // Queue is full
            cout << "Queue is full!" << endl;
            return;
        }
        arr[b] = val;
        b = (b + 1) % capacity; // Wrap around
        count++;
    }

    void pop() {
        if (count == 0) { // Queue is empty
            cout << "Queue is empty!" << endl;
            return;
        }
        f = (f + 1) % capacity; // Move front forward
        count--;
    }

    int back() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[(b - 1 + capacity) % capacity]; // Get last inserted element
    }

    int front() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[f];
    }

    int size() {
        return count;
    }

    bool empty() {
        return count == 0;
    }

    void display() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << arr[(f + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5); // Dynamic size queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60); // Queue is full
    q.display();
    q.pop();
    q.display();
    q.push(60); // Should work since we removed one element
    q.display();
}
