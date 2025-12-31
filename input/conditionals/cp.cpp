#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"x=";
    cin>>x;
    if ((x%3==0 || x%5==0) && (x%15!=0)) cout<<"divisible by 3 and 5 but not 15";
    else cout<<"not divible ";
}