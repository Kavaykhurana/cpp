// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={6,3,2,4,1,7,1,5};
//     bool flag=false;
//     for(int i=0;i<8-1;i++){
//      for(int j=i+1;j<7;j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i];
//             flag=true;
//             break;
//         }
//      }
//      if(flag==true) break;
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//    v.push_back(6);
//    v.push_back(3);
//    v.push_back(2);
//    v.push_back(4);
//    v.push_back(1);
//    v.push_back(7);
//    v.push_back(1);
//    v.push_back(5);
//    v.push_back(1);

//    vector<int>check(8,0);

//    for(int i=0;i<v.size();i++){
//     for(int j=0;j<check.size();j++){
//        check[j]=v[i];
//         check[j]++;
       
//         if (check[j]==2){
//             cout<<v[i];
//             break;
//         }
//     }
//    }
  
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//    v.push_back(6);
//    v.push_back(3);
//    v.push_back(2);
//    v.push_back(4);
//    v.push_back(1);
//    v.push_back(7);
//    v.push_back(1);
//    v.push_back(5);
   
   
//    sort(v.begin(),v.end());
// //    for(int i=0;i<v.size();i++){
// //     cout<<v[i]<<" ";
// //    }
// //    cout<<endl;

//    for(int i=0;i<v.size();i++){
//     if(v[i]==v[i+1]){
//         cout<<v[i];
//         break;
//     }
//    }
      
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
   v.push_back(6);
   v.push_back(3);
   v.push_back(2);
   v.push_back(4);
   v.push_back(1);
   v.push_back(7);
   v.push_back(1);
   v.push_back(5);

   int n=v.size();
   int sum=0;

for(int i=0;i<n;i++){
    sum+=v[i];
}
//cout<<sum;

int k=n*(n-1)/2;
//cout<<k<<" ";

if(sum>k){
    cout<<(sum-k);
}
     
}