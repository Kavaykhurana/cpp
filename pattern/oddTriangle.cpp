// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,j;
//     cout<<"n=";
//     cin>>n;
//     a=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=2*i-1;j+=2){
            
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int i,n,a,j;
    cout<<"n=";
    cin>>n;
    
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}