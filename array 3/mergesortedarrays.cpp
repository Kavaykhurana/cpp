// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> merge(vector<int>&arr1,vector<int>&arr2){
// int n=arr1.size();
// int m=arr2.size();
// vector<int>res(m+n);
// int i=0; //arr1
// int j=0; //arr2
// int k=0; //res
// while(i<=n-1 && j<=m-1){
//     if(arr1[i]<arr2[j]){
//         res[k]=arr1[i];
//         i++;
//         k++;
//     }
//     else{ //arr2[j]<arr2[i]
//      res[k]=arr2[j];
//      j++;
//      k++;
//     }
//     //k++
// }
// //for remaining
// if(i==n){  //arr1 ke saare elements utha chuka hu
//   while(j<=m-1){
//     res[k]=arr2[j];
//     k++;
//     j++;
//   }
// }
// if(j==m){ // arr2 ke saare elements utha chuke hai
//   while(i<=n-1){
//     res[k]=arr1[i];
//     k++;
//     i++;
//   }

// }
// return res;
// }

// int main(){
// vector<int>arr1;
// arr1.push_back(1);
// arr1.push_back(4);
// arr1.push_back(5);
// arr1.push_back(8);
// for(int i=0;i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }
// cout<<endl;


// vector<int>arr2;
// arr2.push_back(2);
// arr2.push_back(3);
// arr2.push_back(6);
// arr2.push_back(7);
// arr2.push_back(10);
// arr2.push_back(12);
// for(int i=0;i<arr2.size();i++){
//     cout<<arr2[i]<<" ";
// }
// cout<<endl;
// vector<int>v = merge(arr1,arr2);

// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";

// }

// }




#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
}
vector<int> merge(vector<int>v1,vector<int>v2){
  int n=v1.size();
  int m=v2.size();
  vector<int>v3(m+n);
  int i=0;
  int j=0;
  
  int k=0;
  while(i<n && j<m){
    if(v1[i]<v2[j]){
      v3[k]=v1[i];
      i++;
      k++;
    }
    else //if(v1[i]>v2[j])
    { v3[k]=v2[j];
      j++;
      k++;
    }}
  if(i==n){
    while(j<m){
   v3[k]=v2[j];
   j++;
   k++;}}
    if(j==m){
      while(i<n){
        v3[k]=v1[i];
        i++;
        k++;}}
    return v3;
  }
int main(){
vector<int>v1;
v1.push_back(1);
v1.push_back(3);
v1.push_back(5);
v1.push_back(7);
v1.push_back(9);
v1.push_back(11);



vector<int>v2;

v2.push_back(2);
v2.push_back(4);
v2.push_back(6);
v2.push_back(8);
v2.push_back(10);

display(v1);
cout<<endl;
display(v2);
cout<<endl;
vector<int>v3 = merge(v1,v2);
display(v3);

}