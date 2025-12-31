#include<iostream>
using namespace std;
int a=9; //global variable
void fun(int x,int y){
 cout<<"address of fun x" <<&x<<endl;
 cout<<"address of fun y"<<&y<<endl;

}
void f(){
    cout<<a;
}
int main(){
int x=3;
int y=7;
 cout<<"address of main x" <<&x<<endl;
 cout<<"address of main y"<<&y<<endl;
fun(x,y);
cout<<a;
}