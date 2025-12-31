#include<iostream>
using namespace std;
int main(){
    // bool x=false;
    // bool y=false;
    // bool z=true;
    int x=1,y=2,z=2;
    cout<<(x==(y==z));//(x==y)==(z)->(0)==(2)->0
    //(x)==(y==z)->(1)->(1)->1
    }