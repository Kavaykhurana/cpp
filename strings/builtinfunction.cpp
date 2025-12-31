#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   string str="cse cgpa dsa";
   cout<<str.size();
   cout<<str.length();//0 to str.length()-1

string st="abcd";
cout<<st<<" ";
st.push_back('e');
cout<<st<<" ";
st.pop_back();
cout<<st<<" ";

string s="abc";
cout<<s<<endl;
string t="def";
//s=s+t;
//s=s+"def";//append
cout<<endl;
cout<<"def"+s;//modify anywhere
cout<<s;//number cannot be appended using + operator but if kept in double coutes then it is considered as a string

// string str="abcdef";
// cout<<str<<endl;
// //reverse(str.begin()+2,str.end()-1);
// reverse(str.begin()+2,str.begin()+5);//ek zyada dena hota hai
// cout<<str;
}