#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int* ptr=arr;//giving address
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    // for(int i=0;i<=5;i++){
    //     cout<<arr[i]<<" ";
    // }

     for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }

}