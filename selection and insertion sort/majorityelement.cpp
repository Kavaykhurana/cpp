// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityelement(vector<int>&v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=i+1;j<n;j++){
//             if(v[i]==v[j]) count++;
//         }
//         if(count>n/2)  return v[i];

       
//          }
//           return -1;

// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     cout<<majorityelement(v);
    


// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority(vector<int>&v){
    int n=v.size();
      sort(v.begin(),v.end());
    return v[n/2];
}
int main(){
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(1);
v.push_back(2);
v.push_back(1);
v.push_back(2);
v.push_back(1);
 cout<<majority(v);
}