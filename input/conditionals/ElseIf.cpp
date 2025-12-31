#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter the number=";
    cin>>x;
    if (x>=91 && x<=100) cout<<"excellent";
    else if(x>=81) cout<<"very good";
    else if(x>=71)cout<<"good";
    else if(x>=61)cout<<"can do better";
    else if(x>=51)cout<<"average";
    else if(x>41)cout<<"below average";
    else if (x<40)cout<<"fail";
    else if (x<0 || x>100) cout<<"not applicable";
}