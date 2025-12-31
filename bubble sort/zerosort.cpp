// #include<iostream>
// using namespace std;
// int main(){
//    string str="0105102110";
//    string s;
//    string t;
//    for(int i=0;i<str.size();i++){
//     if(str[i]=='0'){
//         s+=str[i];
//     }
//     else t+=str[i];
//    }
//    string k=t+s;
//    int x=stoi(k);
//    cout<<x<<" ";
//    cout<<k;

// }

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[]={5,0,1,2,0,0,4,0,3};
   int n=9;
   for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
            swap(arr[j],arr[j+1]);
        }
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}