#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=30;
    bool flag=false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=true;

        }

    }
    if(flag==true)  cout<<"composite";
    else cout<<"prime";

}