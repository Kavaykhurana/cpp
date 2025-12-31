#include<iostream>
using namespace std;
    int main(){
        float x,y;
        cout<<"x=";
      cin>>x;
      y=(x-(int)x);
      if (y<0) y=(y+1);
      cout<<y;
    }


