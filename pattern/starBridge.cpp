#include<iostream>
using namespace std;
int main(){
   int i,n,a,k,l,j;
   cout<<"n=";
   cin>>n;
   for(int p=1;p<=2*n-1;p++){
    cout<<"*";
   }
   cout<<endl;
   for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<"*";
    }
    for(k=1;k<=2*i-1;k++){
        cout<<" ";
    }
    for(l=n-i;l>0;l--){
        cout<<"*";
    }
    cout<<endl;
   }
}

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "No of lines: ";
//     cin >> n;
//     // First part of the pattern (full stars, no spaces)
//     for (int i = 1; i <= 2 * n - 1; i++) {
//         cout << "*";
//     }
//     cout << endl;
//     // Second part of the pattern (stars and spaces)
//     int m = n - 1; // for the remaining lines
//     int nsp = 1; // number of spaces between stars
//      for (int i = 1; i <= m; i++) {
//         // print leading stars
//         for (int j = 1; j <= m + 1 - i; j++) {
//             cout << "*";
//         }
//        // print spaces
//         for (int k = 1; k <= nsp; k++) {
//             cout << " ";
//         }
//         // print trailing stars
//         for (int j = 1; j <= m + 1 - i; j++) {
//             cout << "*";
//         }
//         // move to the next line
//         cout << endl;
//         // increase spaces by 2
//         nsp += 2;
//     }
//     return 0;
// }