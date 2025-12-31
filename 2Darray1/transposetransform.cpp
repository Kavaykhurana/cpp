// #include<iostream>
// using namespace std;
// int main(){
//   int arr[3][3]={1,2,3,4,5,6,7,8,9};
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
      
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// cout<<endl;
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       if(i!=j){
        
//       }
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// //   for(int i=0;i<3;i++){
// //     for(int j=0;j<3;j++){
      
// //         cout<<arr[i][j]<<" ";
// //     }
// //     cout<<endl;
// //   }


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int t[3][3];
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//      }

// cout<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//          t[i][j]=arr[j][i];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr[i][j]=t[i][j];
//         }
//      }

//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//      }


// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return;
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i<j){
//                 swap(arr[i][j],arr[j][i]);
//                 // int temp=arr[i][j];
//                 // arr[i][j]=arr[j][i];
//                 // arr[j][i]=temp;
//             }
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
           // if(i<j){
                swap(arr[i][j],arr[j][i]);
                // int temp=arr[i][j];
                // arr[i][j]=arr[j][i];
                // arr[j][i]=temp;
            // }
    }
}
 
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
   }
}