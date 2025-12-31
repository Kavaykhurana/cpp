#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"ch=";
    cin>>ch;
    int x=(int)ch;
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ) cout<<"it is a vowel";
    else if(x>=65 && x<=90 || x>=97 && x<=122 ) cout<<"it is a consonant"; //can't put more than 7 values in the if condition otherwise error will be occured
    else cout<<"it is neither a consonant not a vowel";
}