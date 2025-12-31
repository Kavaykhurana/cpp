#include<iostream>
using namespace std;
int fun(float a){
    if(a==1) return 1;
    if(a==0) return -100;
     return fun(a/2.0);
     }
int main(){
    cout<<fun(256);

}
