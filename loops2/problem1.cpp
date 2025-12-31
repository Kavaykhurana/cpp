//WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"n=";
    cin>>n;
    
    a=0;

    while(n>0){
        a=n%10+10;
        
        n/=10;
        cout<<a;
    }
    cout<<endl<<"sum="<<a+n;
    
}
