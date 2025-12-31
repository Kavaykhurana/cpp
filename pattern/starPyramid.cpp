#include<iostream>
using namespace std;
int main(){
    int i,n,a,j,k,l;
    cout<<"n=";
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        cout<<" ";

        }
        
        for(a=1;a<=(2*i-1);a++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "No of lines : ";
//     cin >> n;
//     int nst = 1;  // number of stars
//     int nsp = n - 1;  // number of spaces
//     for (int i = 1; i <= n; i++) {
//         // spaces
//         for (int j = 1; j <= nsp; j++) {
//             cout << " ";
//         }
//         nsp--;  // reduce the number of spaces in each row
//         // stars
//         for (int k = 1; k <= nst; k++) {
//             cout << "*";
//         }
//         nst += 2;  // increase the number of stars by 2 in each row
//         cout << endl;  // move to the next line
//     }
//     return 0;
// }