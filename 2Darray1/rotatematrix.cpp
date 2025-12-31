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
    //rotating the array by 90 degrees
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(arr[i][j],arr[j][i]);

        }
    }
    int i=0;
    int j=2;
    while(i<=j){
        swap(arr[i][j],arr[j][i]);
        i++;
        j--;

    }

    cout<<"after rotating the array by 90 degrees:";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
}


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     //transpose
//         for(int i=0;i<3;i++){
//           for(int j=i+1;j<3;j++){
//          int temp=arr[i][j];
//          arr[i][j]=arr[j][i];
//          arr[j][i]=temp;
//         }
//     }

//     // for(int i=0;i<3;i++){
//     //       for(int j=0;j<3;j++){
//     //      cout<<arr[i][j]<<" ";

//     //     }
//     //     cout<<endl;
//     // }

//     int i=0;
//     int j=2;
//     while(i<=j){
//         int temp=arr[i][j];
//         arr[i][j]=arr[j][i];
//       arr[i][j]=temp;
//       i++;
//       j--;
//     }

//     for(int i=0;i<3;i++){
//           for(int j=0;j<3;j++){
//          cout<<arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }
// }