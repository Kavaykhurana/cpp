// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
// unordered_map <string,int> m;

// pair<string,int>p1;
// p1.first="mota badmos";
// p1.second=32;

// pair<string,int>p2;
// p2.first="bona badmos";
// p2.second=33;

// pair<string,int>p3;
// p3.first="badmos";
// p3.second=23;

// m.insert(p1);
// m.insert(p2);
// m.insert(p3);

// // for(pair<string,int> p : m){
// //    cout<<p.first<<" "<<p.second<<endl;
// // }

// for(auto p : m){
//     cout<<p.first<<" "<<p.second<<endl;
//  }
 

// }

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map <string,int> m;

m["mota badmos"]=12;
m["billa badmos"]=13;
m["bona badmos"]=14;

// for(pair<string,int> p : m){
//    cout<<p.first<<" "<<p.second<<endl;
// }

for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
 }
 
 m.erase("mota badmos");

 cout<<endl;
  
 for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
 }
}