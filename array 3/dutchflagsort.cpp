// #include<iostream>
// #include<vector>
// using namespace std;
//   void sortcolors(vector<int>& nums) {
//        // one pass solution 
//        int lo=0;
//        int mid=0;
//        int hi =nums.size()-1;
//        //1) mid ke baare me socho
//        //2)o to lo-1 -> 0 ,hi+1 to end -> 2
//        // lo to mid-1-> 1
//        while(mid<=hi){
//         if(nums[mid]==2){
//             int temp =nums[mid];
//             nums[mid]=nums[hi];
//             nums[hi]=temp;
//             hi--;
//         }
//         else if(nums[mid]==0){
//             int temp =nums[mid];
//             nums[mid]=nums[lo];
//             nums[lo]=temp;
//             lo++;
//             mid++;
//         }
//         else mid++;
//        }
//     }
// int main(){
// vector<int>v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//    cout<<endl;
//     sortcolors(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            v[mid]=1;
            v[hi]=2;
            hi--;

        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            mid++;
            lo++;
        }
        else mid++;
    }
    return;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
vector<int>v;

v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(2);

display(v);
cout<<endl;
sort(v);
display(v);



}