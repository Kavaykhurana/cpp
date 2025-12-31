#include<iostream>
using namespace std;
int odd(int a,int b){
    if(a>b) return 0;
    if(a%2==0) return odd(a+1,b);
    return a+odd(a+2,b);
}
int main(){
cout<<odd(1,5);
}