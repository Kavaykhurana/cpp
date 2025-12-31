#include<iostream>
using namespace std;
int main(){
    int j,i,a;
    cout<<"side:";
    cin>>a;
    for(i=1;i<=a;i++){
      for(int j=1;j<=a;j++){  //don't take same iterator in nested loops
        cout<<"*";
    
      }
    cout<<endl;
    }
}