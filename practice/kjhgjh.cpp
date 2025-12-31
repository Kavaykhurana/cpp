// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"n=";
// cin>>n;
// int a=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
     
    
//      cout<<"*";
     
//     }
//     cout<<endl;
// }
// }


#include<iostream>
using namespace std;

int hcfab(int a,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
if (a%i==0 && b%i==0){
     hcf=i;
    }
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
     cout<<hcfab(a,b);
}