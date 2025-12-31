#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
set<int>s;
s.insert(5);
s.insert(19);
s.insert(7);
s.insert(2);
for(auto ele : s){
    cout<<ele<<" ";
}
cout<<endl;

map<string,int>m;
//1,30 2,20 3,10
m["badmos"]=123;
m["yyg"]=480;
m["ueb"]=123888;

for(auto a:m){
    cout<<a.first<<" "<<a.second<<" ";
}



}