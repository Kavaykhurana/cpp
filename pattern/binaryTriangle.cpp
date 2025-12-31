// #include<iostream>

// using namespace std;

// int main() {

//     int n;

//     cout << "No of rows: ";
//     cin >> n;

//     // Outer loop for number of rows
//     for (int i = 1; i <= n; i++) {
//         int a;
//         if (i % 2 != 0) {
//             a = 1; // odd row
//         } else {
//             a = 0; // even row
//         }

//         // Inner loop for printing numbers in a row
//         for (int j = 1; j <= i; j++) {
//             cout << a;
//             // Flip the value of a
//             a = (a == 1) ? 0 : 1;
//         }
//         cout << endl; // Move to the next line after each row
//     }

//     return 0;
// }


// #include<iostream>

// using namespace std;

// int main() {
//     int n;
    
//     cout << "Enter number of rows: ";
//     cin >> n;  // Input for number of rows
    
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             // Print (i + j) % 2, which alternates between 0 and 1
//             cout << (i + j) % 2;
//         }
//         cout << endl;  // New line after each row
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,a,n;
//   cout<<"n=";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//     if(i==j || (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))   cout<<"1";
//     else cout<<"0"; 

//     }
//     cout<<endl;
//   }
// }

#include<iostream>
using namespace std;
int main (){
  int i,n,a,j;
  cout<<"n=";
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      if(i==j || (i+j)%2==0) cout<<"1";
      else cout<<"0";
    }
    cout<<endl;
  }
}