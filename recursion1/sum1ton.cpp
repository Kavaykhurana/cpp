#include<iostream>
using namespace std;
int sum(int x,int n){
    if(x>n) return 0;
    return x+sum(x+1,n);
}
int main(){
cout<<sum(1,5);
}