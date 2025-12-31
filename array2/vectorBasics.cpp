// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;//you need not mention the size
// //inserting /input do not use []
// v.push_back(6);
// v.push_back(1);
// v.push_back(9);
// v.push_back(0);// v.size tells the size of vector and it is taken upto the number of elements present

// //v.capacity tells the number of elements that can be assigned in a vector after push_back

// //if you to access or update
// v[0]=51;
// cout<<v[0]<<" ";
// cout<<v[1]<<" ";
// cout<<v[2]<<" ";
// cout<<v[3]<<" ";

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(6);
//     cout<<v.size()<<endl;
//     v.push_back(9);
//     cout<<v.size()<<endl;
//     v.push_back(5);
//     cout<<v.size()<<endl;
//     v.push_back(1);
//     cout<<v.size()<<endl;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
}