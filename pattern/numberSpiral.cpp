// #include<iostream>
// using namespace std;
// int main(){
//     //1111
//     //1222
//     //1233
//     //1234
//     //min(a,n),max(a,n)
//     int i,n,a,k,j;
//     cout<<"n=";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout<<min(i,j);
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     //1111
//     //1222
//     //1233
//     //1234
//     //min(a,n),max(a,n)
//     int i,n,a,k,j;
//     cout<<"n=";
//     cin>>n;
//     for(i=1;i<=2*n-1;i++){
//         for(j=1;j<=2*n-1;j++){
//             a=i;
//           int  b=j;
//           if(a>n) a=2*n-i;
//           if(b>n) b=2*n-j; 
//             cout<<min(a,b)<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    //1111
    //1222
    //1233
    //1234
    //min(a,n),max(a,n)
    int i,n,a,k,j;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            a=i;
          int  b=j;
          if(a>n) a=2*n-i;
          if(b>n) b=2*n-j; 
           int x=min(a,b);
           cout<<n-x+1<<" ";
        }
        cout<<endl;
    }
}