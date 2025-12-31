// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,0,0,0,1,1,2,2,2,3,3,5,5,6,7,7,8,9,9,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=2;
//     for(int i=0;i<n;i++){
//         if(arr[i]==2){
//             cout<<"present at index="<<i;
//             break;
//         }
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,0,5,1,2,0,9,3,7,0,3,1,6,2,0,9,9,7,8,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//    int x=5;

//     int  lo=0;
//     int hi=n-1;
//     int mid;

//     for(int i=0;i<n;i++){
//         mid=(lo+hi)/2;
//         if(arr[mid]==x && arr[mid-1]!=x){
//         cout<<mid;
//         break;
//         }

//         if(arr[mid]<x){
//             lo=mid+1;
//         }

//         if(arr[mid]>x){
//             hi=mid-1;
//         }

//     }
//     }

