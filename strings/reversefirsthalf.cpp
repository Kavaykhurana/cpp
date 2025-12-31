#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    //  cin>>str;
    getline(cin,str);
    int n=str.size();
    cout<<str<<endl;
    reverse(str.begin(),str.end()-n/2);
  cout<<str;

}
