#include<iostream>
using namespace std;
int main(){
    int arr[]={72, 23, 57, 92, 78, 53, 89, 69, 97, 47, 50, 35, 51, 71, 88, 75, 74, 80, 57, 99, 67, 24, 93, 72, 7, 4, 17, 32, 67, 46, 6, 28, 65, 93, 16, 25, 81, 79, 80, 16, 26, 76, 16, 35, 54, 34, 12, 16, 19, 49};
   int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int lo=0;
    int hi=n-1;
    int mid;
    int target =50;
    bool flag=false;

    for(int i=0;i<n;i++){

     mid=(lo+hi)/2;

     if(arr[mid]==target){
        flag=true;
     } 

     if(arr[mid]>target){
    hi=mid-1;
     }

     if(arr[mid]<target){
        lo=mid+1;
     }
    }
    if(flag==true){
        cout<<"target present";
    }
    else if(flag==false) cout<<"not present";
}