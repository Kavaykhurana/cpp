// #include<iostream>
// using namespace std;
// int main(){
// string s;
// cin>>s;
// int count=0;
// int n=s.length();
// for(int i=0;i<n;i++){
//     if(n==1){
//         break;
//     }
//     else if(n==2 && s[0]!=s[1]){
//         count=1;
//         break;
//     }
//     else if(i==0){
//         if(s[i]!=s[i+1]) count++;
//     }
//     else if(i==n-1){
//         if(s[i]!=s[i-1]) count++;
//     }
//     else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
//         count++;
//     }
    
// }
// cout<<count;
// }

#include<iostream>
using namespace std;
int main(){
    string str="AIEEE";
    int count=0;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(n==1){
       break;
        }
        else if(n==2){
            count=1;
            break;
        }
        else if(i==0 && str[0]!=str[1]){
            count++;
        }
        else if(i==n-1 && str[n]!=str[n-1]){
            count++;
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }

    }
    cout<<count;
}
