// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int x;
//     cout<<"target value=";
//     cin>>x;
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]+arr[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return ;
// }
// int main(){
//    vector<int>v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(5);

//    vector<int>v1(v.size());

//    for(int i=0;i<v.size();i++){
//     for(int j=v.size()-1;j>=i;j--){
//          v[i]=v1[j];
//     }
//    }

// int i=0;
// int j=v.size()-1;
// while(i<v.size() || j>=0){
//     v1[j]=v[i];
//     i++;
//     j--;
// }

//     for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//    }
//    cout<<endl;
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return;
// }
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);

//     // for(int i=0;i<v.size();i++){
//     //     for(int j=v.size()-1;j>=i;j--){
//     //         swap(v[i],v[j]);
//     //     }
//     // }

//     int i=0;
//     int j=v.size()-1;
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";

//     }
// }

// #include<iostream>
// #include<vector>
// using  namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return;
// }

// void reverse(vector<int>&v,int i,int j){
//     // int i=0;
//     // int j=v.size()-1;
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
// }

// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);

//     int k;
//     cout<<"k=";
//     cin>>k;
//     if(k>v.size()){
//         k=k%(v.size());
//     }

//         display(v);
//         cout<<endl<<endl;
//         reverse(v,0,v.size()-1-k);
//         reverse(v,v.size()-k,v.size()-1);
//         reverse(v,0,v.size()-1);
//         display(v);
    


// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// int noz=0;
// int noo=0;
// for(int i=0;i<v.size();i++){
//     if(v[i]==0){
//         noz++;
//     }
//     else noo++;
// }
// for(int i=0;i<v.size();i++){
//     if(i<noz){
//         cout<<0<<" ";
//     }
//     else cout<<1<<" ";
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void swag(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return ;
// }
// int main(){
//     vector<int>v;
// v.push_back(0);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(1);

// int i=0;
// int j=v.size()-1;
// while(i<=j){
//      if(v[i]==1 && v[j]==0){
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         }
//         if(v[i]==0){
//          i++;
//         }
//         if(v[j]==1){
//             j--;
//         }
//         if(i>j) break;
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &a,int &b){
//     int x=a;
//     a=b;
//     b=x;
//     return;
// }
// int main(){
//         vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(-1);
// v.push_back(-2);
// v.push_back(-3);
// int i=0;
// int j=v.size()-1;
// while(i<=j){
//     if(v[i]>0 && v[j]<0){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
//     if(v[i]<0) i++;
//     if(v[j]>0) j--;
//     if(i>j) break;
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

//     vector<int>v;
// v.push_back(0);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(1);


// #include<iostream>
// #include<vector>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return;
// }
// int main(){
//         vector<int>v;
// v.push_back(0);
// v.push_back(2);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(2);
// v.push_back(1);
// v.push_back(0);
// v.push_back(2);
// v.push_back(1);
// int n=v.size();
// int lo=0;
// int mid=0;
// int hi=n-1;
// while(mid<=hi){
//     if(v[mid]==2){
//     swap(v[mid],v[hi]);
//     hi--;
//     }

//     else if(v[mid]==0){
//     swap(v[mid],v[lo]);
//     lo++;
//     mid++;
//     }

//     if(v[mid]==1){
//         mid++;
//     }
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" "; 
// }


// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    
}