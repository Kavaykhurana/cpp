#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str;
   for(int i=0;i<s.length();i++){
    if(s[i]>='X' && s[i]<='Z'){
        str+=s[i];
    }
   }
   cout<<str;
   sort(str.begin(),str.end());
   reverse(str.begin(),str.end());
    cout<<endl;
    cout<<str;
    
}