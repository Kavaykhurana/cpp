#include<iostream>
#include<string>
using namespace std;
int main (){
    //string str="kavay khurana";
    // cout<<str;
    //cout<<str[0];
   string s;
   //cin>>s;//only if the given string has no spaces
   getline(cin,s);//always works
   cout<<s;
}