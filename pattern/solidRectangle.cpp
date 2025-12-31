#include<iostream>
using namespace std;
int main (){
    int i,n,m,j;
    cout<<"number of rows=";
    cin>>n;
    cout<<"number of columns=";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    
}


// #include<iostream>
// using namespace std;

// int main (){
//     int i, j, n, m;
//     cout << "Number of rows = ";
//     cin >> n;
//     cout << "Number of columns = ";
//     cin >> m;

//     for(i = 1; i <= n; i++){
//         for(j = 1; j <= m; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
