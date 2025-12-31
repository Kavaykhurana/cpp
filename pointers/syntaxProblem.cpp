#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x,p2=&y;// that's the issue
    // use separate line for p2 to assign the address of the other variable;
}