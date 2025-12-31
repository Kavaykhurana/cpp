#include<iostream>
 using namespace std;
 int main(){
// // int x=7;
// // int* ptr=&x;
// // cout<<ptr<<endl;//0x61ff08
// // ptr=ptr+1;
// // cout<<ptr<<endl;//0x61ff0c
// bool flag =true;
// bool* ptr=&flag;
// cout<<ptr<<endl; //0x61ff0b
// ptr=ptr+1;
// cout<<ptr<<endl;//0x61ff0c
// }

int x=7;
int* ptr=&x;
cout<<*ptr<<endl;//7
ptr=ptr+1;
cout<<*ptr<<endl;//6422284 
        }