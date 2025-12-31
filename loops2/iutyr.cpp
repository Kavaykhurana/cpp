
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"n=";
  cin>>n;
  for(int i=2;i<=n-1;i++){
    if(n%i!=0) cout<<"it is prime";
    else if (n%i==0) cout<<"it is composite";
    break;
  }
}