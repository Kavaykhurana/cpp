#include<iostream>
using namespace std;
int main(){
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // cout<<sizeof(arr);
    // cout<<endl;
    // cout<<&arr;
    // cout<<arr[0][0];
    // cout<<endl;
    // //arr[0][0]=4;
    // cout<<arr[0][1];
    for(int i=0;i<3;i++){//i is row
        for(int j=0;j<3;j++){//j is column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }
}