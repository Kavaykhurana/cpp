#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int evensum=0,oddsum=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
           evensum+=arr[i];
        }
        else oddsum+=arr[i];
    }
    int difference =evensum-oddsum;
    cout<<difference;
}