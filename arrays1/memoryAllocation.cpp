#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr;//the address of array is equal to the first byte of the first element in that array
}