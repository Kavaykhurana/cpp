// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int* ptr=arr;//giving address
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     // for(int i=0;i<=5;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//      for(int i=0;i<=5;i++){
//         cout<<ptr[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int* ptr=arr;//giving address
//     //cout<<ptr<<endl;
//     // for(int i=0;i<=5;i++){
//     //     cout<<ptr[i]<<" ";
//     // }
//     // cout<<endl;
//     *ptr=8;//ptr[0]=8
//     //ptr++;
//     //*ptr=9;
//     //ptr--;
//     for(int i=0;i<=5;i++){
//         cout<<*ptr<<" ";
//         ptr++;
//     }

     

// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);   
    v.push_back(0);
    int idx=-1;
   for(int i=0;i<v.size();i++){
    if(v[i]==0){
     idx=i;
    }
   }
   cout<<idx;
}