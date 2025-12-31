// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int k=1;k<=x;k++){
//         f*=k;
        
//     }
//     return f;

// }
// int combination(int i,int j){
//      int icj=(fact(i))/(fact(j)*fact(i-j));
// }
// int main  (){
// int n;
// cout<<"n=";
// cin>>n;
// for(int i=0;i<=n;i++){
//    for(int j=0;j<=i;j++){
//     cout<<combination(i,j)<<" ";
//    }
//    cout<<endl;
// }
    
// }



#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
    f*=i;

    }
    return f;
}
int combination(int i,int j){
    int icj=fact(i)/(fact(j)*fact(i-j));

}

int main(){
int i,j,n;
cout<<"n=";
cin>>n;
for(i=0;i<=n;i++){
    for(j=0;j<=i;j++){
        cout<<combination(i,j)<<" ";
    }
    cout<<endl;
}



}