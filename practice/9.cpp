//WAP to check if a number is prime or not.

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a;
//     cout<<"n=";
//     cin>>n;
//     for(i=2;i<=n-1;i++){
//         if(n%i==0) cout<<"composite";
//         else cout<<"prime";
//         break;
//     }
// }


//while loop

#include<iostream>
using namespace std;
int main (){
    int i,n,a;
    cout<<"n=";
    cin>>n;
    i=2;
    while(i<=n-1){
        if(n%i==0) cout<<"composite";
        else cout<<"prime";
        break;
    }
}