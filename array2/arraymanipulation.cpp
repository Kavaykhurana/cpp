// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int even=0,odd=0;
//     for(int i=0;i<6;i++){
//         if(arr[i]%2==0){
//            arr[i]+=10;
//         }
//         else arr[i]*=2;;
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}
int main(){
vector<int>v;

v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);
v.push_back(8);
display(v);
cout<<endl;
for(int i=0;i<v.size();i++){
    if(v[i]%2==0){
         v[i]+=10;
    }
    else v[i]*=2;
}
display(v);
}