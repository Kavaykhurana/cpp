// #include<iostream>
// using namespace std;
// int maxthree(int a,int b,int c){
//     if(a>b && a>c) return a ;
//     if(b>a && b>c) return b ;
//     if(c>b && c>a) return c ;
    
// }
// int main(){
// int a=1,b=3,c=9;
// cout<<maxthree(a,b,c);
// }

#include<iostream>
using namespace std;
int main(){
int a=1,b=3,c=9;
cout<<max(a,max(b,c));
}