#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //size capacity
    v.push_back(1);//1 1
    v.push_back(2);//2 2
    v.push_back(3);//3 4
    v.push_back(4);//4 4
    v.push_back(5);//5 8
    v.push_back(6);//6 8
    v.push_back(7);//7 8
    v.push_back(8);//8 8
    v.push_back(9);//9 16
    v.push_back(10);//10 16
    v.push_back(11);//11 16
    v.push_back(12);//12 16
    v.push_back(13);//13 16
    v.push_back(14);//14 16
    v.push_back(15);//15 16
    v.push_back(16);//16 16
    v.push_back(17);//17 32
    v.push_back(18);//18 32
    v.push_back(19);//19 32
    v.push_back(20);//20 32
    v.push_back(21);//21 32
    v.push_back(22);//22 32
    cout<<"size is:"<<v.size()<<endl;
    cout<<"capacity is:"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

cout<<"new size is:"<<v.size()<<endl;
    cout<<"new capacity is:"<<v.capacity()<<endl;

}