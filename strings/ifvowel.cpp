// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="kavay";
//     int count=0;
//     int i=0;
//     while(s[i]!='\0'){
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){   
//         count++;
//         }
//         i++;
// }
// cout<<count;
// }

#include<iostream>
using namespace std;
int main(){
    string str="kavay";
    int count =0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}