// #include<iostream>
// using namespace std;
// int  main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// int brr[3][3]={1,2,3,4,5,6,7,8,9};
// for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//     cout<<arr[i][j]*<<" ";

//   }
//   cout<<endl;
// }
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int max=INT_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(max<arr[i][j]){
//                 max=arr[i][j];
//             }
//         }
//     }
// cout<<max;

// }

//smax
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// int max=INT_MIN;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         if(max<arr[i][j]){
//             max=arr[i][j];
//         }
//     }
// }
// int smax=INT_MIN;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//     if(smax<arr[i][j && arr[i][j]!=max]){
//         smax=arr[i][j];
//     }
//     }
// }
// cout<<smax;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];

//         }
//     }

//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
            
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void swap(int &x,int &y){
//     int temp=x;
//     x=y;
//     y=temp;
//     return;
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//    swap(arr[i][j],arr[j][i]);
   
//         }
   
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }
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
// int a[3][3]={1,2,3,4,5,6,7,8,9};
// int b[3][3];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         b[i][j]=a[j][i];
//     }
// }
// for(int  i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<b[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(8);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(1);
// int x=8;

// for(int i=0;i<v.size()-2;i++){
//     for(int j=i+1;j<v.size()-1;j++){
//         if(v[i]+v[j]==x){
//             cout<<"("<<i<<","<<j<<")"<<endl;
//         }
//     }
// }


// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);

//     vector<int>v1(v.size());

//     for(int i=0;i<v.size();i++){
//         v1[i]=v[v.size()-1-i];
//     }

//     for(int i=0;i<v.size();i++){
//         cout<<v1[i]<<" ";
//     }
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);

//     int i=0;
//     int j=v.size()-1;
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//}

// #include<iostream>
// #include<vector>
// using namespace std;
// void revpart(int i,int j,vector<int>&v){
//    while(i<=j){
//     int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//    }
//    return;
// }
// int main(){
// vector<int>v;
// v.push_back(0);
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);

// revpart(0,5,v);

// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

#include<iostream>
#include<vector>
using namespace std;
void rev(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int  main(){
vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);

int k;
cout<<"k=";
cin>>k;

if(k>v.size()){
    k=v.size()%k;
}
int i=0;
int j=v.size()-1;

rev(i,v.size()-1-k,v);
rev(v.size()-k,v.size()-1,v);
rev(0,v.size()-1,v);
cout<<"after rotation by k=";
cout<<k<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}