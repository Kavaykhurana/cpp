// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// string str="kavay      kavay";
// sort(str.begin(),str.end());
// cout<<str;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,4,3,5,7,6,2};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}