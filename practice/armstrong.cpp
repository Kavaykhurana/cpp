// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     int a=n;
//    int sum=0;
//     for(int i=1;n>0;i++){
//         int m=n%10;
//       sum+=m*m*m;
//       n/=10;
//     }
//     if(sum==a) cout<<a<<" is an armstrong number";
//     else cout<<a<<" is not an armstrong number";

// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n; 
int a=n;

    int b=0;
    for(int i=1;n>0;i++){
       n/=10;
      b+=1;
        //b is the number of digits of n
        
    }
    cout<<b<<endl;
    int sum=0,c,power;
    for(int j=1;j<=b;j++){

         for(int i=1;i<=b;i++){
          
    }
    }


cout<<sum<<endl;
if (sum==a) cout<< a<<" is an armstrong number";
else cout<<a<<" is not an armstrong number";
}