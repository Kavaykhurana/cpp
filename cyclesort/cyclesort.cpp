#include<iostream>
using namespace std;
int main(){
   int arr[6]={4,1,6,3,5,2};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //cycle sort
    int i=0;
    while(i<6){
        int correctIdx=arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

}