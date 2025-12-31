#include<iostream>
using namespace std;
int main(){ 
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    // a b c /A B C/ ! @ # $ % ^ & B & * _ +
    int l=(int)ch;
    if (l>=97 && l<=122 || l>=65 && l<=90) cout<<"character is an alphabet";
    else cout<<"character is not an alphabet";
}