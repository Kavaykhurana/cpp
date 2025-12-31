#include<iostream>
#include<list>
using namespace std;
void print(list<int>l){
    for(auto x:l){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>l1;
    l1.push_back(18);
    l1.push_back(1);
    l1.push_back(8);
    l1.push_back(1);
    l1.push_back(1);
    l1.push_back(1);
    l1.push_back(1);
    l1.push_back(8);
    l1.push_back(12);
    l1.push_back(1);

    print(l1);
    l1.pop_back();

    print(l1);
    l1.pop_front();
    
    print(l1);
    l1.remove(1);
    
    print(l1);
    l1.reverse();
    print(l1);

    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;
    cout<<l1.empty()<<endl;
    l1.sort();
    print(l1);

    cout<<l1.size()<<endl;
    l1.clear();
    cout<<l1.empty();

}