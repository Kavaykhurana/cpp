#include<iostream>
#include<vector>
using namespace std;
//two pass
void sortcolors (vector<int>& nums) {
       int noo=0;
       int noz=0;
       int noT=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) noz++;
        else if(nums[i]==1) noo++;
        else noT++;
       } 
       for(int i=0;i<nums.size();i++){
        if(i<noz) nums[i]=0;
        else if(i>=noz && i<nums.size()-noT) nums[i]=1;// i<(noz+noo)
        else nums[i]=2;
       }
    }
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   cout<<endl;
    sortcolors(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

}