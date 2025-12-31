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
   int brr[n][m];// brr is the transpose of the matrix arr
    if(m==n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(i==j){
                brr[i][j]=arr[i][j];
                //cout<<brr[i][j]<<" ";
            }
            else {brr[i][j]=arr[j][i];
                //cout<<brr[i][j]<<" ";
                //cout<<arr[j][i]<<" ";
                }
            
            }
            //cout<<endl;
        }
    }
    else for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
            //cout<<brr[i][j]<<" ";
        }
        //cout<<endl;
    }
    cout<<endl;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;
    }
}