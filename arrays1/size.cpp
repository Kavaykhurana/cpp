#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,4,3,6,4,8,9,4,2,4,5,8,3,48,4,4,4,64,4};
    int a=sizeof(arr)/sizeof(arr[0]);
    cout<<a;
}