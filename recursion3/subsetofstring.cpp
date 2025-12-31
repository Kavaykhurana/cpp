// #include<iostream>
// using namespace std;
// void printsubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[0];
//     printsubset(ans+ch,original.substr(1));
//     printsubset(ans,original.substr(1));
// }
// int main(){
//     string str="abc";
//     printsubset("",str);
// }


#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>&v){
    if(original==""){
    v.push_back(ans);
        return;
    }
    char ch=original[0];
    storesubset(ans+ch,original.substr(1),v);
    storesubset(ans,original.substr(1),v);
}
int main(){
    string str="abc";
    vector<string>v;
    storesubset("",str,v);
    for(string ele: v){
        cout<<ele<<endl;
    }
}


