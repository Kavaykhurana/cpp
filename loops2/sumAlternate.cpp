//Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6 +7 upto ‘n'

// #include<iostream> 
// using namespace std;
// int main (){
//     int i,n,sum;
//     cout<<"n=";
//     cin>>n;
//     sum=0;
//     for(i=1;i<=n;i++){
//     if (i%2!=0) sum+=i;
//     else sum-=i;
//     }
// cout<<sum;
// }

#include<iostream>
using namespace std;
 int  main(){
    int i,n,sum;
    cout<<"n=";
    cin>>n;
    sum=0;
    if (n%2==0) cout<<-n/2;
    else if (n%2!=0) cout<<((1-n)/2+n);
 }



