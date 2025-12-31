#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,2,3,4,5,5};
    int element=arr[2];
    bool flag =false;
    for(int i=0;i<7;i++){
        if(element-arr[i]-1==0){
            flag=true;
        }
    }
    if(flag==true) cout<<"repeating";
    else cout<<"non repeating";
}