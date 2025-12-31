 //finding hcf

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int hcf=1;
// for(int i=1;i<=min(a,b);i++){
//     if(a%i==0 && b%i==0) {  //i is a common factor
//      hcf=i;
//     }
//     }
//     return hcf;// return statement is written after the end curly brackets


// }
// int main(){
//     int a,b;
//     cout<<"enter 1st number:";
//     cin>>a;
//     cout<<"enter 2nd number:";
//     cin>>b;
//     cout<<gcd(a,b);
// }


#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;
for(int i=min(a,b);i>1;i--){
    if(a%i==0 && b%i==0) {  //i is a common factor
     hcf=i;
     break;
    }
    }
    return hcf;// return statement is written after the end curly brackets


}
int main(){
    int a,b;
    cout<<"enter 1st number:";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    cout<<gcd(a,b);
}