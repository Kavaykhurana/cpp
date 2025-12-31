//percentage of five subjects 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int arr[n];
    cout<<"enter the marks of n students";
    for(int j=0;j<=n-1;j++){
        cin>>arr[j];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
      sum+=arr[i];
    }
    float percentage=sum/n;
    cout<<percentage;
}

