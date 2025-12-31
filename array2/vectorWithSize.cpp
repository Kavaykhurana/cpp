// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v(5);//by default values are 0 in the vector 
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
// cout<<v[0];
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(5,123456); 
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v[0]<<" "<<v[3];
}