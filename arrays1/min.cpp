// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int min,arr[5]={1,2,3,4,5};
//     min=INT_MAX;
//     for(int i=0;i<=4;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
       
//     }
//      cout<<"min="<<min<<endl;
     
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int min,arr[5]={1,2,3,4,5};
    min=arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
       
    }
     cout<<"min="<<min<<endl;
     
}