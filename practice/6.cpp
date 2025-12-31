//Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

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
//         a+=2;
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
        a+=2;
        i++;
    }
}