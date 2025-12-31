#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"z=";
    cin>>z;
    if(x>y && x>z) cout<<x;
    if (y>x && y>z) cout<<y;
    if (z>x && z>y) cout<<z;


}