// #include<iostream>
// using namespace std;
// int main(){
// int i,n,a,k,l,j;
// cout<<"n=";
// cin>>n;
// for(i=1;i<=2*n-1;i++){
//     cout<<i;
// }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "n = ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         // Print the left side numbers
//         for(int j = 1; j <= n - i + 1; j++) {
//             cout << j << " ";
//         }

//         // Print the spaces (gap in the middle)
//         for(int s = 1; s < 2 * i - 1; s++) {
//             cout << "  ";
//         }

//         // Print the right side numbers
//         for(int j = n - i + 1; j >= 1; j--) {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int m = 5;   // Number of rows (you can change this as needed)
//     int nsp = 0; // Initial number of spaces

//     for (int i = 1; i <= m; i++) {
//         int a = 1;

//         // First part: numbers
//         for (int j = 1; j <= m + 1 - i; j++) {
//             cout << a;
//             a++;
//         }

//         // Spaces
//         for (int k = 1; k <= nsp; k++) {
//             cout << " ";
//         }

//         // Second part: numbers
//         a = 1;  // Resetting 'a' for the second half
//         for (int j = 1; j <= m + 1 - i; j++) {
//             cout << a;
//             a++;
//         }

//         nsp += 2; // Increment spaces for the next row
//         cout << endl; // Move to the next line
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Adjust this for the size of the pattern
    int m = n - 1;  // Number of rows (derived from n)
    int nsp = 1;    // Initial number of spaces

    for (int i = 1; i <= m; i++) {
        int a = 1;

        // First part: numbers
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << a;
            a++;
        }

        // Spaces
        for (int k = 1; k <= nsp; k++) {
            cout << " ";
        }

        // Second part: numbers
        a = 1;  // Resetting 'a' for the second half
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << a;
            a++;
        }

        nsp += 2; // Increment spaces for the next row
        cout << endl; // Move to the next line
    }

    return 0;
}