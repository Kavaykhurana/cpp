#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,2,2,2,1};
     int srr[4];
     int n=sizeof(arr)/sizeof(arr[0]);
     srr[0]=arr[0];

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     } 
     cout<<endl;

     for(int i=1;i<n;i++){
        srr[i]=arr[i]+srr[i-1];
     }

     for(int i=0;i<n;i++){
        cout<<srr[i]<<" ";
     }

     cout<<endl<<endl;

    for(int i=1;i<n;i++){
        if(srr[i]==srr[n-1]/2.0){
            cout<<"index is:"<<i<<endl<<endl<<"sum is:"<<srr[i];
        }
     }
     
}