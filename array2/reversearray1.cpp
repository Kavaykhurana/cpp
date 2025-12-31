// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return;
// }
// int main(){
//    vector<int>v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(5);
//    v.push_back(6);
//    v.push_back(7);

//    display(v);
//    cout<<endl;

//    reverse(v.begin(),v.end());
//    display(v);
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void reversepart(int i,int j,vector<int>&v){
   while(i<=j){
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
   }
   return;
}
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        
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
  //reversepart(2,6,v);
  reverse(v);
    cout<<endl;
 display(v);

//    reverse(v.begin(),v.end());
//    display(v);
//
 }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     }

// void reverse(vector<int>&v){
//     int i=0;

//     int j=v.size()-1;
//     while(i<=j){
//     int temp =v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
// }
// }

// int main(){
// vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(7);
// v.push_back(8);
// v.push_back(9);

// display(v);
// reverse(v);
// cout<<endl;
// display(v);


// }