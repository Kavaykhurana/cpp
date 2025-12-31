#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int max=INT_MIN;
  for(int i=0;i<8;i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }

 int smax=INT_MIN;
 for(int i=0;i<8;i++){
    if(arr[i]>smax && arr[i]!=max){
        smax=arr[i];
    }
 }
 
 int tmax=INT_MIN;
 for(int i=0;i<8;i++){
    if(arr[i]>tmax && arr[i]!=smax && arr[i]!=max){
        tmax=arr[i];
    }
 }
 cout<<"the three largest elements in the array are:"<<max<<" "<<smax<<" "<<tmax;
 
}