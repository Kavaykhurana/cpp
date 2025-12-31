#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,0,1,0,1,0,1,0,1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}