//star diamond
#include<iostream>
using namespace std;
int main(){
    int i,n,a,j,k,nsp,nst;
    cout<<"n=";
    cin>>n;
    nst=1;
    nsp=n-1;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i>=n-1) nsp++;
        else nsp--;
        for(k=1;k<=nst;k++){
            cout<<"*";

        }
        if(i>=n-1) nst-=2;
        else nst+=2;
        cout<<endl;
    }
}

// //number spiral
// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,k,j;
//     cout<<"n=";
//     cin>>n;
//     for(i=1;i<=2*n-1;i++){
//         for(j=1;j<=2*n-1;j++){
//          a=i;
//          k=j;
//          if(a>n) a=2*n-i;
//          if(k>n) k=2*n-j;
//          int x=min(a,k);
//          cout<<n-x+1<<" ";
//         }
//         cout<<endl;
//     }
// }