//factorial of first n numbers
// #include<iostream>
// using namespace std;
// int fact(int n){
//    int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//   return fact;
// }
    
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     cout<<i<<" "<<fact(i)<<endl;
//   }
// }


// #include<iostream>
// using namespace std;

//     int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     //cout<<i<<" "<<fact(i)<<endl;
//     int fact=1;
//   for(int j=2;j<=i;j++){
//   fact*=j;
//   }
//    cout<<fact<<endl;
//   }
 
// }

#include<iostream>
using namespace std;

    int main(){
  int n;
  cin>>n;
  int fact=1; 
   for(int i=1;i<=n;i++){
  fact*=i;
  cout<<fact<<endl;
  
  
  } 
}