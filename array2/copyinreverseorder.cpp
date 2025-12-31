// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);
 
//      display(v1);

// vector<int>v2(v1.size());
// for(int i=0;i<v2.size();i++){
//     //i+j=size-1
//     int j=v1.size()-1-i;
//     v2[i]=v1[j];
// }
// display(v2);
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);
 
//      display(v1);



// vector<int>v2(v1.size());
// for(int i=0;i<v2.size();i++){
    
//     v2[i]=v1[v1.size()-1-i];
// }
// display(v2);
// }

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
v.push_back(10);

display(v);
cout<<endl;

vector<int>v1(v.size());
for(int i=0;i<v1.size();i++){
    int j=v1.size()-1-i;
    v1[i]=v[j];
}
display(v1);
}