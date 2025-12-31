// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,k,j,nst,nsp;
//     cout<<"n=";
//     cin>>n;
//     nsp =n-1;
//     nst=1;
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

#include<iostream>
using namespace std;
int main(){
    int i,n,a,k,j,nsp,nst;
    cout<<"n=";
    cin>>n;
    nsp=n-1;
    nst=1;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            cout<<" ";
            
            if(i>(n/2)+1) nsp++;
            else nsp--;
        }
        for(k=1;k<=2*n-1;k++){
            for(int p=1;p<=2*n-1;p++){
                cout<<"*";
                if(k>(n/2)+1) nst-=2;
                else nst+=2;
            }
        }
        cout<<endl;
    }
}