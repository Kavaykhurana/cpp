#include<iostream>
#include<vector>
using namespace std;
int fact(int x){
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n,int r){
   return (fact(n))/(fact(r)*fact(n-r));

}

int main(){
int x;
cout<<"x=";
cin>>x;
for(int i=0;i<x;i++){
    for(int j=0;j<=i;j++){
        cout<<combination(i,j)<<" ";
    }
cout<<endl;
}

}

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>>pascal(int numrows){
//     int m=numrows;
// vector<vector<int>>v;
// for(int i=1;i<=m;i++){
//     vector<int>a(i);
//     v.push_back(a);
// }
// //generate
// for(int i=0;i<m;i++){
//   for(int j=0;j<=i;j++){
//     if(j==0 || i==j){
//         v[i][j]=1;
//     }
//     else{
//         v[i][j]=v[i-1][j]+v[i-1][j-1];
//     }
//   }
// }
// }


// int main(){
// int m=5;
// vector<vector<int>>v;
// for(int i=1;i<=5;i++){
//     vector<int>a(i);
//     v.push_back(a);
// }
// //generate
// for(int i=0;i<5;i++){
//   for(int j=0;j<=i;j++){
//     if(j==0 || i==j){
//         v[i][j]=1;
//     }
//     else{
//         v[i][j]=v[i-1][j]+v[i-1][j-1];
//     }
//   }
// }

// for(int i=0;i<5;i++){
//   for(int j=0;j<=i;j++){
//    cout<<v[i][j]<<" ";
//   }
//   cout<<endl;
//   }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int m;
// cout<<"m=";
// cin>>m;
// vector<vector<int>>v;
// for(int i=1;i<=m;i++){
//     vector<int>a(i);
//     v.push_back(a);
//    }

//    for(int i=0;i<m;i++){
//     for(int j=0;j<=i;j++){
//       if(i==j || j==0){
//         v[i][j]=1;
//       }
//       else v[i][j]=v[i-1][j]+v[i-1][j-1];
//     }
//    }

//    for(int i=0;i<m;i++){
//     for(int j=0;j<=i;j++){
//       cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//    }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<vector<int>>v;
// for(int i=1;i<=5;i++){
//   vector<int>a(i);
//   v.push_back(a);
// }

// for(int i=0;i<5;i++){
//   for(int j=0;j<=i;j++){
//     if(i==j || j==0){
//       v[i][j]=1;
//     }
//     else v[i][j]=v[i-1][j]+v[i-1][j-1];
//   }
// }

// for(int i=0;i<5;i++){
//   for(int j=0;j<=i;j++){
//     cout<<v[i][j]<<" ";
//   }
//   cout<<endl;
// }
// }