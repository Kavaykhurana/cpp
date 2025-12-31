#include<iostream>
using namespace std;
int main(){
    int i,n,a,j,k;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(k=1;k<=i;k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    }


// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,j,k;
//     cout<<"n=";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//           if((i+j)>=n+1) cout<<"*";
//           else cout<<" ";  
//                }
//     cout<<endl;
//         }
// }