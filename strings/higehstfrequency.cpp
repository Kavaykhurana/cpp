// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// string s="kavay";
// vector<int>arr(26,0); 

// for(int i=0;i<s.size();i++){
//     char ch=s[i];
//     int ascii=(int)ch;
//     arr[ascii-97]++;
// }

// int mx=0;
// for(int i=0;i<26;i++){
//     if(arr[i]>mx) mx=arr[i];
// }

// for(int i=0;i<26;i++){
//     if(arr[i]==mx){
//         int ascii=i+97;
//         char ch=(char)ascii;
//         cout<<ch<<" "<<mx<<endl;
//     }
// }

// }

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     string s="kavay";
//     vector<int>v(26,0);
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         int ascii=int(ch);
//         v[ascii-97]++;
//     }
//        int max=INT_MIN;
//     for(int i=0;i<v.size();i++){
//      if(v[i]>max){
//         max=v[i];
//      }
//     }
    
//     for(int i=0;i<s.size();i++){
//         if(max==v[i]){
//      char ascii=char(i+97);
//      cout<<ascii<<" "<<max;
//         }
//     }
// }

#include<iostream>
#include<map>
#include<queue>
using namespace std;
typedef pair<int,char>pi;
int main(){
    string a="kavay";
    map<char,int>m;
    for(auto x:a){
        m[x]++;
    }
priority_queue<pi>pq;
for(auto x:m){
    pq.push({x.second,x.first});
}
cout<<pq.top().second<<" "<<pq.top().first;

}


