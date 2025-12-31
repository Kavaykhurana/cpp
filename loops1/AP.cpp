#include<iostream>
using namespace std;
int main (){
    int i,n,a;
    cout<<"n=";
    cin>>n;
    // for(i=1;i<=2*n-1;i=i+2){
    //     cout<<i<<endl;
    //     }
   //separate variable
   //1 3 5 7 9 .......
   //4 7 10 13 16 19 21
   a=4;
   for (i=1;i<=n;i++){
    cout<<a<<endl;
    a=a+3;
   }

}