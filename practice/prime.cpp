//WAP to determine whether a number is prime or composite
#include<iostream>
using namespace std;
int main(){
int i,n,j;
cout<<"enter the value of n:";
cin>>n;
for(int i=2;i<=n-1;i++){
    if(n%i==0) cout<<"it is composite";
    else cout<<"it is prime";
    break;
}
}

//infinite loop
#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}