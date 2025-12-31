#include<iostream>
using namespace std;

class MinHeap {
public:
    int arr[50];
    int idx;

    MinHeap() {
        idx = 1; // heap starts from index 1
    }

    int top() {
        return arr[1];
    }

    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;

        // heapify up
        while (i > 1 && arr[i / 2] > arr[i]) {
            swap(arr[i / 2], arr[i]);
            i /= 2;
        }
    }

    void pop() {
        if (idx == 1) return; // empty
        arr[1] = arr[idx - 1];
        idx--;

        // heapify down
        int i = 1;
        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int smallest = i;

            if (left < idx && arr[left] < arr[smallest]) smallest = left;
            if (right < idx && arr[right] < arr[smallest]) smallest = right;

            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                i = smallest;
            } else break;
        }
    }

    int size() {
        return idx - 1;
    }

    bool empty() {
        return idx == 1;
    }
};

int main() {
    MinHeap* pq = new MinHeap();
    pq->push(10);
    pq->push(20);
    pq->push(5);
    pq->push(8);

    cout << "Top: " << pq->top() << endl;

    pq->pop();
    cout << "Top after pop: " << pq->top() << endl;

    delete pq;
    return 0;
}
