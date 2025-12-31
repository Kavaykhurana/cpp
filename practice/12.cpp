//WAP to print sum of digits of a given number.

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,a,sum;
//     cout<<"n=";
//     cin>>n;
//     sum=0;
//     for(i=10;n>0;){
//       i=n%10;
      
//       sum+=i;
//       n/=10;  
//     }
//     cout<<sum;
// }

//while loop

#include<iostream>
using namespace std;
int main (){
   int i,n,a,sum;
   cout<<"n=";
   cin>>n;
   sum=0;
   a=0;
   while(n>0){
     a=n%10;
     sum+=a;
     n/=10;
   }
   cout<<sum;
}