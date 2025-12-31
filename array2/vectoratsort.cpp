// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(9);
//     v.push_back(6);
//     v.push_back(2); 
//     v.push_back(9);
//     v.push_back(6);
//     v.push_back(2);
  

//     // v.at(2)=56;
//     // cout<<v.at(2)<<endl;

// //     v[2]=56;
// //     cout<<v[2];

// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// // cout<<endl;
// // v.at(2)=56;
   

// //     for(int i=0;i<v.size();i++){
// //     cout<<v[i]<<" ";
// // }
// cout<<endl;

//  sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }


// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(9);
    v.push_back(4);
    v.push_back(0);
    v.push_back(4);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(4);
    v.push_back(97);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}