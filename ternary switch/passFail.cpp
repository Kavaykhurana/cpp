#include<iostream>
using namespace std;
int main(){
    int x;//x=marks of student
    cout<<"x=";
    cin>>x;
   (x>0 && x<33) ? cout<<"fail" : cout<<"";
   (x>33 && x<=100) ? cout<<"pass" : cout<<"";
    x<0 ? cout<<"NA" : cout<<"";
    x>100 ? cout<<"NA" : cout<<"";

    
    }