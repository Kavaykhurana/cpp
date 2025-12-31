//combination


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//      int n,r,nfact,rfact;
//      cout<<"n=";
//      cin>>n;
//      cout<<"r=";
//      cin>>r;
//      nfact=1;
//      for(int i=1;i<=n;i++){
//          nfact*=i;

//      }
//      rfact=1;
//      for(int j=1;j<=r;j++){
//         rfact*=j;
//      }
//      int nMinusrFact=1;
//      for(int k=1;k<=n-r;k++){
//         nMinusrFact*=k;
//      }
//      int p=(nfact)/((rfact)*(nMinusrFact));
//      cout<<p;
// }


// #include<iostream>
// using namespace std;
// int fact(int x){
//    int f=1;
//    for(int i=1;i<=x;i++){
//       f*=i;
//    }
//    return f;  //void function do not return any value
// }
// int main(){
//    int n,r;
//    cout<<"n=";
//    cin>>n;
//    cout<<"r=";
//    cin>>r;
//    int nfact=fact(n);
//    int rfact=fact(r);
//    int nrfact=fact(n-r);
//    int ncr=(nfact)/(nrfact*rfact);
//    cout<<ncr;
// }



//permutation

// #include<iostream>
// using namespace std;
// int fact(int x){
//    int f=1;
//    for(int i=1;i<=x;i++){
//       f*=i;
//    }
//    return f;
// }
// int main(){
// int n,r;
// cout<<"n=";
// cin>>n;
// cout<<"r=";
// cin>>r;
// int nfact=fact(n);
// int nrfact=fact(n-r);
// int npr=(nfact)/nrfact;
// cout<<npr;
// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//    int f=1;
//    for(int i=1;i<=x;i++){
//       f*=i;

//    }
//    return f;
// }
// int combination(int n,int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
//     int permutation(int n,int r){
//     int npr=fact(n)/fact(n-r);
//     return npr;
// }

// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    int r;
//    cout<<"enter r:";
//    cin>>r;
//    int rfact=fact(r);
//    int nfact=fact(n);
//    int nrfact=fact(n-r);
//    int ncr=combination(n,r);
//    int npr=permutation(n,r);
//    cout<<"ncr="<<ncr<<endl<<"npr="<<npr;
// }

// #include<iostream>
// using namespace std;
// int square (int n){
//    return n*n;
// }
// int main(){
// cout<<square(123);
// }

// #include<iostream>
// using namespace std;
// float area(int r){
//    return 3.1415*r*r;

// }
// int main(){
// cout<<area(10);
// }

// #include<iostream>
// using namespace std;
// int odd(int a,int b){
//    if(a>b){
//       for(int i=b;i<a;i++){
//          if(i%2!=0) cout<<i<<endl;
//       }
//    }
//    else for(int i=a;i<b;i++){
//       if(i%2!=0) cout<<i<<endl;
//    }
// }
// int main(){
// cout<<odd(2,19);
// }

// #include<iostream>
// using  namespace std;
// int count(int n){
//    int a=0;
//    for(int i=1;n>0;i++){
//       n%10;
//       a++;
//       n/=10;
//    }
//    return a;
// }
//    int square(int b){
//       return b*b;
//    }

// int main(){
//     int n,b;
//     cout<<"n=";
//     cin>>n;
//     cout<<"b=";
//     cin>>b;
//     cout<<count(n)<<endl;
//     cout<<square(b);
// }

#include<iostream>
using namespace std;
int main(){
   
}






