#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max,arr[5]={1,2,3,4,5};
    max=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
       
    }
     cout<<"max="<<max<<endl;
     
}

// #include<iostream>
// using namespace std;
// int main(){
//     int max,arr[5]={1,2,3,4,5};
//     max=arr[0];
//     for(int i=0;i<=4;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
       
//     }
//      cout<<"max="<<max<<endl;
     
// }