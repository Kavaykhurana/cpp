#include<iostream>
using namespace std;
int main (){
    float x;//x=marks of student
    cout<<"x=";
    cin>>x;
    if (x>=0 && x<=33) cout<<"fail";
    if (x>33 && x<=100) cout<<"pass";
    if (x<0 || x>100) cout<<"NA";
}