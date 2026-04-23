// #include <iostream>
// using namespace std;

// void printp(string str, string t) {
//     if (str == "") {
//         cout << t << endl;
//         return;
//     }

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         string left = str.substr(0, i);
//         string right = str.substr(i + 1);

//         string rem = left + right;

//         printp(rem, t + ch);
//     }
// }

// int main() {
//     string str = "abc";
//     printp(str, "");
//     return 0;
// }


#include<iostream>
using namespace std;
void printp(string a,string t){
    if(a==""){
        cout<<t<<endl;
        return;
    }
    for(int i=0;i<a.size();i++){
        char ch=a[i];
        string left=a.substr(0,i);
        string right=a.substr(i+1);
        string rem=left+right;
        printp(rem,t+ch);
    }
}
int main(){
    string a="abc";
    printp(a,"");
}