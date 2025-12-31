// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"m=";
//     cin>>m;
//     cout<<"n=";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            cout<<arr[j][i]<<" ";
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};
for(int j=0;j<3;j++){
    if(j%2==0){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    else for(int i=2;i>=0;i--){
        cout<<arr[i][j]<<" ";
    }
}
}