#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max,arr[5]={5,5,5,2,5};
    max=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
       
    }
     cout<<"max="<<max<<endl;
     
     int smax=INT_MIN;
     for(int i=0;i<=4;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
     }
     cout<<"smax="<<smax;
}
