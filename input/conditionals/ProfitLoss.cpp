#include<iostream>
using namespace std;
int main(){
    float x,y;
    //x=cost price,y=selling price
    cout<<"cost price:";
    cin>>x;
    cout<<"selling price:";
    cin>>y;
    if (x>y) cout<<"loss="<<x-y;
    if (x<y) cout<<"profit="<<y-x;
    if (x==y) cout<<"no profit no loss";
}