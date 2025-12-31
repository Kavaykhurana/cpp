// #include<iostream>
// #include<cmath>
// #include<climits>
// using namespace std;
// int checkprime(int a){
//     if(a==1) return 0;
//     bool flag=true;
//     for(int i=2;i<a/2;i++){
//         if(a%i==0) {
//     flag=false;
//         }    
//     }
//     if(flag==true) return a;
//     else return 0;
// }
// int main(){
//     int arr[3][3]={13,2,31,4,571,6,17,8,9};
//     int n=sizeof(arr)/sizeof(arr[0][0]);
//    int max=INT_MIN;
//     for(int i=0;i<sqrt(n);i++){
//      for(int j=0;j<sqrt(n);j++){
//         if(j==i || i+j==sqrt(n)-1){
//             if(max<checkprime(arr[i][j])){
//                 max=checkprime(arr[i][j]);
//             }
           
//         }
//      }
//     }
//      cout<<"largest prime in diagonal is:"<<max;
  
// }

// #include<iostream>
// #include<cmath>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int checkprime(int a){
//     if(a==1) return 0;
//     bool flag=true;
//     for(int i=2;i<a/2;i++){
//         if(a%i==0) {
//     flag=false;
//         }    
//     }
//     if(flag==true) return a;
//     else return 0;
// }
// int main(){
//     int arr[3][3]={13,2,31,4,571,6,17,8,9};
//     int n=sizeof(arr)/sizeof(arr[0][0]);
//    int max=INT_MIN;
//    vector<int>v;
//     for(int i=0;i<sqrt(n);i++){
//      for(int j=0;j<sqrt(n);j++){
//         if(j==i || i+j==sqrt(n)-1){
//             v.push_back(arr[i][j]);
//             }
//         }
//       }
//     sort(v.begin(),v.end());
//     cout<<"largest prime is:"<<v[v.size()-1];

//     }

#include<iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
  int mx = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (isPrime(nums[i][i])) {
      mx = max(mx, nums[i][i]);
    }
    if (isPrime(nums[i][n - i - 1])) {
      mx = max(mx, nums[i][n - i - 1]);
    }
  }
  return mx;
}

  int main(){
  vector<vector<int>>v;
v.push_back({1,2,3});
v.push_back({4,5,6});
v.push_back({7,8,9});
cout<<diagonalPrime(v);

  }

