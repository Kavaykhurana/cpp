// #include <iostream>
// #include <vector>
// using namespace std;

// int fib(int n, vector<int> &dp) {
//     if (n <= 1) return n;

//     if (dp[n] != -1) return dp[n];  // already computed

//     return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
// }

// int main() {
//     int n = 10;

//     vector<int> dp(n + 1, -1);

//     cout << fib(n, dp);

//     return 0;
// }





#include<iostream>
#include<vector>
using namespace std;
int fibo(int n,vector<int>&v){
    if(n<=1) return n;

    if(v[n]!=-1) return v[n];

    return fibo(n-1,v) + fibo(n-2,v);

}
int main(){
     int n=20;
  vector<int>v(n+1,-1);
 
  cout<<fibo(n,v);
   
}