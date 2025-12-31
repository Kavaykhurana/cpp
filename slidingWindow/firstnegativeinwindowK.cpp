// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[9]={2,-3,4,4,-7,-1,4,-2,6};
//     int k=3;  
//     vector<int>v;
//     for(int i=0;i<9-k+1;i++){
//            for(int j=i;j<i+k;j++){
//             if(arr[j]<0){
//                 v.push_back(arr[j]);
//                 break;           
//             }
//          }
//       }
//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       }
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[9]={2,-3,4,4,-7,-1,4,-2,6};
    int k=3;
    int p=-1;  
    vector<int>ans(9-k+1);
    
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    } 
    if(p==-1) ans[0]=1;
    else ans[0]=arr[p];

    int i=1;
    int j=k;
    while(j<9){
        if(p>=i) ans[i]=arr[p];
        else{
            p=-1;
            for(int x=i;x<=j;x++){
             if(arr[x]<0){
                p=x;   
                break;
            }}
            if(p!=-1) ans[i]=arr[p];
           else ans[i]=1;        
        }
        i++;
        j++;
    }
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
}