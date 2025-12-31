//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a;
//     cout<<"n=";
//     cin>>n;
//     a=1;
//     for(i=1;i<=n;i++){
//         cout<<a<<endl;
//         a*=2;
        
//     }
// }

//while loop

#include<iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"n=";
    cin>>n;
    i=1;
    a=1;
    while(i<=n){
        cout<<a<<endl;
        a*=2;
        i++;
    }
}