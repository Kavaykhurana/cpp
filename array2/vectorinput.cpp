// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     vector<int>v(n);
//    for(int i=0;i<n;i++){
//     cin>>v[i];

//    }
//    for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
//    cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>v;

 for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
 }
 
 for(int i=0;i<=4;i++){
    cout<<v[i]<<" ";
 }
   
}