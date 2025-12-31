// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int arr[]={0,1,2,3,4,5,6,7,9};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//  if(arr[i]!=arr[i+1]-1){  //i!=arr[i]
//     cout<<arr[i+1]-1;
//     break;
//  }
// }

// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={0,1,2,3,4,5,6,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
  int lo=0;
  int hi=n-1;
  int mid;
  int ans=-1;
 while(lo<=hi){
    int mid=(lo+hi)/2;
  if(arr[mid]==mid) lo=mid+1;
  else{
    ans=mid;
    hi=mid-1;

  }
 }
 cout<<ans;
      





}

