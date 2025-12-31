// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
    
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// void greeting (){
//     cout<<"hello world\n";
//     cout<<"hello \n";

// }
// int main(){
// greeting();
// greeting();
// greeting();
// greeting();
// }

// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
// cout<<sum(5464,2455);
// }

// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
//     }
// int difference(int x,int y){
//     return x-y;
// } 
// int product(int x,int y){
//     return x*y;
// }
// int division(int x,int y){
//     return x/y;
// }
// int remainder(int x,int y){
//     return x%y;
// }
// int main(){
//     cout<<sum(10,2)<<endl;
//     cout<<difference(10,2)<<endl;
//     cout<<product(10,2)<<endl;
//     cout<<division(10,2)<<endl;
//     cout<<remainder(10,2)<<endl;

// }

// #include<iostream>
// using namespace std;
// void starTriangle(int n){
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";

//     }
//     cout<<endl;
//    }
// }
// int main(){
// starTriangle(3);
// starTriangle(4);
// starTriangle(5);

// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f*=i;
//     }
//     return f;

// }
// int main(){
//     int n,r;
//     cout<<"n=";
//     cin>>n;
//     cout<<"r=";
//     cin>>r;
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     cout<<ncr;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     } 

//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }
    
    
// }

// #include<iostream>
// using namespace std;
//  void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return ;
// }

// int main(){
//     int a,b;
//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;
//     cout<<a<<" "<<b<<endl;
// swap(a,b);
// cout<<a<<" "<<b;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=5;j++){
//             cout<<"*"<<" ";

//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=4;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//                    }
//                    cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i=1;i<=5;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a+=2;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i=1;i<=5;i++){
//         int mid=5/2+1;
//         for(int j=1;j<=5;j++){
//             if(i==mid || j==mid){
//                 cout<<"*";
//             }
//             else cout<<" ";
            
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//         if(i==j || i+j==5+1){
//             cout<<"*";
//         }
//         else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//        a++;
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             // if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0)){
//             //     cout<<1<<" ";
//             // }
//             if((i+j)%2==0){
//                 cout<<1<<" ";
//             }
//             else cout<<0<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
       
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=1,b=1;
//     int sum,n;
//     cout<<"n=";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         if(i==1 || i==2){
//         cout<<1<<" ";
//     }
//        else { 
//         sum=a+b;
//         a=b;
//         b=sum;
//         cout<<sum<<" ";
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            
            cout<<"*";
        }
        cout<<endl;
    }
}