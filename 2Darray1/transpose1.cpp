#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

//     int brr[n][m];
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         brr[j][i]=arr[i][j];
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
//    }

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

}