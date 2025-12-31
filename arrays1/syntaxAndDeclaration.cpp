// #include<iostream>
// using namespace std;
// int main(){
//     int x[7];//0 1 2 3 4 5 6 
//     x[0]=1;
//     x[1]=2;
//     x[2]=3;
//     x[3]=4;
//     x[4]=5;
//     x[5]=6;
//     x[6]=7;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x[7]={1,2,3,5,2,9,1};
//     cout<<x[3];
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x[7];
// //input
// for(int i=0;i<=6;i++){
//         cin>>x[i];
//     }
//     //output
//     for(int i=0;i<=6;i++){
//         cout<<x[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x[7];
//input
for(int i=0;i<=6;i++){
        cin>>x[i];
    }
    //output
    for(int i=6;i>=0;i--){
        cout<<x[i]<<" ";
    }
}