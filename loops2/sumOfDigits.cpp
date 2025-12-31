#include<iostream>
using namespace std;
int main(){
    int i,n,sum,lastdigit;
    cout<<"n=";
    cin>>n;
    lastdigit=0;
    sum=0;
    while(n>0){
        lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<sum;
}