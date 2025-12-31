//WAP to count digits of a given number.

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,count;
//     cout<<"n=";
//     cin>>n;
//     count=0;
//     for(i=10;n>0;){
//      a=n/i;
//      count+=1;
//      n/=10;

//     }
//     cout<<count;
// }


//while loop

#include<iostream>
using namespace std;
int main(){
   int i,n,a,count;
   cout<<"n=";
   cin>>n;
   count=0;
   while(n>0){
    a=n/10;
    count+=1;
    n/=10;
   }
   cout<<count;
}