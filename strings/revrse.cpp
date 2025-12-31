#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}