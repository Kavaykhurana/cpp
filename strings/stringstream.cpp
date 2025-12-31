#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str="kavay is a student";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}