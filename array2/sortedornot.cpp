//sorted or not 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}
int main(){
  vector<int>v;
  
  v.push_back(1); 
  v.push_back(2); 
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);

  display(v);
  cout<<endl;
  sort(v.begin(),v.end());
  display(v);


}