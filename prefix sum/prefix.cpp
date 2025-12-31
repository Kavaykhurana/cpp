#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,3,4,5};
     int srr[5];
     int n=sizeof(arr)/sizeof(arr[0]);
     srr[0]=arr[0];
     for(int i=1;i<n;i++){
        srr[i]=arr[i]+srr[i-1];
     }

     for(int i=0;i<n;i++){
        cout<<srr[i]<<" ";
     }
     
}

