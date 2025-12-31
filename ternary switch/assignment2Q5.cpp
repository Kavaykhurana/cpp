// WAP to find the difference between ASCII of two characters ,take them as input 
#include<iostream>
using namespace std;
int main(){
   char a,b;
   cout<<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;
   int x=(int)b-(int)a;
   if ((int)b > (int)a) cout<<x;
   else cout<<(-x);
}