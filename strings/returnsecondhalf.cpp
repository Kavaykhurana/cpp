#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<str.substr(n/2);
}