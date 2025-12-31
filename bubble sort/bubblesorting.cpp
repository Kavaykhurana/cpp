#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               swap(a[i],a[j]);
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,6,7,8,2,9,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    display(arr,n);

}
