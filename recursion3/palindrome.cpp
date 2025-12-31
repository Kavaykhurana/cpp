// #include<iostream>
// using namespace std;
// bool ispalindrome(string s){
//     int i=0;
//     int j=s.length()-1;
//     while(i,j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main(){
// string s="abba";
// cout<<ispalindrome(s);
// }

#include<iostream>
using namespace std;
bool ispalindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return ispalindrome(s,i+1,j-1);
}
int main(){
string s="abba";
cout<<ispalindrome(s,0,s.length()-1);
}