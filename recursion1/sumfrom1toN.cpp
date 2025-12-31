#include<iostream>
using namespace std;
void sum(int x,int n){
    if(n==0){
        cout<<x<<endl;
        return ;
    }
    sum(x+n,n-1);
}
int main(){
sum(0,5);
}