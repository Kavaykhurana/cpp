#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];//input
    }
    int x;
    cout<<"enter the number you want to search:";
    cin>>x;
    //search
    //check mark
    bool flag=false; //false->not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"element is present";
    else cout<<"element not present";
}



