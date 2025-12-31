#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"ch=";
    cin>>ch;
    int a=(int)ch;
    if (a==97 || a==101 || a==105 || a==111 || a==117 || a==65 || a==69 || a==73 || a==79 || a==89) cout<<"it is a vowel";
    else if (a>=65 && a<=90 || a>=97 && a<=122) cout<<"it is a consonant";
    else cout<<"it is neither a vowel nor a consonant";
 
}