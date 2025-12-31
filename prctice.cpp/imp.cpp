//crr[0,1,2]=arr[0],brr[1,2]
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4};
    int brr[] = {5, 6, 7, 8, 9, 10};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(brr) / sizeof(brr[0]);
    int crr[n1 + n2];
    
    int index = 0; // Index for crr
    int j = 0;     // Index for brr

    // Iterate through arr
    for (int i = 0; i < n1; i++) {
        // Add one element from arr
        crr[index++] = arr[i];
        
        // Add two elements from brr
        if (j < n2) crr[index++] = brr[j++];
        if (j < n2) crr[index++] = brr[j++];
    }
    
    // In case brr has leftover elements, add them at the end
    while (j < n2) {
        crr[index++] = brr[j++];
    }

    // Print the resulting array
    for (int i = 0; i < index; i++) {
        cout << crr[i] << " ";
    }

    return 0;
}
