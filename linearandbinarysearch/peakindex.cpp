#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,7,9,12,8,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=1;
    int hi=n-2;
    int mid;

   while(lo<=hi){
    mid=(lo+hi)/2;
   lo!=0;
   hi!=n-1;
   if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
    cout<<mid;
    break;
   }

   if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
    hi=mid-1;
   }

   if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){
    lo=mid+1;
   } 
   }
}