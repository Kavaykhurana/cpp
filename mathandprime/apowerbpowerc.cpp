#include<iostream>
using namespace std;
int power(int b,int c){
  if(c==0) return 1;
  return b*power(b,c-1);
}

int main(){
  int a,b,c;
  cout<<"a=";
  cin>>a; 
  cout<<"b=";
  cin>>b;
  cout<<"c=";
  cin>>c;
  cout<<endl;

int bpowerc=power(b,c);
cout<<power(a,bpowerc);

}