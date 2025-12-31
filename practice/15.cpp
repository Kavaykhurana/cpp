//Print the factorial of a given number 'n'

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,factorial;
//     cout<<"n=";
//     cin>>n;
//     factorial=1;
//     for(i=1;n>0;i++){
//         factorial*=n;
//         n-=1;
//     }
//     cout<<factorial;
// }

//while loop

#include<iostream>
using namespace std;
int main(){
    int i,n,a,factorial;
    cout<<"n=";
    cin>>n;
    factorial=1;
    while(n>0){
        factorial*=n;
        n-=1;
    }
    cout<<factorial;
    
}