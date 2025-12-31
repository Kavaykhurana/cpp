//Two numbers are entered through the 
//keyboard. Write a program to find the value of one 
//number raised to the power of another.

//for loop

// #include<iostream>
// using namespace std;
// int main (){
//     int a,b,power;
//     cout<<"base:";
//     cin>>a;
//     cout<<"exponent:";
//     cin>>b;
//     power=1;
//     for(int i=1;i<=b;i++){
//      power*=a;
     
//     }
//    cout<<power;
// }

//while loop

#include<iostream>
using namespace std;
int main(){
    int a,b,power,i;
    cout<<"base:";
    cin>>a;
    cout<<"power:";
    cin>>b;
    power=1;
    while(b>0){
     power*=a;
     b-=1;

    }
    cout<<power;
}