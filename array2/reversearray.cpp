#include<iostream>
#include<vector>
using namespace std;
int main(){
    
vector<int>v;
   v.push_back(2);
   v.push_back(5);
   v.push_back(7);
   v.push_back(0);
   v.push_back(2);
   v.push_back(1);
   v.push_back(0);
  

cout<<"original array:";
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;

cout<<"reversed array:";
   for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
   }

}