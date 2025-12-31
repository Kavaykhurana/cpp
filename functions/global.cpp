#include<iostream>
using namespace std;
int a=9;//global variable
void fun(){
    cout<<a;
}
int main(){
cout<<a<<endl;
int a=2;//local variable
cout<<a<<endl;//priority of local variable is more than global variable
fun();
}