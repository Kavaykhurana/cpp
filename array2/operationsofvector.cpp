#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);

    //v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();
    v.pop_back();// pop_back used for the deletion of the last element of the vector
//pop_back alters the size of vector but not the capacity of the vector
// capacity of vector remains same after pop_back operation
     cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}