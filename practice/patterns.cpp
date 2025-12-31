// Print the given pattern(take input from user like rows and columns)
// *****
// *****
// *****

//for loop

#include<iostream>
using namespace std;
int main(){
     int row,column;
     cout<<"row:";
     cin>>row;
     cout<<"column:";
     cin>>column;
     for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
        cout<<"*";
         }
         cout<<endl; }

}


// #include<iostream>
// using namespace std;
// int main (){
//     int i,n,m,j;
//     cout<<"number of rows=";
//     cin>>n;
//     cout<<"number of columns=";
//     cin>>m;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=m;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }
