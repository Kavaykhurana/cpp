#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[9]={7,1,2,5,8,4,9,3,6};
 int k=3;
 int Max=INT_MIN;
 for(int i=0;i<9-k+1;i++){
    int p=0;
    while(i<k && k<=9){
     p+=arr[i];
     i++;
    }
    Max=max(Max,p);
        i=k-3;
    k++;

 }
 cout<<Max;
}