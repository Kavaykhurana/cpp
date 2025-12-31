// #include <iostream>
// #include <vector>
// using namespace std;

// // Partition using the first element as pivot
// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[low]; // First element as pivot
//     int i = low + 1;

//     for (int j = low + 1; j <= high; j++) {
//         if (arr[j] < pivot) {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//     }

//     swap(arr[low], arr[i - 1]);
//     return i - 1;
// }

// // QuickSort function
// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int p = partition(arr, low, high);
//         quickSort(arr, low, p - 1);
//         quickSort(arr, p + 1, high);
//     }
// }

// int main() {
//     vector<int> arr = {5, 1, 3, 0, 4, 9, 6};

//     cout << "Original array: ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     quickSort(arr, 0, arr.size() - 1);

//     cout << "Sorted array:   ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivotElement = arr[si];
    int count = 0;

    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotElement) count++;
    }

    int pivotIdx = count + si;
    swap(arr[si], arr[pivotIdx]);

    int i = si;
    int j = ei;

    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] <= pivotElement) {
            i++;
        } else if (arr[j] > pivotElement) {
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx;
}

void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;

    int p = partition(arr, si, ei);

    quickSort(arr, si, p - 1);
    quickSort(arr, p + 1, ei);
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}