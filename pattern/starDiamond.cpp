// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,k,j;
//     cout<<"n=";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "No of lines: ";
//     cin >> n;
//     int nst = 1; // number of stars
//     int nsp = n - 1; // number of spaces
// for (int i = 1; i <= 2 * n - 1; i++) {
//         // spaces
//         for (int j = 1; j <= nsp; j++) {
//             cout << " ";
//         }
//         if (i <= n - 1) 
//             nsp--;
//         else 
//             nsp++;
//         // stars
//         for (int k = 1; k <= nst; k++) {
//             cout << "*";
//         }
//      if (i <= n - 1) 
//             nst += 2;
//         else 
//             nst -= 2;
//       cout << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "n = ";
//     cin >> n;

//     int nst = 1; // Number of stars to print
//     int nsp = n - 1; // Number of spaces to print

//     // Upper part of the diamond
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= nsp; j++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int k = 1; k <= nst; k++) {
//             cout << "*";
//         }

//         // Move to the next line
//         cout << endl;

//         // Decrease spaces, increase stars
//         nsp--;
//         nst += 2;
//     }


//     // Lower part of the diamond
//     nst = 2 * n - 3;
//     nsp = 1;

//     for (int i = 1; i <= n - 1; i++) {
//         // Print spaces
//         for (int j = 1; j <= nsp; j++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int k = 1; k <= nst; k++) {
//             cout << "*";
//         }

//         // Move to the next line
//         cout << endl;

//         // Increase spaces, decrease stars
//         nsp++;
//         nst -= 2;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n,nst,nsp;
    cout<<"n=";
    cin>>n;
    nsp=n-1;
    nst=1;
    for( int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i>n-1) nsp++;
        else nsp--;
        for(int k=1;k<=nst;k++){
            cout<<"*";

        }
        if(i>n-1) nst-=2;
        else nst+=2;
        cout<<endl;
    }
   }