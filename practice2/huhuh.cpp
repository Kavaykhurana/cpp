// #include<iostream>
// using namespace std;
// void display(int arr[]){
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return;}
//     void change(int b[]){
//         b[0]=56;
//     }

// int main(){
// int arr[5]={1,2,3,4,5};
// display(arr);
// change(arr);
// display(arr);

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//   int *ptr=arr;
//   cout<<ptr;
//   cout<<endl;
//   cout<<&ptr<<endl;
//   for(int i=0;i<=4;i++){
//     cout<<arr[i]<<" ";

//   }
//   cout<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
//    cout<<v[0]<<" ";
//    cout<<v[1]<<" ";
//    cout<<v[2]<<" ";
//    cout<<v[3]<<" ";
//    cout<<v[4]<<" ";
//    cout<<v[5]<<" ";
//    cout<<v[6]<<" ";
//    cout<<v[8]<<" ";

for(int i=0;i<=4;i++){
    cout<<v[i]<<" ";

}
}