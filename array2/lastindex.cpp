// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(9);
//     v.push_back(55);
//     v.push_back(3);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(2);
//     //v.push_back(3);
//     int x=3,index=-1;

//     // for(int i=0;i<v.size();i++){
//     //  if(v[i]==x)
//     //  index=i;
//     // }

//     for(int i=v.size()-1;i>=0;i--){
//      if(v[i]==x){
//      index=i;
//      break;
//     } 
//     }
//     cout<<"index:"<<index;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(0);
    v.push_back(6);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(5);

    int x=5,index=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x)
        index=i;
    }
    cout<<"index="<<index;

}