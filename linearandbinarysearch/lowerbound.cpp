// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={1,2,4,5,9,15,20,21,24};
//     int x=20;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     int j=i+1;
//     while(i<=j){
//             if(arr[i]==x){
//                 cout<<(arr[i-1]);
//                 break;
//             }
//            else if(arr[i]<x && arr[j]>x){
//                 cout<<arr[i];
//                 break;
//             }
//             i++;
//             j++;
//         }
//     }

#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int lo=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int hi=n-1;
    int mid;
    int x=14;

   int i=0;
   int j=i+1;
   while(i<=j){
            mid=(hi+lo)/2;
            if(mid==x){
                cout<<arr[mid-1];
                break;
            }
        if(arr[mid]<x){
            lo=mid+1;
        }
       else if(arr[mid]>x){
        hi=mid-1;
       }
       if(arr[mid]<x && arr[mid+1]>x){
        cout<<arr[mid];
        break;
       }

        
    }
    }
